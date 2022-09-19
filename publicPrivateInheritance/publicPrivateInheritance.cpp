// C++ program to demonstrate the working of private inheritance

// public, protected, and private inheritance have the following features:

//     public inheritance makes public members of the base class public in the derived class, and the protected members of the base class remain protected in the derived class.
//     protected inheritance makes the public and protected members of the base class protected in the derived class.
//     private inheritance makes the public and protected members of the base class private in the derived class.


#include <iostream>
using namespace std;

class Base
{
private:
    int pvt = 1;

protected:
    int prot = 2;

public:
    int pub = 3;

    // function to access private member
    int getPVT()
    {
        return pvt;
    }
};

class PrivateDerived : private Base
{
public:
    // function to access protected member from Base
    int getProt()
    {
        return prot;
    }

    // function to access private member
    int getPub()
    {
        return pub;
    }
};

int main()
{
    PrivateDerived object1;
    cout << "Private cannot be accessed." << endl;
    cout << "Protected = " << object1.getProt() << endl;
    cout << "Public = " << object1.getPub() << endl;
    return 0;
}