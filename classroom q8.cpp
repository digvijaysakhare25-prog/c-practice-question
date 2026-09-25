#include <iostream>
#include<string>
using namespace std;
class car{
string colour="white";
int modelno=1234;
string brand="BMW";
float speed=200.0;
public:
void driving(){cout<<"i am driving";
}
void display(){
    cout<<"colour:"<<colour<<endl;
    cout<<"modelno:"<<modelno<<endl;
    cout<<"brand:"<<brand<<endl;
    cout<<"speed:"<<speed<<endl;}
};
int main(){
    car obj1;
    obj1.driving();
    obj1.display();
        return 0;
}