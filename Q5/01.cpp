#include<iostream>
#include<algorithm>
using namespace std;

int main()
{
    int n;
    cin >> n;
    int arr[n];

    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    int m;
    cin >> m;

    sort(arr, arr+n);

    int subArr[m];
    for(int i=0; i<m; i++){
        subArr[i] = arr[i];
    }

    int min = INT32_MAX;
    for(int i=0; i<m; i++){
        if(subArr[i] < min) min = subArr[i];
    }
    int max = INT32_MIN;
    for(int i=0; i<m; i++){
        if(subArr[i] > max) max = subArr[i];
    }

    cout << max-min;

    return 0;
}