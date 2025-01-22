// palinfrom like wow helo wow

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int n;
    cout<<"enter any no.:";
    cin>>n;
    
    string arr[n];
     cout<<"enter the ele of array:";
    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    bool isPal = true;
    int i=0,j=n-1;
    while(i<j){
        if(arr[i]!=arr[j]){
            isPal = false;
        }
        i++;
        j--;
    }
    if(isPal){
        cout<<"Palindrom";
    }
    else{
        cout<<"N.P";
    }

    return 0;
}