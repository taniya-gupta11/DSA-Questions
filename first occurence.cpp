
#include <iostream>
using namespace std;
int main()
{
    int n,searchto;
    cout<<"enter no.";
    cin>>n;
    
    int arr[n];
    cout<<"enter the no. of array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    
    cout<<"enter the no. to search:";
    cin>>searchto;
    
    int index = -1;
    for(int i=0; i<n; i++){
        if(arr[i]==searchto){
            index = i;
        }
    }
    if(index != -1){
        cout<<"present at index "<<index<<endl;
    }
    else{
        cout<<"absend"<<endl;
    }
    return 0;
}