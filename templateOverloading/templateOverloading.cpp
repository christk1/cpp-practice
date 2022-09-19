#include <bits/stdc++.h>
using namespace std;

template<typename T>
T Maximum(T a, T b) {
    return (a > b) ? a : b;
}

int main(int argc, char const *argv[])
{
    int a = Maximum(12, 3);
    cout << a << endl;
    return 0;
}
