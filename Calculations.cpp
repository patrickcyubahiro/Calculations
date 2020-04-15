// A program that computes the profit made after selling a motor vehicle.
#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
//variable declaration part
int buying_price;
int selling_price;
int profit;
// Variable initialization part
buying_price= 450000;
selling_price= 580000;
profit= selling_price-buying_price;
cout<<"The Profit Made is "<<profit<<endl;
system("PAUSE");
return EXIT_SUCCESS;    
}
