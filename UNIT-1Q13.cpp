#include<iostream>
using namespace std;
int main(){
int s_price,c_price,total;
    cout<<"enter selling peice :";
    cin>>s_price;
    cout<<"enter cost price: ";
    cin>>c_price;
    total=s_price-c_price;
if(total>0){
    cout<<"profict of: "<<total<<" rs";
}
else{
    cout<<"loss of : "<<total<<" rs";
}

    return 0;
}