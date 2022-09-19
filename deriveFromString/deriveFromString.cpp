#include <iostream>
#include <string>
using namespace std;

class MyString : public std::string
{
public:
    void transform();
};

void MyString::transform()
{
    this->assign(*this + " - 1 2 3");
}

int main(int argc, char const *argv[])
{
    MyString s{"one two three"};

    cout << s << endl;
    s.transform();
    cout << s << endl;

    return 0;
}
