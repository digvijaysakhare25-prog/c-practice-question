#include<iostream>
#include<string>
using namespace std;
class rectangle{
private:
float length;
float breadth;
float area;
float perimeter;
public:
void getdimensions(){
        cout<<"Enter length of rectangle: ";
        cin>>length;
        cout<<"Enter breadth of rectangle: ";
        cin>>breadth;
}
void calculatearea(){
       area=length*breadth;
}
void calculateperimeter(){
perimeter=2*(length+breadth);
}
void display(){ 
cout<<"Area of rectangle: "<<area<<endl;
cout<<"Perimeter of rectangle: "<<perimeter<<endl;
    }
};
int main(){
rectangle r;
r.getdimensions();
r.calculatearea();
r.calculateperimeter();
r.display();
return 0;
}
