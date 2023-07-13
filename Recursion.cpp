#include <iostream>
#include <string>

using namespace std;

unsigned int sum_of_digitsWORecursion(unsigned int);
int sum_of_digits(int);

int main()
{
   //alternative solution without using recursion
    cout << "This one is a solution WITHOUT USING Recursion\n";
    cout << sum_of_digitsWORecursion(1234);  //1+2+3+4 = 10

    cout << endl << endl;

    //THE REAL DEAL, THIS IS THE CORRECT WAY AND HOW TO USE RECURSION THE RIGHT WAY
    cout << "This one is a solution USING Recursion\n";
    cout << sum_of_digits(1324) << endl; //1+2+3+4 = 10

}

//alternative solution without using recursion
unsigned int sum_of_digitsWORecursion(unsigned int n)
{
    if (n == 0) return 0;
     string digitStr{ to_string(n) }; //convert the parameter to string
     int result{};
     for (auto numStr : digitStr)    //foreach characters in the string
     {
         string digitTmpStr{ numStr };         //store the character to the string variable
         int digitNum{ stoi(digitTmpStr) };    //convert the character in the digitTmpStr into an int then store it on numberVal
         result += digitNum;                   //Pile up the values or sum all the values together
     }
     return result;
}

//RECURSION
int sum_of_digits(int n) 
{
    if (n == 0)
        return 0;
    return (n % 10 + sum_of_digits(n / 10));
}


