//DUPLICATE array

#include <iostream>
using namespace std;
int main()
{
   int arr[] = {2,3,4,5,2,3,8},n=7;
   
   int hash[3200]={0};
 
   for(int i=0; i<n; i++){
         int count = 1;
       for(int j=i+1; j<n; j++){
           if(arr[i]==arr[j]){
           count++;
       }
   }
   if(hash[arr[i]]==0 && count>1){
       cout<<arr[i]<<" ";
       hash[arr[i]]=1;
   }
}

    return 0;
}

//or

#include <iostream>
using namespace std;

void is_dup(int i, int j,int n, int count,int arr[],int hash[]){
    
    for(int i=0; i<n; i++){
        int count = 1;
       for(int j=i+1; j<n; j++){
           if(arr[i]==arr[j]){
           count++;
       }
   }
   if(hash[arr[i]]==0 && count>1){
       cout<<arr[i]<<" ";
       hash[arr[i]]=1;
   }
}
    
}

int main()
{
   int arr[] = {2,3,4,5,2,3,8},n=7;
   
   int hash[3200]={0};
   int count ;
   int i,j;
   
   is_dup(i,j,n,count,arr,hash);
   
    return 0;
}