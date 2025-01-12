#include<iostream>
#include<algorithm>
using namespace std;

bool anagram(string s1, string s2){
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    if(s1 == s2){
        return true;
    }
    else{
        return false;
    }
}



int main(){
    string s1;
    cin >> s1;
    
    string s2;
    cin >> s2;

    if(anagram(s1, s2)){
        cout << "True";
    }
    else{
        cout << "False";
    }
    return 0;
}