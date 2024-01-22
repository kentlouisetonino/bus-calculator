#include <iostream>
#include "./libs/appdescription.cpp"
#include "./libs/clearscreen.cpp"
#define GREEN "\033[32m"
#define CYAN "\033[36m"
#define RESET "\033[0m"
using namespace std;

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
    cout << endl << "\tEnter the total number of bus seats \t: ";
    cin >> totalSeats;

    // Ask input for total passengers.
    cout << "\tEnter the total number of passengers \t: ";
    cin >> totalPassengers;

    if (totalPassengers < totalSeats) {
      // If passengers less than total seats.
      emptySeats = totalSeats - totalPassengers;
      cout << "\tTotal last trip empty seats \t\t: " << emptySeats << endl << endl;
      
      // Ask if want to continue.
      cout << "\tTry again (1 - yes, 0 = no)? \t\t: ";
      cin >> isContinue;
    } else {
      emptySeats = totalPassengers % totalSeats;
      
      if (emptySeats == 0) {
        // If total seats is divisible by total passengers.
        cout << "\tTotal last trip empty seats: " << emptySeats << endl << endl;

        // Ask if want to continue.
        cout << "\tDo you want to continue (1 - yes, 0 = no)?: ";      
        cin >> isContinue;
      } else {
        // If total seats are not divisible by total passengers.
        emptySeats = totalSeats - emptySeats;
        cout << "\tTotal last trip empty seats: " << emptySeats << endl << endl;
        
        // Ask if want to continue
        cout << "\tDo you want to continue (1 - yes, 0 = no)?: ";      
        cin >> isContinue;
      }
    }
  } while (isContinue != 0);
  
  clearScreen();

  return 0;
}

