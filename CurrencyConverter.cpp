// A program to convert Dollars to Kenyan Shillings
#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std
int main()
{
// Variable declaration    
double one_dollar;   
double dollars;
double convert;
//Variable Initialization    
one_dollar= 101.43;
dollars=500;
convert=dollars*one_dollar;
cout<<dollars<<" Dollars is equivalent to "<<convert<<" Kenyan Shillings"<<endl;
system("PAUSE");
return EXIT_SUCCESS;    
}
