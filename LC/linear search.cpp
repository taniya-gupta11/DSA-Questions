//Linear search
#include <iostream>
using namespace std;

bool find(int arr[], int n, int key){
    
    for(int i=0; i<n; i++){
        if(arr[i]==key){
            return true;
        }
    }
     return false;
}

int main()
{
    int arr[] = {2,3,4,5,6,7},n=6;
    
   // int key;
    cout<<"find out the key:";
    int key;
    cin>>key;
    
    if(find(arr,n,key)){
        cout<<"found";
    }
    else{
        cout<<"not found";
    }

    return 0;
}