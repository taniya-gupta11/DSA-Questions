//sum of n number
#include <iostream>
using namespace std;
int main()
{
   int arr[]={4,3,1,2,4};
   int n= 5;
   int sum=0;
   for(int i = 0; i<n; i++){
       
       sum=sum+arr[i];
      
   }
    cout<<sum;
    return 0;
}



// 2nd form

#include <iostream>
using namespace std;
int main()
{
   int arr[]={2,3,1,4,0};
   int n= 5;
   int sum=0;
   int i=0;
   while(i<n){
       sum=sum+arr[i];
       i++;
   }
   cout<<sum;
    return 0;
} 


// 3rd form



#include <iostream>
using namespace std;
int main()
{
   int arr[]={2,3,1,4,0};
   int n= 5;
   int sum=0;
   int i=0;
   while(1){
       //base case
       if(i>n){
           break;
       }
       sum=sum+arr[i];
       i++;
   }
   cout<<sum;
    return 0;
}

// 4th using recursion

#include <iostream>
using namespace std;
int isSum(int arr[],int n,int i){
    //base case
    if(i>n){
        return 0;
    }
    return arr[i]+isSum(arr,n,i+1);
   // return an;
}

int main()
{
   int arr[]={2,3,1,4,5};
   int n= 5;
    int s=0;
 
   int ans = isSum(arr,n,0);
   cout<<ans;

    return 0;
}