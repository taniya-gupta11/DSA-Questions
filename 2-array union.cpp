//Given two sorted arrays, find their union and intersection.
#include <iostream>
using namespace std;
int main()
{
    int arr1[] = {1,3,4,5,7},m=5;
    int arr2[] = {2,3,5,6},n=4;
    
    int i=0 ,j=0;
    
    while(i<m && j<n){
        if(arr1[i]<arr2[j]){
            cout<<arr1[i]<<" ";
            i++;
        }
        else if(arr1[i]>arr2[j]){
            cout<<arr2[j]<<" ";
            j++;
        }
        else{
            cout<<arr1[i]<<" ";
            i++;
            j++;
        }
        
    }

    return 0;
}