//Given an array of integers of size N, the task is to find the first non-repeating
//element in this array.

#include <iostream>
using namespace std;
int main()
{
    int arr[]={9,4,9,6,7,4},n=6;
    for(int i=0; i<n; i++){
        int count=0;
        for(int j=0; j<n; j++){
            if(arr[i]==arr[j]){
                count++;
                
            }
        }
        if(count == 1){
            cout<<arr[i]<<" ";
        }
    }

    return 0;
}