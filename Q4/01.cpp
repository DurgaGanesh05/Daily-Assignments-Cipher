#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int min = INT32_MAX;
    for(int i=0; i<n; i++){
        if(arr[i] < min) min = arr[i];
    }

    cout << min;
    return 0;
}