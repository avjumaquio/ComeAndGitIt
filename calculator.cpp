#include <iostream>
using namespace std;

int main()
{
    int firstNumber, secondNumber, sumOfTwoNumbers,diffOfTwoNumbers,productOfTwoNumbers,quotientOfTwoNumbers;
    
  
    cout << "Enter two integers: ";
    cin >> firstNumber >> secondNumber;

    // sum of two numbers in stored in variable sumOfTwoNumbers
    sumOfTwoNumbers = firstNumber + secondNumber;
    diffOfTwoNumbers=firstNumber-secondNumber;
    productOfTwoNumbers=firstNumber*secondNumber;
    quotientOfTwoNumbers=firstNumber/secondNumber;

    // Prints sum 
    cout << firstNumber << " + " <<  secondNumber << " = " << sumOfTwoNumbers;     
    //Print difference
    cout << firstNumber << " - " <<  secondNumber << " = " << diffOfTwoNumbers; 
     //Print product
    cout << firstNumber << " * " <<  secondNumber << " = " << productOfTwoNumbers; 
    //Print the quotient
     cout << firstNumber << " / " <<  secondNumber << " = " <<quotientOfTwoNumbers; 

     //comment


    return 0;

}