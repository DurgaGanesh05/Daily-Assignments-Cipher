#include<iostream>
using namespace std;

int main()
{
    string s = "A man, a plan, a canal: Panama";

    for(int i=0; i<s.length(); i++){
        s[i] = tolower(s[i]);
    }

    cout << s << endl;
    return 0;
}