#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
    char buffer[100];
    int count;
    char name[] = "Max";
    int age = 23;

    // write combination of strings and variables to buffer variable
    // store the number of characters written in count
    count = sprintf(buffer, "Hi, I am %s and I am %d years old", name, age);

    // print the string buffer
    cout << buffer << endl;

    // print the number of characters written
    cout << "Number of characters written = " << count;

    return 0;
}