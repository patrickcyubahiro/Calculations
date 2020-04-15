// A program that computes the area and Perimeter of a right-angled triangle.
#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
// Variable declaration    
double base;
double height;
double hypotenuse;
double area_of_the_triangle;
double perimeter_of_the_triangle;
// Variable initialization
base=10;
height=7;
hypotenuse=12;
area_of_the_triangle=(base*height)/2;
perimeter_of_the_triangle= base+height+hypotenuse;
cout<<"The area of the triangle is "<<area_of_the_triangle<<endl;
cout<<"The perimeter of the triangle is "<<perimeter_of_the_triangle<<endl;
system("PAUSE");
return EXIT_SUCCESS;    
}
