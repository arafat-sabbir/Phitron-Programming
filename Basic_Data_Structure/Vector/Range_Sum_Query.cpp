#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    while (q--)
    {
        int a, b;
        cin >> a >> b;
           int sum = 0;
        for (int i = a - 1; i < b; i++)
        {
            sum = sum + arr[i];
        }
        cout<<sum<<endl;
    }
    return 0;
}