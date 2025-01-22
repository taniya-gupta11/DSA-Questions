// length of string 

#include <iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count=0;
    for(int i=0; str[i]!='\0';i++){
        count++;
    }
      cout<<count++;
    return 0;
}

// 2nd form

#include <iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count = 0;
    int i= 0;
    while(str[i]!='\0'){
        count++;
        i++;
    }
    cout<<count;

    return 0;
}


// 3rd form

#include <iostream>
using namespace std;
int main()
{
    string str;
    cin>>str;
    int count = 0;
    int i= 0;
    while(1){
        //base case
        if(str[i]=='\0'){
            break;
        }
        count++;
        i++;
    }
    cout<<count;

    return 0;
}

// 4th form 

#include <iostream>
using namespace std;
int len_of_string(string str ,int i ){
    //base case
        if(str[i]=='\0'){
            return 0;
        }
        
       // i++;
        return 1+len_of_string(str,i+1);
}


int main()
{
    string str;
    cin>>str;
    int i= 0;
 int ans = len_of_string(str,i);
    cout<<ans;

    return 0;
}