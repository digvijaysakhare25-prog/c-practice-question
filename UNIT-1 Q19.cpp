#include<iostream>
using namespace std;
int main(){
    int num;
    int a=1;
cout<<"enter a no to find the factorial : ";
cin>>num;
for(int n=1;n<=num;n++){
    a*=n;
}
cout<<"fractional part of number "<<num<<"is: "<<a;
    return 0;}