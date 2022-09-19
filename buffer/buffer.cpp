#include <iostream>

using namespace std;

int main()
{
    int length{6};
    char* buffer = new char[length];
    buffer[0] = 'd';
    buffer[1] = 'n';
    buffer[2] = 'v';
    buffer[3] = 'f';
    buffer[4] = 'x';
    cout << buffer << endl;
    delete[ ] buffer;
    return 0;
}