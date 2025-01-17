#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;
    
    int arr[n];

    for(int i=0; i<n; i++){
        cin>>arr[i];
    }

    int j=n-1;
    bool flag=false;

    for(int i=0; i<n; i++){
        for(int j=i+1; j<n; j++){
            if(arr[i]==arr[j]){
                flag=true;
                break;
            }
        }
    }

    if(flag) cout<<"True";
    else cout<<"False";
        
    return 0;
}