#include <iostream>
#include <cstring>
using namespace std;

int main(int argc, char const *argv[])
{
    string src_str1 = "Learning_New_Language";
    char dest_on[30];
    cout << "Present_source_strng : " << src_str1 << '\n';
    src_str1.copy(dest_on, src_str1.size());
    cout << "Final_string_dest: " << dest_on << endl;
    //////////////////////////////////////
    char sr_1[] = "Welcome_Everyone !";
    char dest_n[50];
    strcpy(dest_n, sr_1);
    cout << dest_n << endl;
    return 0;
}
