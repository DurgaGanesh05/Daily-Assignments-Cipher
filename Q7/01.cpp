#include<iostream>
using namespace std;


int stock(int arr[], int n){
    int profit = INT32_MIN;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[j] - arr[i] > profit){
                profit = arr[j] - arr[i];
            }
        }
    }
    return profit;
}


int main()
{
    int n;
    cin>>n;
    
    int arr[n];
    for(int i=0; i<n; i++){
        cin >> arr[i];
    }

    if(stock(arr, n) > 0) cout << stock(arr, n);
    else cout << 0;

    return 0;
}