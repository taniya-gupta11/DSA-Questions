//binary search using recursion

//BinarySearch
#include <iostream>
using namespace std;
bool binarySearch(int arr[], int s, int e, int key){
    //base case
    
        if(s>e)
            return false;
        
        int mid = s+(e-s)/2;
        
        if(arr[mid] == key){
            return true;
        }
        if(key>arr[mid]){
           return binarySearch(arr, mid+1, e, key);
        }
        else{
            return binarySearch(arr, s, mid-1, key);
        }
}

int main() {
    int arr[] = {2,4,6,8,12,18};
    int n = 6;
    int key = 18;

    bool index = binarySearch(arr, 0, 5, key);
   
        cout<<"present or not: "<<index<<" ";

    
    return 0;
}





