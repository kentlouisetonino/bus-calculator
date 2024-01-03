#include <iostream>
#include "./libs/appdescription.cpp"
#include "./libs/clearscreen.cpp"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define RESET "\033[0m"

int main() {  
  int totalSeats;
  int totalPassengers;
  int emptySeats;
  int isContinue;

  do {
    // Clean up the screen first.
    clearScreen();

    // Application description.
    appDescription();

    // Ask input for total bus seats.
    std::cout << endl << "\tEnter the total number of bus seats \t: ";
    std::cin >> totalSeats;

    // Ask input for total passengers.
    std::cout << "\tEnter the total number of passengers \t: ";
    std::cin >> totalPassengers;

    if (totalPassengers < totalSeats) {
      // If passengers less than total seats.
      emptySeats = totalSeats - totalPassengers;
      std::cout << "\tTotal last trip empty seats \t\t: " << emptySeats << endl << endl;
      
      // Ask if want to continue.
      std::cout << "\tTry again (1 - yes, 0 = no)? \t\t: ";
      std::cin >> isContinue;
    } else {
      emptySeats = totalPassengers % totalSeats;
      
      if (emptySeats == 0) {
        // If total seats is divisible by total passengers.
        std::cout << "\tTotal last trip empty seats: " << emptySeats << endl << endl;

        // Ask if want to continue.
        std::cout << "\tDo you want to continue (1 - yes, 0 = no)?: ";      
        std::cin >> isContinue;
      } else {
        // If total seats are not divisible by total passengers.
        emptySeats = totalSeats - emptySeats;
        std::cout << "\tTotal last trip empty seats: " << emptySeats << endl << endl;
        
        // Ask if want to continue
        std::cout << "\tDo you want to continue (1 - yes, 0 = no)?: ";      
        std::cin >> isContinue;
      }
    }
  } while (isContinue != 0);
  
  clearScreen();

  return 0;
}
