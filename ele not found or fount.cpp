
#include <iostream>
using namespace std;

int main()
{
     
  int arr[20];
  int size; 
  int num;
  int f=0,pos=-1;
  
 
      cout<<"enter the number of element:";
      cin>>size;
      cout<<"enter the number of array:";
  for (int i=0; i<size; i++){
      
      cin>>arr[i];
  }
  cout<<"\n enter the element to be searches for:";
  cin>>num;
   for(int i=0; i<size; i++){
       if(arr[i]==num){
           f=1;
           pos=i;
           break;
       }
   }
       if(f==0){
           cout<<" not fount"<<" ";
       }
       else{
           cout<<"element is  found:"<<(pos+1);
       }
   
    return 0;
}