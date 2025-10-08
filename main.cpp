/*  Ethan Biggar
 Lab 3 User and File I/O
 C++ 2025
 Due Date: 10/9/2025
 Description: Write a C++ program that computes imputs and outputs mean and population of standard deviation
 */

#include <iostream>
#include <fstream>
#include <cmath>    // for sqrt and pow functions

//Function declaration for infile numbers
float Mean(int number_, int number2_, int number3_, int number4_);
float stdDevPop(int number_, int number2_, int number3_, int number4_, int mean_);


int main()
{
    //1. create an ifstream object to read from a file
    std::ifstream inFile;
    
    //2. open file
    inFile.open("/Users/ethanbiggar/Desktop/Computer Science/Lab 3/Lab 3/inMeanStd.dat");
    
    int number;
    //3. read number from file
    inFile >> number;
    //4. print the number to the console
    std::cout << "The first number read from the file is: " << number << std::endl;
    
    int number2;
    inFile >> number2;
    std::cout << "The second number read from the file is: " << number2 << std::endl;
    
    int number3;
    inFile >> number3;
    std::cout << "The third number read from the file is: " << number3 << std::endl;
    
    int number4;
    inFile >> number4;
    std::cout << "The fourth number read from the file is: " << number4 << std::endl;
    
    //5. closes the file
    inFile.close();
    
    //allows you to input numbers for mean and standard deviation calculations
    int inumber1;
    std::cout << "Input first number of choice:" << std::endl; // Gives directions to input first number
    std::cin >> inumber1;
    std::cout << "The first number read from the user input is: " << inumber1 << std::endl;
    
    int inumber2;
    std::cout << "Input second number of choice:" << std::endl; //Gives directions to input second number
    std::cin >> inumber2;
    std::cout << "The second number read from the user input is: " << inumber2 << std::endl;
    
    int inumber3;
    std::cout << "Input third number of choice:" << std::endl; //Gives directions to input third number
    std::cin >> inumber3;
    std::cout << "The third number read from the user input is: " << inumber3 << std::endl;
    
    int inumber4;
    std::cout << "Input fourth number of choice:" << std::endl; //Gives directions to input fourth number
    std::cin >> inumber4;
    std::cout << "The fourth number read from the user input is: " << inumber4 << std::endl;

    inFile.close();
    
    // For neatness
    std::cout << std::endl;

    //1. create an ofstream object to write file
    std::ofstream outFile;
    
    //2. Outputs the calculations of the mean and standard deviation to the file
    outFile.open("/Users/ethanbiggar/Desktop/Computer Science/Lab 3/Lab 3/outMeanStd.dat");
    outFile << " The mean of the four numbers from the file is: " << Mean(number, number2, number3, number4) << std::endl;
    outFile << " The standard deviation of the four numbers from the file is: " << stdDevPop(number, number2, number3, number4, Mean(number, number2, number3, number4))<< std::endl;
    outFile << "The mean of the four numbers from the user input is: " << Mean(inumber1, inumber2, inumber3, inumber4) << std::endl;
    outFile << "The standard deviation of the four numbers from the user input is: " << stdDevPop(inumber1, inumber2, inumber3, inumber4, Mean(inumber1, inumber2, inumber3, inumber4))<< std::endl;
    
    // Displays text and calculations for the mean and standard deviation
    std::cout << "The mean of the integers from the file is: " << Mean(number, number2, number3, number4) << std::endl;
    std::cout << "The standard deviation of the integers from the file is: " << stdDevPop(number, number2, number3, number4, Mean(number, number2, number3, number4)) << std::endl;
    std::cout<< "The mean of the four integers from the user input is: " << Mean(inumber1, inumber2, inumber3, inumber4) << std::endl;
    std::cout << "The standard deviation of the four integers from the user input is: " << stdDevPop(inumber1, inumber2, inumber3, inumber4, Mean(inumber1, inumber2, inumber3, inumber4))<< std::endl;

    return 0;
}

//Calculates the mean and population standard deviation of the four numbers from file
float Mean(int number_, int number2_, int number3_, int number4_)
{
    return (number_ + number2_ + number3_ + number4_) / 4.0;
}

float stdDevPop(int number_, int number2_, int number3_, int number4_, int mean_)
{
    return sqrt((pow(number_ - mean_, 2) + pow(number2_ - (mean_), 2) + pow(number3_ - mean_, 2) + pow(number4_ - mean_, 2)) / 4.0);
}

