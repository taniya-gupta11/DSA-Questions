// binary search

#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while(s<=e){
        if(arr[mid] == key){
            return mid;
        }
        if(key>arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main() {
    int arr[6] = {2,4,6,8,12,18};
  //  int n = 8;
  //  int key = 2;
    int index = binarySearch(arr,6,18);
   
        cout<<"index of 18 is: "<<index<<" ";

    
    return 0;
}



//second form using while loop 1


//BinarySearch
#include <iostream>
using namespace std;
int binarySearch(int arr[],int n,int key){
    int s = 0;
    int e = n-1;
    int mid = s + (e-s)/2;
    
    while(1){
        //base case 
        if(s>e){
            break;
        }
        if(arr[mid] == key){
            return mid;
        }
        if(key>arr[mid]){
            s = mid+1;
        }
        else{
            e = mid-1;
        }
        mid = s+(e-s)/2;
    }
    return -1;
}

int main() {
    int arr[6] = {2,4,6,8,12,18};

    int index = binarySearch(arr,6,8);
   
        cout<<"index of 18 is: "<<index<<" ";

    
    return 0;
}









