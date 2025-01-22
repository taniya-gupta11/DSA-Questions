
#include <iostream>
using namespace std;
int main()
{
    int arr[8] = {10,20,30,40,50,60,70,80};
    int n = 8;
    int start = 0;
    int end = n-1;
    while(start < end){
        cout<<arr[start]<<" ";
        cout<<arr[end]<<" ";
        start++;
        end--;
    }

    return 0;
}
//outpu -> 10,80,20,70,30,60,40,50

//or for odd

#include <iostream>
using namespace std;
int main()
{
    int arr[] = {10,20,30,40,50,60,70};
    int n = 7;
    int start = 0;
    int end = n-1;
    while(start <= end){
       
        if(start==end){
            cout<<arr[start]<<" ";
        }
        else{
            cout<<arr[start]<<" ";
            cout<<arr[end]<<" ";
        }
        start++;
        end--;
    }

    return 0;
}
