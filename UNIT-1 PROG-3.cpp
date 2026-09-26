#include<iostream>
#include<string>
using namespace std;
class student{
    string name;
    public:
 void display(){
cout<<"Enter name:";
cin>>name;
cout<<"Hello,"<<name<<endl;
}
};
int main(){
    student s;
    s.display();
    return 0;
}