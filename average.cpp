/*A program to input marks of five subjects Physics, Chemistry, Biology,
Mathematics and Computer and Computes the average mark!*/
#include<cstdlib>
#include<iostream>
#include<math.h>
using namespace std;
int main()
{
double subject_1, subject_2, subject_3, subject_4, subject_5, sum, average, percentage;
double sum_of_out_of, total_marks_of_physics, total_marks_of_chemistry, total_marks_of_biology, total_marks_of_mathematics, total_marks_of_computer;     
cout<<" Enter the First subject's Marks (Physics): "<<endl<<endl;    
cin>>subject_1;  
cout<<" Physics is out of how many marks? "<<endl<<endl;
cin>>total_marks_of_physics;  
cout<<" Enter the Second subject's Marks (Chemistry): "<<endl<<endl;    
cin>>subject_2; 
cout<<" Chemistry is out of how many marks? "<<endl<<endl;
cin>>total_marks_of_chemistry; 
cout<<" Enter the Third subject's Marks (Biology): "<<endl<<endl;    
cin>>subject_3; 
cout<<" Biology is out of how many marks? "<<endl<<endl;
cin>>total_marks_of_biology; 
cout<<" Enter the Fourth subject's Marks (Mathematics): "<<endl<<endl;    
cin>>subject_4; 
cout<<" Mathematics is out of how many marks? "<<endl<<endl;
cin>>total_marks_of_mathematics; 
cout<<" Enter the Fifth subject's Marks (Computer): "<<endl<<endl;    
cin>>subject_5;
cout<<" Computer is out of how many marks? "<<endl<<endl;
cin>>total_marks_of_computer; 
sum= subject_1 + subject_2 + subject_3 + subject_4 + subject_5;
sum_of_out_of=total_marks_of_physics+total_marks_of_chemistry+total_marks_of_biology+total_marks_of_mathematics+total_marks_of_computer;
average= sum/5;
cout<<" The average is: "<<average<<endl<<endl;
percentage= (sum*100)/sum_of_out_of;
if ((percentage>=90)&&(percentage<=100))
{
cout<<" Grade A "<<endl;                   
} 
else if ((percentage>=80)&&(percentage<=89))
{
cout<<" Grade B "<<endl;                   
}
else if ((percentage>=70)&&(percentage<=79))
{
cout<<" Grade C "<<endl;                   
}
else if ((percentage>=60)&&(percentage<=69))
{
cout<<" Grade D "<<endl;                   
}
else if ((percentage>=40)&&(percentage<=59))
{
cout<<" Grade E "<<endl;                   
}
else if ((percentage<40)&&(percentage>=0))
{
cout<<" Grade F "<<endl;                   
}
else
{
cout<<" Check correctly the marks entered. Apparentlt you made a mistake. Please Try again... "<<endl;                   
}
system ("PAUSE");
return EXIT_SUCCESS;    
}
