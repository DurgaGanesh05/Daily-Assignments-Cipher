#include<iostream>
using namespace std;

bool anagram(string s1, string s2){
    if(s1.length() != s2.length()){
        return false;
    }
    else{
        for(int i=0; i<s1.length(); i++){
            if(s1[i] != s2[i]){
                return false;
                break;
            }
        }
    }
    return true;
}


int main()
{
    string s1 = "anagram";
    // cin >> s1;
    
    string s2 = "nagaram";
    // cin >> s2;

    cout << anagram(s1, s2);    

    return 0;
}