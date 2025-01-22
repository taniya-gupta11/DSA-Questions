#include <iostream>
using namespace std;
int main()
{
    int arr[10]={1,2,1,3,4,6,1,3,8,2};
    int hash[3200]={0};
    
    for(int i=0; i<10; i++){
        int count=0;
        for(int j=i+1; j<10; j++){
            if(arr[i]==arr[j]){
                count++;
            }
            
        }
        
           if(hash[arr[i]]== 0){  // Check if the element has been visited i.e ele not visited
               cout<<arr[i]<<" "<<count<<endl;
               hash[arr[i]]=1; // Mark the element as visited
           }
       
    }

    return 0;
}