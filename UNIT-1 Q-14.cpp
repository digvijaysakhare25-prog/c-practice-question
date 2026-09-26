#include<iostream>
using namespace std;
int main(){
int num1,num2,num3;
    cout<<"enter num 1: ";
    cin>>num1;
    cout<<"enter num 2: ";
    cin>>num2;
    cout<<"enter num 3: ";
    cin>>num3;
if(num1>num2 && num1>num3){
    cout<<"num1 "<<num1<<" is greater from number : "<<num1<<","<<num2<<","<<num3;
}
else if (num2>num1 && num2>num3){
    cout<<"num2 "<<num2<<" is greater from number : "<<num1<<","<<num2<<","<<num3;
}
else{
    cout<<"num3 "<<num3<<" is greater from number : "<<num1<<","<<num2<<","<<num3;
}
    return 0;

}