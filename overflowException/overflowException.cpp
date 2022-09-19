// https://stackoverflow.com/questions/199333/how-do-i-detect-unsigned-integer-overflow

#include <bits/stdc++.h>
using namespace std;

class Factorial
{
private:
    int num;
    int factorial = 1;

public:
    void calculateFactorial();
    void show();
};

void Factorial::calculateFactorial()
{
    cout << "Enter a number : " << endl;
    cin >> num;

    if (num == 0 || num == 1)
    {
        factorial = 1;
    }
    else
    {
        while (num > 1)
        {
            if (num != 0 && factorial > INT_MAX / num)
                throw std::overflow_error("overflow");
            factorial = factorial * num;
            num--;
        }
    }
}

void Factorial::show()
{
    cout << "Factorial : " << factorial << endl;
}

int main(int argc, char const *argv[])
{
    try
    {
        Factorial f;
        f.calculateFactorial();
        f.show();
    }
    catch (const std::overflow_error e)
    {
        std::cerr << e.what() << '\n';
    }
    catch (const std::exception &e)
    {
        std::cerr << e.what() << '\n';
    }

    return 0;
}
