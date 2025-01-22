 
#include <iostream>
#include <string>
#include <stack>
using namespace std;

void reverseWords(string str){
    stack <string> st;
    
    // reverses individual words of a string
    for(int i=0; i<str.length();i++){
        string word = " ";
        while(str[i]!=' ' && i<str.length()){
            word+=str[i];
            i++;
        }
           st.push(word);
    }
    while(st.empty()==false){
        cout<<st.top();
        st.pop();
    }
    
}

int main()
{
    string str = "i love me";
    reverseWords(str);
    

    return 0;
}