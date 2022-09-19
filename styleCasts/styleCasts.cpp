// • static_cast converts between related types such as one pointer type to another in the same
// class hierarchy, an integral type to an enumeration, or a floating-point type to an integral
// type. It also does conversions defined by constructors (§16.2.6, §18.3.3, §iso.5.2.9) and
// conversion operators (§18.4).
// • reinterpret_cast handles conversions between unrelated types such as an integer to a pointer
// or a pointer to an unrelated pointer type (§iso.5.2.10).
// • const_cast converts between types that differ only in const and volatile qualifiers (§iso.5.2.11).
// • dynamic_cast does run-time checked conversion of pointers and references into a class hierarchy (§22.2.1, §iso.5.2.7).

#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
    char x = 'a';
    // int* p1 = &x; // error : no implicit char* to int* conversion
    // int *p2 = static_cast<int *>(&x); // error : no implicit char* to int* conversion
    int *p3 = reinterpret_cast<int *>(&x); // OK: on your head be it
    
    
    struct B
    { /* ... */
    };
    struct D : B
    {  /* ... */
    }; // see §3.2.2 and §20.5.2
    B *pb = new D;
    // D *pd = pb; // error : no implicit conversion from B* to D*
    D *pd = static_cast<D *>(pb);
    return 0;
}
