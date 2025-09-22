//Dilpreet Singh
//Education age level checker (Cool name)
//Mrs. Alblas 2B
//9/22/2025
//Classmate Program:
#include <iostream>
using namespace std;

int main() {
    // ANSI color codes
    const string RED = "\033[31m";
    const string GREEN = "\033[32m";
    const string YELLOW = "\033[33m";
    const string BLUE = "\033[34m";
    const string RESET = "\033[0m";

    // Ask age
    cout << BLUE << "👋 Hello, User:" << RESET << endl;

    // Input
    int age;
    cout << YELLOW << "📅 What is your age: " << RESET;
    cin >> age;
    cout << GREEN << "✅ You entered: " << age << RESET << endl;

    // Age check
    if (age >= 14 && age <= 18) {
        cout << GREEN << "🏫 You are of high school age." << RESET << endl;
    } else if (age > 18 && age <= 22) {
        cout << GREEN << "🎓 You are of college age." << RESET << endl;
    } else {
        cout << RED << "🚫 You are not of high school or college age." << RESET << endl;
    }
    // Reset makes it format better
    return 0;
}