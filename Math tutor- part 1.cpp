// Math tutor- part 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
/* 
File Name: Math tutor part 1
Programmer: Olivia Ruiz 
Date: 3/27
Requirements: Write a program that can be used for students. Program should display
2 randome number to be added. The program will wait until key is pressed then display the answer. 

*/

#include <iostream>

#include <iostream>
#include <cstdlib>
#include <ctime>
#include <conio.h>

using namespace std;

int main() {
   
    srand(static_cast<unsigned int>(time(0)));

    
    int num1 = rand() % 100 + 1;
    int num2 = rand() % 100 + 1;

    cout << "Add these numbers: " << num1 << " + " << num2 << endl;

    
    cout << "Press any key to see the answer..." << endl;

    
    _getch();  

    
    int answer = num1 + num2;
    cout << "The answer is: " << answer << endl;

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
