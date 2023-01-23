#include <iostream>
#include <string>

const std::string PASSWORD = "password";
bool isArmed = false;

void arm() {
    std::cout << "Enter the password to arm the system: ";
    std::string input;
    std::cin >> input;
    if (input == PASSWORD) {
        isArmed = true;
        std::cout << "System armed." << std::endl;
    } else {
        std::cout << "Incorrect password. System not armed." << std::endl;
    }
}

void disarm() {
    std::cout << "Enter the password to disarm the system: ";
    std::string input;
    std::cin >> input;
    if (input == PASSWORD) {
        isArmed = false;
        std::cout << "System disarmed." << std::endl;
    } else {
        std::cout << "Incorrect password. System still armed." << std::endl;
    }
}

int main() {
    std::cout << "Welcome to the security system." << std::endl;
    std::cout << "Type 'arm' to arm the system or 'disarm' to disarm the system." << std::endl;
    std::string input;
    while (true) {
        std::cin >> input;
        if (input == "arm") {
            arm();
        }
