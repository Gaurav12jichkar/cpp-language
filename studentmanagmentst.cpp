#include <iostream>
#include <string>
#include <vector>

using namespace std;

// Define a structure to store student information
struct Student {
  int id;
  string name;
  vector<int> grades;
};

int main() {
  // Create a vector to store a list of students
  vector<Student> students;

  // Loop to allow the user to enter multiple students
  char addMoreStudents = 'y';
  while (addMoreStudents == 'y') {
    // Create a new student
    Student s;

    // Get the student's ID
    cout << "Enter the student's ID: ";
    cin >> s.id;

    // Get the student's name
    cout << "Enter the student's name: ";
    cin.ignore(); // Ignore the newline left in the buffer by cin
    getline(cin, s.name);

    // Loop to allow the user to enter multiple grades for the student
    char addMoreGrades = 'y';
    while (addMoreGrades == 'y') {
      // Get a grade from the user
      int grade;
      cout << "Enter a grade: ";
      cin >> grade;

      // Add the grade to the student's list of grades
      s.grades.push_back(grade);

      // Ask the user if they want to enter more grades
      cout << "Enter another grade? (y/n) ";
      cin >> addMoreGrades;
    }

    // Add the student to the list of students
    students.push_back(s);

    // Ask the user if they want to enter more students
    cout << "Enter another student? (y/n) ";
    cin >> addMoreStudents;
  }

  // Print the list of students
  cout << "Student List:" << endl;
  for (vector<Student>::iterator it = students.begin(); it != students.end(); ++it) {
    Student s = *it;
    cout << "ID: " << s.id << ", Name: " << s.name << ", Grades: ";
    for (vector<int>::iterator it2 = s.grades.begin(); it2 != s.grades.end(); ++it2) {
      cout << *it2 << " ";
    }
    cout << endl;
  }

  return 0;
}
