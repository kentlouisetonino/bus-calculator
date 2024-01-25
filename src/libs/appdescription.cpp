#include <iostream>
#define GREEN "\033[32m"
#define RESET "\033[0m"
using namespace std;

void appDescription() {
  cout << endl << endl;
  cout << GREEN;
  cout << "\t------------------------------------------------------" << endl;
  cout << "\t|                 ** BUS CALCULATOR **               |" << endl;
  cout << "\t|                                                    |" << endl;
  cout << "\t| Calculate the Bus last trip empty seats based on a |" << endl;
  cout << "\t| total number of Bus seats and Passengers.          |" << endl;
  cout << "\t------------------------------------------------------" << endl;
  cout << GREEN RESET;
}
