#include<iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;

    for(int k=0; k<t; k++){
        int n;
        cin >> n;

        int arr[n];
        for(int i=0; i<n; i++){
            cin >> arr[i];
        }
        
        int target;
        cin >> target;

        bool flag = false;

        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(arr[i] + arr[j] == target){
                    flag = true;
                    break;
                }
            }
        }

        if(flag) cout << "YES" << endl;
        else cout << "NO" << endl;

    }
    return 0;
}