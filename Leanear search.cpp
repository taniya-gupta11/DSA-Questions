#include <iostream>
using namespace std;

int main()
{
 
  int size=80;
   int arr[size],iteam,i,pos;
   int index = 0;
  cout<<"enter desired array size:";
  cin>>size;
  cout<<"enter any array elements:";
 for(int i=0; i<size;i++){
     cin>>arr[i];
 }
 cout<<"enter element to be search:";
 cin>>iteam;
 for(int i=0; i<size; i++){
     if(arr[i]==iteam){
         index=1;
         pos=i;
         break;
     }
 }
 if(index==0){
     cout<<"given element could not found:"<<" ";
 }
 else{
     cout<<"element found given at index:"<<index+1<<" "<<"positon:"<<(pos+1);
 }
 return 0;
}