#include <iostream>
#include <string>
#include <cmath>
using std::cout;
using std::cin;
using std::endl;

double power(double base, int exponent)
{
     double result = 1;
     for(int i = 0; i < exponent; i++)
     {
          result = result * base;
     }
     return result;
}

void print_pow(double base, int exponent)
{
   
     double mypower = power(base, exponent);
     cout << base << " raise to the " << exponent << " power is " <<mypower << endl;
}


int main() 
{
     //This is a Comment
     double base;
     int exponent;
     cout<< "What is the base? ";
     cin >> base;
     cout << "What is the exponent? ";
     cin >> exponent;
     double mypower = power(base, exponent);
     cout << mypower << endl;
     print_pow(base, exponent);

}

