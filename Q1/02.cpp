#include<iostream>
using namespace std;

int main()
{
    int sum=0;

    for(int i=0; i<5; i++){
        int a;
        cout << "Enter grade: ";
        cin >> a;

        sum+=a;
    }

    
    cout << "The average grade is: " << double(sum/5.0);

    return 0;
}