#include<iostream> 
using namespace std; 

string getSubstr(string s, int i, int j) { 
    string retVal = ""; 
    while(i <= j) { 
        retVal += s[i++];
    }
    return retVal;
}

bool noRepChar(string s) { 
    for(int i = 0; i < s.length(); i++) { 
        char targetChar = s[i];
        for(int j = 0; j < s.length(); j++) { 
            if (i != j and targetChar == s[j]) {
                return false; 
            }
        }
    }
    return true; 
}

void printLongestSubstr(string str) { 
    string maxLenStr = "";
    for(int start=0; start<str.length();start++) { 
        for(int end=start; end < str.length();end++) { 
            string substr = getSubstr(str, start, end);
            if(noRepChar(substr)) { 
                if (substr.length() > maxLenStr.length()) { 
                    maxLenStr = substr; 
                }
            }            
            //cout << substr << endl; 
        }
    }
    cout << "longest substring: " << maxLenStr << ", with len of: " << maxLenStr.length() << endl; 
}

int main(){ 
    string s; 
    cin >> s; 
    printLongestSubstr(s);
}