#include <iostream>

int main() {
  for (int i=0; i<5; i++) {
    for (int j=0; j<5; j++) {
      if (i==0 || j+i==4 || i==4) {
        std::cout << "*";
      } else {
        std::cout << " ";
      }
    }
    std::cout << std::endl; //for inserting new lines in btw star patterns
  }
  return 0;
}
