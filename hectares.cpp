//A program to determine the number of hectares each son will get.
#include<cstdlib>
#include<iostream>
#include<math.h>
#include<iomanip>
/* The header <iomanip> is part of the Input/output library of the C++ Standard Library that defines the manipulator functions such as
resetiosflags() , setiosflags() , setbase() , setfill() , setprecision() , and setw() . */
using namespace std;
int main()
{
// Variable declaration    
double hectares;
double sons;
double number_of_hectares;
// Variable initialization     
hectares=20;
sons=6;
number_of_hectares=hectares/sons;
cout<<"Each son will get "<< setprecision(3)<<number_of_hectares<<" Ha of Lane"<<endl;
/* The set precision Sets the decimal precision to be used to format floating-point values on output operations. 
I've assigned the value 3 to the setprecision because the maximum set of numbers to be displayed should be three*/
system("PAUSE");
return EXIT_SUCCESS;
}
