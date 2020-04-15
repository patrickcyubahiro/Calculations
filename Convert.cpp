// A program to convert Centimeters to the equivalent Meters and Kilometers.
#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
// Variable declaration
double centimeters;
double meters;
double kilometers;
// Variable initialization
centimeters=10300;

meters=centimeters/100;
kilometers=centimeters/100000;
cout<<centimeters<<" Centimeters are equivalent to "<<meters<<" Meters"<<endl;
cout<<centimeters<<" Centimeters are quivalent to "<<kilometers<<" Kilometers"<<endl;    
system("PAUSE");
return EXIT_SUCCESS;    
}
