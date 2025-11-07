#include <iostream>
using namespace std;

 int main() {
  int code;
  std::cout << "Enter a code: ";
  std::cin >> code;
  switch (code) {
    case 1:
      std::cout << "First Year";
      break;
    case 2:
      std::cout << "Second Year";
      break;
    case 3:
      std::cout << "Third Year";
      break;
    case 4:
      std::cout << "Fourth Year";
      break;
    case 5:
      std::cout << "Fifth Year";
      break;
    default:
      std::cout << "Sorry, the number is not in the choices";
  
 
  }
  return 0;
}

