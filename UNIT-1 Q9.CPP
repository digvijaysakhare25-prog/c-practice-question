#include <iostream>
#include <string>
using namespace std;
class student {
public:
    int rollno;
    string name;
    string gender;
    int age;
    int totalmarks;
    float percentage;

void getdata() {
    cout<<"Enter Roll No: ";
    cin>>rollno;
    cout<<"Enter student Name: ";
    cin>>name;
    cout<<"Enter Gender: ";
    cin>>gender;
    cout<<"Enter Age: ";
    cin>>age;
    cout<<"Enter Total Marks: ";
    cin>>totalmarks;
}
void calculate_percentage() {
    percentage = (totalmarks / 500.0) * 100;
}
void display() {
    cout << "----------STUDENT DETAILS----------" << endl;
    cout << "Name       : " << name << endl;
    cout << "Roll No    : " << rollno << endl;
    cout << "Gender     : " << gender << endl;
    cout << "Age        : " << age << endl;
    cout << "Total Marks: " << totalmarks << endl;
    cout << "Percentage : " << percentage << endl;
}
};
int main(){
student s1;
s1.getdata();  
s1.calculate_percentage();
s1.display();
return 0;
}