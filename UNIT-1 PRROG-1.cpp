#include<iostream>
#include<string>
using namespace std;
class student{
int rollno;
string name;
string result;
float marks_S1,marks_S2, marks_S3,
totalMarks,percentage;
public:
void acceptditails(){
cout<<"Enter roll number: ";
cin>>rollno;
cout<<"Enter name: ";
cin>>name;
cout<<"Enter marks for Subject 1: ";
cin>>marks_S1;
cout<<"Enter marks for Subject 2: ";
cin>>marks_S2;
cout<<"Enter marks for Subject 3: ";
cin>>marks_S3;
}
void calresult(){
    totalMarks=marks_S1+marks_S2+marks_S3;
    percentage=(totalMarks/300)*100;
if(percentage>60){
    result="First Class";
}
else if(percentage>=50){
    result="Second Class";
}
else if(percentage>=40){
    result="Third Class";
}
else{
    result="Fail";
}
}
void displayresult(){
    cout<<"Roll Number: "<<rollno<<endl;
    cout<<"Name: "<<name<<endl;
    cout<<"Total Marks: "<<totalMarks<<endl;
    cout<<"Percentage: "<<percentage<<endl;
    cout<<"Result: "<<result<<endl;
}
};
int main(){
student s;
s.acceptditails();
s.calresult();
s.displayresult();


    return 0;
}