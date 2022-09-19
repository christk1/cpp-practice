#include <cstring>
#include <iostream>
using namespace std;

int main() {
  char source[] = "Tutorial";
  char destination[] = "Programiz";
  char source1[] = "uiuopppp";

  // copy all bytes of destination to source
  memcpy(destination, source, sizeof(source));

  cout << destination << endl;

  // copy 4 bytes of destination to source
  memcpy(destination, source1, 4);

  cout << destination << endl;

  return 0;
}

// Output: Tutorial