// https://www.geeksforgeeks.org/power-function-cc/
// CPP program to illustrate
// working with integers in
// power function

// Working of pow() function with integers

// The pow() function takes ‘double’ as the arguments and returns a ‘double’ value. This function does not always work for integers. One such example is pow(5, 2). When assigned to an integer, it outputs 24 on some compilers and works fine for some other compilers. But pow(5, 2) without any assignment to an integer outputs 25. 

// One another way can be using the round function to assign it to some integer type.
 

//     This is because 52 (i.e. 25) might be stored as 24.9999999 or 25.0000000001 because the return type is double. When assigned to int, 25.0000000001 becomes 25 but 24.9999999 will give output 24.
//     To overcome this and output the accurate answer in integer format, we can add 1e-9 or 0.000000001 to the result and typecast it to int e.g (int)(pow(5, 2)+1e-9) will give the correct answer(25, in above example), irrespective of the compiler.
#include <bits/stdc++.h>
using namespace std;

int main()
{
  int a, b;

  // Using typecasting for
  // integer result
  a = (int)(pow(5, 2) + 0.5);
  b = round(pow(5, 2));
  cout << a << endl
       << b;

  return 0;
}
