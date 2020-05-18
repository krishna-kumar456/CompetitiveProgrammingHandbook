#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<int> v;

    v.push_back(3);
    v.push_back(5);
    v.push_back(51);
    v.push_back(15);


    for(int i=0; i<1; i++) {
        cout<< v[i] << "\n";
    }

    for (auto x: v) {
        cout<< x << "\n";
    }

    v.pop_back();

    cout<< v.back() << "\n";
}