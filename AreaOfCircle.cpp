// A program to compute the area and perimeter of a circle
#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
// Variable declaration
double radius_of_a_circle;
double perimeter_of_a_circle;
double area_of_a_circle;
double PI;
double radius;
// Variable initialization   
radius=6;
PI=3.142;
area_of_a_circle=(radius*radius)*PI;//radius*radius= Radius square
perimeter_of_a_circle=(PI*radius)*2;
cout<<"The area of the circle is "<<area_of_a_circle<<endl;
cout<<"The perimenter of the circle is "<<perimeter_of_a_circle<<endl;
system("PAUSE");
return EXIT_SUCCESS;    
}
