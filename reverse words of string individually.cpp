
#include <iostream>
#include <string>
#include <stack>
using namespace std;

void reverseWords(string str){
    stack <char> st;
    // reverses individual words of a string
    for(int i=0; i<str.length();i++){
        if(str[i]!=' '){
            st.push(str[i]);
                
        }
        // When we see a space, we print contents
        // of stack.
        else{
            
            while(st.empty()==false){
                cout<<st.top();
                st.pop();

            }
            cout<<" ";
        }
        
    }
    // Since there may not be space after
    // last word.
        
            while(st.empty()==false){
                cout<<st.top();
                st.pop();
            
    }
}

int main()
{
    string str = "Geeks for Geek";
    reverseWords(str);
    

    return 0;
}