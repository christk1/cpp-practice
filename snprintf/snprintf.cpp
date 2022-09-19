// Unlike sprintf(), maximum number of characters that can be written to the buffer is specified in snprintf().

#include <cstdio>
#include <iostream>

using namespace std;

int main()
{
  char buffer[100];
  int retVal, buf_size = 100;
  char name[] = "Max";
  int age = 23;

  retVal = snprintf(buffer, buf_size, "Hi, I am %s and I am %d years old", name, age);
  if (retVal > 0 && retVal < buf_size)
  {
    cout << buffer << endl;
    cout << "Number of characters written = " << retVal << endl;
  }
  else
    cout << "Error writing to buffer" << endl;
  return 0;
}

// Output: Tutorial