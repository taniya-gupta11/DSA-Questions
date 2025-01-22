#include <iostream>
using namespace std;
int main()
{
    int arr[10]={3,4,3,5,7,76,65,4,6,4};
    int hash[3200]={0};
    int count=0;
    for(int i=0; i<10; i++){
        for(int j=j+1; j<10; j++){
            if(arr[i]==arr[j]){
                count++;
            }
        }
           if(hash[arr[i]]== 0){  // Check if the element has been visited i.e ele not visited
               cout<<arr[i]<<" ";
               hash[arr[i]]=1; // Mark the element as visited
           }
        
    }

    return 0;
}