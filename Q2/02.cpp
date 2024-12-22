#include<iostream>
using namespace std;

int main()
{
    int a;
    cin >> a;

    if(a > 90 && a < 100) cout << "Grade A";
    else if(a > 80 && a < 89) cout << "Grade B";
    else if(a > 70 && a < 79) cout << "Grade C";
    else if(a > 60 && a < 69) cout << "Grade D";
    else cout << "Grade F";

    
    return 0;
}