//
//  main.cpp
//  Activity-22
//
//  Created by Juwon Hong on 10/19/24.
//

#include <iostream>
#include <string>
using namespace std;

// Function to print a greeting
void greet(const string& name) {
    cout << "Hello, " << name << endl;
}

// Function to split the full name into first name and last name
void splitName(const string& fullName, string& firstName, string& lastName) {
    size_t spaceIndex = fullName.find(' ');
    firstName = fullName.substr(0, spaceIndex);
    lastName = fullName.substr(spaceIndex + 1);
}

int main() {
    // Set the full, first, and last name
    string fullName = "Juwon Hong";
    string firstName, lastName;

    // Split the first and last name
    splitName(fullName, firstName, lastName);

    // Print first name and last name
    cout << "First Name: " << firstName << endl;
    cout << "Last Name: " << lastName << endl;

    // Greeting full name
    greet(fullName);

    return 0;
}
