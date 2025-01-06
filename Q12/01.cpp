#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v;
    for(int i=0; i<n; i++){
        int x;
        cin >> x;
        v.push_back(x);
    }

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }

    cout << endl;

    make_heap(v.begin(), v.end(), greater<int>());
    pop_heap(v.begin(), v.end(), greater<int>());

    

    for(int i=0; i<v.size(); i++){
        cout << v[i] << " ";
    }
    return 0;
}