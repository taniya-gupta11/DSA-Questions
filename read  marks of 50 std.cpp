//Program to read marks of 50 students and store them under an array
#include <iostream>
using namespace std;

int main(){
    const int size = 5;
    float marks[size];
    for(int i=0; i<size; i++){
        cout<<"enter student marks:"<<i<<" ";
        cin>>marks[i];
    }
    cout<<"\n";
    for(int i=0; i<size; i++){
        cout<<"marks["<<i<<"]="<<marks[i]<<" ";
    }
    return 0;
}