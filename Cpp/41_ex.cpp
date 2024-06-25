#include <iostream>
#include <ctime>

int main() {
    int currentYear, currentMonth, currentDate, age;

    std::cout << "Enter the current date (YYYY MM DD): ";
    std::cin >> currentYear >> currentMonth >> currentDate;

    std::cout << "Enter your age: ";
    std::cin >> age;

    // Calculate the year of birth
    int birthYear = currentYear - age;

    std::cout << "Your date of birth is: " << birthYear << " " << currentMonth << " " << currentDate << std::endl;

    return 0;
}