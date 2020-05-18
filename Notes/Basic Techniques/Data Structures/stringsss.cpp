#include <bits/stdc++.h>


using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    string a = "krishna";
    string b = a + a + a;

    cout<< b << "\n";

    string c = b.substr(2,3);
    cout<< c << "\n";

    int pos = b.find('k');
    cout << pos << "\n";
}