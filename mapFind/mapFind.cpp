#include <algorithm>
#include <cctype>
#include <iomanip>
#include <iostream>
#include <string>
#include <vector>

int main()
{
    std::string s{"hello"};
    std::transform(s.cbegin(), s.cend(),
                   s.begin(), // write to the same location
                   [](unsigned char c)
                   { return std::toupper(c); });
    std::cout << "s = " << quoted(s) << '\n';

    // achieving the same with std::for_each (see Notes above)
    std::string g{"hello"};
    std::for_each(g.begin(), g.end(), [](char &c) { // modify in-place
        c = std::toupper(static_cast<unsigned char>(c));
    });
    std::cout << "g = " << quoted(g) << '\n';

    std::vector<std::size_t> ordinals;
    std::transform(s.cbegin(), s.cend(), std::back_inserter(ordinals),
                   [](unsigned char c)
                   { return c; });

    std::cout << "ordinals: ";
    for (auto ord : ordinals)
    {
        std::cout << ord << ' ';
    }

    std::transform(ordinals.cbegin(), ordinals.cend(), ordinals.cbegin(),
                   ordinals.begin(), std::plus<>{});

    std::cout << "\nordinals: ";
    for (auto ord : ordinals)
    {
        std::cout << ord << ' ';
    }
    std::cout << '\n';
}