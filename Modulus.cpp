// Aprogram that displays the modulus of a number.
#include<cstdlib>
#include<iostream>
#include<math.h>
/* math.h is a header file in the standard library of the C programming language designed for basic mathematical operations*/
using namespace std;
int main()
{
//Variable declaration
int dividend;
int divisor;
int remainder;
int quotient;
// Variable initialization
dividend=50;
divisor=6;
quotient= dividend/divisor;
remainder = dividend % divisor;
/*A modulus operator (%) is a built-in mechanism that computes the remainder that results from performing integer division.*/
cout<<dividend<<" Modulus "<<divisor<<" is: "<<remainder<<endl;   
system("PAUSE"); 
return EXIT_SUCCESS;   
}
