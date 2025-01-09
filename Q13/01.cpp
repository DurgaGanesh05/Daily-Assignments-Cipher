#include<iostream>
using namespace std;

int main()
{
    int n = 6;
    int arr[n] = {-1, 0, 1, 2, -1, 4};

    cout << "Triplets with sum 0 are: " << endl;

    for(int i = 0; i < n; i++){
        for(int j = i+1; j < n; j++){
            for(int k = j+1; k < n; k++){
                if(arr[i] + arr[j] + arr[k] == 0) cout << arr[i] << " " << arr[j] << " " << arr[k] << endl;
            }
        }
    }
    return 0;
}