#include <iostream>
#include <stdlib.h>

int string_to_int(const char *num) {
  return atoi(num);
}

void ls() {
  system("ls");
}


int main(int argc, char *argv[])
{
   std::cout << "Hello CMake!" << std::endl;
   return 0;
}
