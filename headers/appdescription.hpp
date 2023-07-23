#include <iostream>
#define GREEN "\033[32m"
#define RESET "\033[0m"
using namespace std;

void appDescription() {
  cout << endl << endl;
  cout << GREEN;
  cout << "------------------------------------------------------" << endl;
  cout << "|          **TRANSPORTATION CALCULATOR**             |" << endl;
  cout << "|                                                    |" << endl;
  cout << "| Calculate the Bus last trip empty seats based on a |" << endl;
  cout << "| total number of Bus seats and Passengers.          |" << endl;
  cout << "------------------------------------------------------" << endl;
  cout << GREEN RESET;
}

