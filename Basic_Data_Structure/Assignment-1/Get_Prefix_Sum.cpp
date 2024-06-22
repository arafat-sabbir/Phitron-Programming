#include <bits/stdc++.h>
using namespace std;

int main()
{
    long long n;
    cin >> n;
    long long arr[n];
    for (long long i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    long long pre[n];
    pre[0] = arr[0];
    for (long long i = 1; i < n; i++)
    {
        pre[i] = arr[i] + pre[i - 1];
    }
    for (long long i = n - 1; i >= 0; i--)
    {
        cout << pre[i]<<" ";
    }
    return 0;
}