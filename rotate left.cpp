//Given an array of integers arr[] of size N and an integer, the task is to rotate the 
//array elements to the left by d positions.i.e {1,2,3,4} o/p={2,3,4,2}
#include <iostream>
using namespace std;
int main()
{
   //int size=5;
   int arr[5]={1,2,3,4,6};
   cout<<arr[4]<<" ";
   for(int i=1; i<arr[3]; i++){
      cout<<arr[i]<<" ";
   }
  
    return 0;
}

//right shift using vector

#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int>arr{1,2,3,4,5};
    cout<<arr[4]<<" ";
    for(int i=0;i<arr.size()-1; i++){
        cout<<arr[i]<<" ";
    }
   

    return 0;
}
