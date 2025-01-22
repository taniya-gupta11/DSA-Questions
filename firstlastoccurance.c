//firstlast occurance
#include <iostream>
using namespace std;

 bool firstOcc(int arr[], int size, int key){
     int s = 0;
     int e = size-1;
     int mid = s + (e-s)/2;
     int ans = -1;
     
     while(s<=e){
         if(arr[mid]==key){
             ans = mid;
             e = mid - 1;
         }
         else if(key > arr[mid]){//right me jao
             s = mid+1;         
     }
         else if(key < arr[mid]){
             e = mid - 1;
         }
         mid = s + (e-s)/2;
    }
    return ans;
 }    
    

int main() {

    int even[5] = {1,2,3,3,5};
    //int size = 5;
    //int key = 3;
    cout<<"first occurrence of 3 is at index:"<<firstOcc(even,5,3)<<endl;
    return 0;
}