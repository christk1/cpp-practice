#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    char str[] = "My name is Ayush";
    char *ch = strchr(str, 'a');
    cout << ch - str;

    char str1[] = "My name is Ayush";
    char ch1 = 'A', ch2 = 'z';
    if (strchr(str1, ch1) != NULL)
        cout << ch1 << " "
             << "is present in string" << endl;
    else
        cout << ch1 << " "
             << "is not present in string" << endl;
    if (strchr(str1, ch2) != NULL)
        cout << ch2 << " "
             << "is present in string" << endl;
    else
        cout << ch2 << " "
             << "is not present in string" << endl;
    return 0;
}
