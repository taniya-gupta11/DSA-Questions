
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {0,0,0,1,1,0,1,0,1,0,1,1,0},n=13;
    int numZero = 0;
    int numOne = 0;
    for(int i=0; i<n; i++){
        if(arr[i]==0){
            numZero++;
        }
        if(arr[i]==1){
            numOne++;
        }
    }
    cout<<"how many no. numZero:"<<numZero<<endl;
    cout<<"how many no. numOne:"<<numOne<<endl;

    return 0;
}