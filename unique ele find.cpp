
#include <iostream>
#include <vector>
using namespace std;

int findUnique(vector<int>arr){
    int ans = 0;
    for(int i=0;i<arr.size();i++){
        ans = ans^arr[i]; //xor 
    }
    return ans;
}

int main()
{
    int n;
    cout<<"enter the size of array:";
    cin>>n;
    
    vector<int>arr(n);
    cout<<"enter ele of array:";
    //taking input
    for(int i=0; i<arr.size(); i++){
        cin>>arr[i];
    }
    int uniqueElement = findUnique(arr);
    cout << "uniqueElement is "<<uniqueElement<<endl;
    return 0;
}