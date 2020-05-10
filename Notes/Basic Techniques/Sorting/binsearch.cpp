#include <bits/stdc++.h>


using namespace std;

int main()
{
    ios::sync_with_stdio(0);
    cin.tie(0);

    int n = 3;
    int array[n] = {2,3,1};
    int x = 1;

    sort(array, array+n);

    auto k = lower_bound(array, array+n, x) - array;

    if  (k < n && array[k] == x)
    {
        cout<< "YES";
    }


}