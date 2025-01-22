//Program to count the numer of employee earning more than 1 lakh per annum. The monthly salaries of 100 employees are given.
#include <iostream>
using namespace std;

int main(){

    const int size=5;
    int sal[size], an_sal;
    int count=0;
    
    for(int i=0; i<size; i++){
        cout<<"enter sale made on day"<<i+1<<" ";
        cin>>sal[i];
        
    }
     for(int i=0; i<size; i++){
        an_sal=sal[i]*12;
        if(an_sal>100000){
            count++;
        }
     }
       cout<<count<<" ";
    return 0;
}
