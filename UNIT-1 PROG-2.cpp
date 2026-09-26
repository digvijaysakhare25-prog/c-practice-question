#include<iostream>
#include<string>
using namespace std;
class student{
    int marks[3];
    public:
void getmarks(){
    cout<<"Enter marks of subject 1: ";
    cin>>marks[0];
    cout<<"Enter marks of subject 2: ";
    cin>>marks[1];
    cout<<"Enter marks of subject 3: ";
    cin>>marks[2];
}
void showMarks(){
    cout<<"Marks"<<endl;
    for(int i=0;i<3;i++)
    {
    cout<<"Subject "<<i+1<<": "<<marks[i]<<endl;
    }
}
};
int main(){
    student s;
    s.getmarks();
    s.showMarks();
    return 0;
}