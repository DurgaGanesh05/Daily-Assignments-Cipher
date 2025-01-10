#include<iostream>
using namespace std;

bool palindrome(string s){
    for(int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }

    for(int i=0; i<s.length(); i++){
        if(s[i] < 'a' || s[i] > 'z'){
            s.erase(i, 1);
            i--;
        }
    }

    string s1;

    for(int i=0; i<s.length(); i++){
        s1 = s[i] + s1;
    }

    for(int i=0; i<s.length(); i++){
        if(s[i] != s1[i]){
            return false;
            break;
        }
    }
    return true;
}

int main()
{
    string s;
    getline(cin, s);
    
    if(palindrome(s)) cout << "True";
    else cout << "False";
        
    return 0;
}