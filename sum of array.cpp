#include <iostream>
using namespace std;

int main(){

    const int size=4;
    int prices[size];
    int sum=0;
    int product=1;
    int avg=0;
    for(int i=0; i<size; i++){
        cout<<"enter price for sum"<<i<<" ";
        cin>>prices[i];
        sum =sum+prices[i];
        product = product*prices[i];
        avg=sum/size;
    }
    
       cout<<"prices of sum:"<<sum<<" ";
       cout<<"\n";
       cout<<"prices of product:"<<product<<" ";
       cout<<"\n";
       cout<<"total avd:"<<avg<<" ";
    return 0;
}
