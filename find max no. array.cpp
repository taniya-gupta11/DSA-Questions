//find max no.
#include <iostream>
using namespace std;

int main()
{
    int arr[] = {3,4,6,1,2};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max = arr[0];
    for(int i=0; i<n; i++){
        if(arr[i]>max){
            max = arr[i];
        }
    }
    cout<<max;

    return 0;
}








#include <iostream>
using namespace std;
int main()
{
    int arr[] = {3,4,6,1,7};
    int n = sizeof(arr)/sizeof(arr[0]);
    int max=arr[0];
    int i=0;
    while(1){
        if (i==n){
            break;
       }
       if(arr[i]>max){
            max=arr[i];
           // break;
        }
            i++;
    }
    cout<<max;
    
    return 0;
}




