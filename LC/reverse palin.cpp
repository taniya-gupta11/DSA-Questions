#include <iostream>
#include <cstring>
using namespace std;

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}

bool isPalindrome(char arr[]) {
    int n = strlen(arr);
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        if (toLowerCase(arr[s]) != toLowerCase(arr[e])) {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

void reverse(char name[], int n) {
    int s = 0;
    int e = n - 1;
    while (s < e) {
        swap(name[s++], name[e--]);
    }
}

int main() {
    char name[100];
    cout << "Enter a single word name (no spaces): ";
    cin >> name;  

    int len = strlen(name);

    reverse(name, len);
    cout << "Reversed name: " << name << endl;

    if (isPalindrome(name)) {
        cout << "The name is a palindrome." << endl;
    } else {
        cout << "The name is not a palindrome." << endl;
    }

    return 0;
}


//to allow with space
#include <iostream>
#include <cstring>
using namespace std;

char toLowerCase(char ch) {
    if (ch >= 'A' && ch <= 'Z') {
        return ch + ('a' - 'A');
    }
    return ch;
}

bool isPalindrome(char arr[]) {
    int n = strlen(arr);
    int s = 0;
    int e = n - 1;

    while (s <= e) {
        if (toLowerCase(arr[s]) != toLowerCase(arr[e])) {
            return false;
        }
        s++;
        e--;
    }
    return true;
}

void reverse(char name[], int n) {
    int s = 0;
    int e = n - 1;
    while (s < e) {
        swap(name[s++], name[e--]);
    }
}

int main() {
    char name[100];
    cout << "Enter the name: ";
    cin.getline(name, 100); // To allow input with spaces

    int len = strlen(name);
    
    reverse(name, len);
    cout << "Reversed name: " << name << endl;

    if (isPalindrome(name)) {
        cout << "The name is a palindrome." << endl;
    } else {
        cout << "The name is not a palindrome." << endl;
    }

    return 0;
}
