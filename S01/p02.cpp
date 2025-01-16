#include<iostream>
using namespace std; 

int main() { 
    string s = "aaaabbbccaa";
    string output = "";
    int i = 0; 
    while(i < s.length()) { 
        char ch = s[i++];
        int counter = 1; 
        while(i < s.length() and s[i] == ch) { // why not s[i++] and remove i++ from within the loop? 
            counter++; 
            i++; 
        }
        output += ch; 
        output += to_string(counter);
    }
    cout << output << endl; 
}