#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>

using namespace std;

const int TRACK_LENGTH = 50; // Length of the race track

// Define a structure to store car information
struct Car {
  string name;
  int speed;
  int position;
};

int main() {
  // Seed the random number generator
  srand(time(0));

  // Create a vector to store a list of cars
  vector<Car> cars;

  // Loop to allow the user to enter multiple cars
  char addMoreCars = 'y';
  while (addMoreCars == 'y') {
    // Create a new car
    Car c;

    // Get the car's name
    cout << "Enter the car's name: ";
    cin.ignore(); // Ignore the newline left in the buffer by cin
    getline(cin, c.name);

    // Get the car's speed
    cout << "Enter the car's speed (1-10): ";
    cin >> c.speed;

    // Set the car's starting position
    c.position = 0;

    // Add the car to the list of cars
    cars.push_back(c);

    // Ask the user if they want to enter more cars
    cout << "Enter another car? (y/n) ";
    cin >> addMoreCars;
  }

  // Run the race
  cout << "Starting the race!" << endl;
  while (true) {
    // Loop through all the cars and update their positions
    for (vector<Car>::iterator it = cars.begin(); it != cars.end(); ++it) {
      Car& c = *it;
      c.position += rand() % c.speed + 1; // Advance the car by a random number of positions

      // Check if the car has crossed the finish line
      if (c.position >= TRACK_LENGTH) {
        // The car has won the race
        cout << c.name << " has won the race!" << endl;
        return 0;
      }
    }
  }

  return 0;
}

