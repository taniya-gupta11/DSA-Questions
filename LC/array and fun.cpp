
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1,3,5,7,9},n=5;
    
    for(int i=0; i<n; i++){
        arr[i] = 1;
    }
    
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    
//     int arr[500];
    
//     int n;
//     cout<<"how many no. you want to add:"<<endl;
//     cin>>n;
    

//     cout<<"enter the no.:"<<endl;
//     for(int i=0; i<n; i++){
//         cin>>arr[i];
//     }
  
//   for(int i=0; i<n; i++){
//       cout<< 3*arr[i]<<" ";
//   }
    return 0;
}