#include<iostream>
using namespace std;

int main(){
    int n;
    cin >> n;

    int arr[n];
    for(int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    int maxsum=INT32_MIN;
    for(int st = 0; st < n; st++){
        for(int end = st; end < n; end++){
            int sum=0;
            for(int i = st; i <= end; i++){
                sum += arr[i];  
            }
            if(sum>maxsum) maxsum=sum;
        }
    }

    cout << maxsum;
    return 0;
}