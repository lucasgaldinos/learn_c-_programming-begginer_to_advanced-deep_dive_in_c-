// C++ program to demonstrate
// anomaly of delimitation of
// getline() function
#include <iostream>
#include <string>
using namespace std;

int main() {
  char name[50];
  string name1;
  int id;

  // Taking id as input
  cout << "Please enter your id: \n";
  cin >> id;

  // Takes the empty character as input
  cout << "Please enter your name: \n";
  getline(cin, name1); // This line allows the user to enter the name as a string

  // Prints id
  cout << "Your id : " << id << "\n";

  // Prints nothing in name field
  // as "\n" is considered a valid string
  cout << "Hello, " << name << " welcome to GfG !\n";

  // Again Taking string as input
  cin.getline(name, 60); // this line allows the user to enter the name as a character array

  // This actually prints the name
  cout << "Hello, " << name << " welcome to GfG !\n";

  return 0;
}
