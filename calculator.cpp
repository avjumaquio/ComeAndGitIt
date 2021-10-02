#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers,diffOfTwoNumbers;
    
  
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
    diffOfTwoNumbers=firstNumber-secondNumber;

    // Prints sum 
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
    //Print difference
    cout << firstNumber << " - " <<  secondNumber << " = " << diffOfTwoNumbers; 

    return 0;

}