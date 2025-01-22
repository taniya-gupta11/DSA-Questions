//reverse an array

#include <iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    
    while(s<=e){
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
}



int main()
{
    vector<int> v;
    
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(14);
    
  
  
    vector<int> ans=reverse(v);
    print(ans);

    return 0;
}


// 2nd form
//reverse an array

#include <iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    
    while(1){
        //base case
        if(s>=e){
            break;
        }
        swap(v[s],v[e]);
        s++;
        e--;
    }
    return v;
}
void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
}



int main()
{
    vector<int> v;
    
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(14);
    
  
  
    vector<int> ans=reverse(v);
    print(ans);

    return 0;
}


// 3rd form

//reverse an array

#include <iostream>
#include<vector>
using namespace std;
vector<int> reverse(vector<int> v){
    int s=0;
    int e=v.size()-1;
    
    for(int i=0; i<v.size();i++)
        if(s<=e){
            swap(v[s],v[e]);
        s++;
        e--;
        }
        return v;
    
}
void print(vector<int> v){
    for(int i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
        
    }
    cout<<endl;
}



int main()
{
    vector<int> v;
    
    v.push_back(11);
    v.push_back(7);
    v.push_back(3);
    v.push_back(12);
    v.push_back(14);
    
  
  
    vector<int> ans=reverse(v);
    print(ans);

    return 0;
}