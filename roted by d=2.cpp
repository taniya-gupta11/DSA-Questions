//Given an array of integers arr[] of size N and an integer, the task is to rotate the i.e {1,2,3,4} o/p={2,3,4,2}
//array elements to the left by d positions.
#include <iostream>
using namespace std;
int main()
{
   int size=5;   
   int arr[]={1,2,3,4,6};
   int d;

  cout<<"enter value of d:"<<" ";
  cin>>d;
   
   for(int i=0; i<d; i++){
      int temp = arr[0];
      for(int j=0; j<size-1;j++){
          arr[j]=arr[j+1];
      }
      arr[size-1]=temp;
      
   }
 
   for(int i=0; i<size; i++){
       cout<<arr[i]<<" ";
   }
    return 0;
}