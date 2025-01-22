//intersection of 2 arr
#include <iostream>
#include <vector>
using namespace std;
int main()
{
    vector<int> arr{1,2,3,4,5,6};
    vector<int> brr{3,4,10};
    vector<int> ans;
    
    for(int i=0;i<arr.size(); i++){
     //   int element = arr[i];
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j]){
                //mark
                brr[j]=-1; //when + or - no. are use INT_MIN Or also use break
                ans.push_back(arr[i]);
            }
        }
    }
    for(auto value:ans){
        cout<<value<<" ";
    }

    return 0;
}