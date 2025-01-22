// inversion
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {7,2,6,3},n=4;
    int count = 0;
    for(int i=0; i<n; i++){
        for(int j =i+1; j<n; j++){
            if(arr[i]>arr[j]){
            count++;
        }
    }
        
    }
     cout<<count;
    return 0;
}
//OR

#include <iostream>
using namespace std;

int inversion_arr(int arr[],int n){
    int count = 0;
    for(int i =0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]>arr[j]){
                count++;
            }
        }
    }
    return count;
    
}


int main()
{
    int arr[] = {7,2,6,3},n=4;
   int x =  inversion_arr(arr,n);
   cout<<x;
    return 0;
}