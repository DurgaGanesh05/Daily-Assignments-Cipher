#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    make_heap(v.begin(), v.end(), greater<int>());

    int k;
    cin >> k;

    for(int i=0; i<k-1; i++){
        pop_heap(v.begin(), v.end(), greater<int>());
        v.pop_back();
    }

    cout << "The " << k << " fastest time is: " << v.front() << endl;
    return 0;
}