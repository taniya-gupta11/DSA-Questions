#include <iostream>
#include <vector>
using namespace std;

bool is_Anagram(string s, string t) {
    
    if (s.length() != t.length()) {
        return false;
    }

   
    vector<int> charCount(26, 0);

    
    for (int i = 0; i < s.length(); i++) {
        charCount[s[i] - 'a']++;  
        charCount[t[i] - 'a']--;  
    }

    for (int count : charCount) {
        if (count != 0) {
            return false; 
        }
    }

    return true; 
}

int main() {
    string s = "act";
    string t = "tac";
    
    
    if (is_Anagram(s, t)) {
        cout << "true" << endl;  
    } else {
        cout << "false" << endl;
    }

    return 0;
}
