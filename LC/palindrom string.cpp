
#include <iostream>
#include <cstring>
using namespace std;

int is_Pal(char arr[]){
    int n = strlen(arr);  
    int s=0;
    int e=n-1;
    
    while(s<=e){
        if(arr[s]!=arr[e]){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
   char name[20];
   cout<<"enter the name:";
   cin>>name;
   
 if(is_Pal(name)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
   
    return 0;
}


// or a==A ,z==Z

#include <iostream>
#include <cstring>
using namespace std;

int isLowerCase(char ch){
    if(ch>='a' && ch<='z')
        return ch;
    else{
        int temp = ch - 'A'+'a';
        return temp;
    
    }
    
}

int is_Pal(char arr[]){
    int n = strlen(arr);  
    int s=0;
    int e=n-1;
    
    while(s<=e){
        if( isLowerCase (arr[s])!= isLowerCase(arr[e])){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1;
}

int main()
{
   char name[20];
   cout<<"enter the name:";
   cin>>name;
   
 if(is_Pal(name)) {
        cout << "Palindrome" << endl;
    } else {
        cout << "Not a Palindrome" << endl;
    }
   
    return 0;
}