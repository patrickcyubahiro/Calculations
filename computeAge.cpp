//A program to compute Peter's age
#include<cstdlib>
#include<iostream>
using namespace std;
int main()
{
// Variable declaration    
int date_of_birth;   
int current_year;
int age;
//Variable Initialization
date_of_birth=1954;
current_year=2019;
age=current_year-date_of_birth;
cout<<"Peter is "<<age<<" years old"<<endl;    
system("PAUSE");
return EXIT_SUCCESS;
}
