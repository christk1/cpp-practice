#include <iostream>
#include <algorithm>
#include <vector> // std::vector

using namespace std;

int main(int argc, char const *argv[])
{
    int size = 10;
    char arr1[] = {'F', 'G', 'H', 'I', 'J', 'K', 'L', 'M', 'N', 'O'};
    char arr2[size];

    copy(arr1, arr1 + size, arr2); // auto copying
    /////////////////////////////////////////////////////////

    int myints[] = {10, 20, 30, 40, 50, 60, 70};
    std::vector<int> myvector(7);

    std::copy(myints, myints + 7, myvector.begin());

    std::cout << "myvector contains:";
    for (std::vector<int>::iterator it = myvector.begin(); it != myvector.end(); ++it)
        std::cout << ' ' << *it;

    std::cout << '\n';
    return 0;
}
