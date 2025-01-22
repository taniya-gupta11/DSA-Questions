//Given an array of integers arr[] of size N and an integer, the task is to rotate the 
//array elements to the left by d positions.i.e {1,2,3,4} o/p={2,3,4,1}
#include <iostream>
using namespace std;
int main()
{
   //int size=5;
   int arr[5]={1,2,3,4,6};
  
   for(int i=1; i<=arr[3]; i++){
      cout<<arr[i]<<" ";
   }
   cout<<arr[0]<<" ";
    return 0;
}


//or
#include <iostream>
using namespace std;
int main()
{
   //int size=5;
   int arr[5]={1,2,3,4,5},n=5;
  
   for(int i=1; i<n; i++){
      cout<<arr[i]<<" ";
   }
   cout<<arr[0]<<" ";
    return 0;
}