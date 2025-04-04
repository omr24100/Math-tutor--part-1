// Math tutor- part 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* 
File Name: Math tutor part 3
Programmer: Olivia Ruiz 
Date: 3/27
Requirements: Allow the user to select addition, subtraction, multiplication or division. 
The final sleection should let the user close the program. After the math problem is solved,
the program should display the menu again and user choses to quit.  

*/

#define MATH_OPERATIONS_H

int generateRandomNumber();
int addNumbers(int num1, int num2);
int subtractNumbers(int num1, int num2);
int multiplyNumbers(int num1, int num2);
double divideNumbers(int num1, int num2);
void initializeRandom();  


#include <ctime>
#include <stdexcept>


void initializeRandom() {
    srand(time(0));  
}


int generateRandomNumber() {
    return rand() % 20 + 1; 
}


int addNumbers(int num1, int num2) {
    return num1 + num2;
}

int subtractNumbers(int num1, int num2) {
    return num1 - num2;
}


int multiplyNumbers(int num1, int num2) {
    return num1 * num2;
}


double divideNumbers(int num1, int num2) {
    if (num2 == 0) {
        throw std::invalid_argument("Cannot divide by zero");
    }
    return static_cast<double>(num1) / num2;
}

#define USER_INPUT_H

int getUserAnswer();
void printFeedback(int userAnswer, double correctAnswer);
int displayMenu();


#include <iostream>

using namespace std;


int getUserAnswer() {
    int answer;
    cout << "Your answer: ";
    cin >> answer;
    return answer;
}


void printFeedback(int userAnswer, double correctAnswer) {
    if (userAnswer == correctAnswer) {
        cout << "Congratulations! You got it right!" << endl;
    }
    else {
        cout <<  "The correct answer is " << correctAnswer << "." << endl;
    }
}


int displayMenu() {
    int choice;
    cout << "\nMath Tutor Menu:" << endl;
    cout << "1. Addition" << endl;
    cout << "2. Subtraction" << endl;
    cout << "3. Multiplication" << endl;
    cout << "4. Division" << endl;
    cout << "5. Quit" << endl;
    cout << "Please select an operation: ";
    cin >> choice;
    return choice;
}
#include <iostream>

using namespace std;

int main() {
    int userChoice;

    
    initializeRandom();

    do {
        
        userChoice = displayMenu();

        
        int num1, num2;
        double correctAnswer;
        int userAnswer;

        
        switch (userChoice) {
        case 1:  
            num1 = generateRandomNumber();
            num2 = generateRandomNumber();
            correctAnswer = addNumbers(num1, num2);
            cout << "What is " << num1 << " + " << num2 << "?" << endl;
            userAnswer = getUserAnswer();
            printFeedback(userAnswer, correctAnswer);
            break;

        case 2:  
            num1 = generateRandomNumber();
            num2 = generateRandomNumber();
            correctAnswer = subtractNumbers(num1, num2);
            cout << "What is " << num1 << " - " << num2 << "?" << endl;
            userAnswer = getUserAnswer();
            printFeedback(userAnswer, correctAnswer);
            break;

        case 3:  
            num1 = generateRandomNumber();
            num2 = generateRandomNumber();
            correctAnswer = multiplyNumbers(num1, num2);
            cout << "What is " << num1 << " * " << num2 << "?" << endl;
            userAnswer = getUserAnswer();
            printFeedback(userAnswer, correctAnswer);
            break;

        case 4:  
            num1 = generateRandomNumber();
            num2 = generateRandomNumber();
            
            if (num2 == 0) num2 = 1;
            correctAnswer = divideNumbers(num1, num2);
            cout << "What is " << num1 << " / " << num2 << "?" << endl;
            userAnswer = getUserAnswer();
            printFeedback(userAnswer, correctAnswer);
            break;

        case 5:  
            cout << "Thank you for using the Math Tutor! Goodbye!" << endl;
            break;

        default:
            cout << "Invalid choice. Please select a valid option." << endl;
        }

    } while (userChoice != 5);  

    return 0;
}


// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file
