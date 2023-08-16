#include <iostream>
#include <string>

int main() {
    std::cout << "Welcome to the Text-Based Adventure Game!" << std::endl;
    
    std::string playerName;
    std::cout << "Enter your name: ";
    std::getline(std::cin, playerName);
    
    std::cout << "Hello, " << playerName << "! You find yourself in a dark forest." << std::endl;
    
    char choice;
    std::cout << "You have two paths ahead: A or B" << std::endl;
    std::cin >> choice;
    
    if (choice == 'A' || choice == 'a') {
        std::cout << "You chose path A. You stumble upon a river." << std::endl;
        std::cout << "Do you want to swim (S) across or build a raft (R)?" << std::endl;
        std::cin >> choice;
        
        if (choice == 'S' || choice == 's') {
            std::cout << "You tried to swim across the river but got caught in the current and were swept away." << std::endl;
            std::cout << "Game Over!" << std::endl;
        } else if (choice == 'R' || choice == 'r') {
            std::cout << "You build a raft and successfully cross the river." << std::endl;
            std::cout << "You continue your journey deeper into the forest." << std::endl;
            std::cout << "The adventure continues..." << std::endl;
        } else {
            std::cout << "Invalid choice." << std::endl;
        }
    } else if (choice == 'B' || choice == 'b') {
        std::cout << "You chose path B. You encounter a cave entrance." << std::endl;
        std::cout << "Do you enter the cave (E) or continue along the path (C)?" << std::endl;
        std::cin >> choice;
        
        if (choice == 'E' || choice == 'e') {
            std::cout << "You enter the cave and find a treasure chest." << std::endl;
            std::cout << "Congratulations, " << playerName << "! You have found the hidden treasure!" << std::endl;
        } else if (choice == 'C' || choice == 'c') {
            std::cout << "You decide to continue along the path and encounter a group of friendly travelers." << std::endl;
            std::cout << "You join them on their journey." << std::endl;
            std::cout << "The adventure continues..." << std::endl;
        } else {
            std::cout << "Invalid choice." << std::endl;
        }
    } else {
        std::cout << "Invalid choice." << std::endl;
    }
    
    std::cout << "Thank you for playing the Text-Based Adventure Game, " << playerName << "!" << std::endl;
    
    return 0;
}