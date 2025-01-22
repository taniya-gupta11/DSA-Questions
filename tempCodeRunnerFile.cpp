#include <iostream>
using namespace std;

int main(){

    const int size=4;
    int prices[size];
    int sum=0;
    for(int i=0; i<size; i++){
        cout<<"enter price for sum:"<<i<<" ";
        cin>>prices[i];
        sum =sum+prices[i];
    }
    
       cout<<sum<<" ";
    
    return 0;
}
