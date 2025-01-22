//Program to accept of each day of the month and print the total sales and avg sales of the month
#include <iostream>
using namespace std;

int main(){

    const int size=3;
    int prices[size];
    int sum=0;
    float avg=0;
    for(int i=0; i<size; i++){
        cout<<"enter sale made on day"<<i+1<<" ";
        cin>>prices[i];
        sum =sum+prices[i];
        avg=sum/size;
    }
    
       cout<<"prices of sum:"<<sum<<" ";
       cout<<"\n";
       cout<<"total avd:"<<avg<<" ";
    return 0;
}
