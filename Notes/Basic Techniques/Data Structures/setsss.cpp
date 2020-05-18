#include <bits/stdc++.h>

using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    set<int> s = {2, 3, 4, 5};

    s.insert(6);

    cout<< s.count(3) << "\n";
    s.erase(4);
    cout<< s.count(4) << "\n";

    for(auto x: s) {
        cout << x << "\n";
    }

    map<string, int> m;

    m["monkey"] = 1;
}