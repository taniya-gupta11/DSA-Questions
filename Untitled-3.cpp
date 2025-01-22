
#include <iostream>
using namespace std;
int main()
{
    int arr[] = { 7,1,5,3,6,4} , n=6;
    int min = arr[0];
    int max=0;
    for(int i=1;i<n;i++){
        if(arr[i]<min){
            min = arr[i];
        }
         int profit = arr[i]-min;
         if(profit>max){
             max = profit;
        
         }
    }
     cout<<"max sale is:"<<max;
    return 0;
}