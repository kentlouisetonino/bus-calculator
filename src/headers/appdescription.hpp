#include <iostream>
#define GREEN "\033[32m"
#define RESET "\033[0m"

void appDescription() {
  std::cout << endl << endl;
  std::cout << GREEN;
  std::cout << "------------------------------------------------------" << endl;
  std::cout << "|                 **Bus CALCULATOR**                 |" << endl;
  std::cout << "|                                                    |" << endl;
  std::cout << "| Calculate the Bus last trip empty seats based on a |" << endl;
  std::cout << "| total number of Bus seats and Passengers.          |" << endl;
  std::cout << "------------------------------------------------------" << endl;
  std::cout << GREEN RESET;
}

