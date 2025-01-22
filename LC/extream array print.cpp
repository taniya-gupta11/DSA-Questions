
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,2,3,4,5,6,7},n=7;
    int start = 0;
    int end = n-1;
    
    while(start<end){
        
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        start++;
        end--;
    }
    if(start==end){
            cout<<arr[start];
        }
    return 0;
}