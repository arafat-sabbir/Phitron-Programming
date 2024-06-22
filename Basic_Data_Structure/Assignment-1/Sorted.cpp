#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int sorted[n];
        for (int i = 0; i < n; i++)
        {
            sorted[i] = arr[i];
        }
        sort(sorted, sorted + n);
        int flag = 0;
        for (int i = 0; i < n; i++)
        {
            if (arr[i] != sorted[i])
            {
                flag = 0;
                break;
            }
            else
            {
                flag = 1;
            }
        }
        if (flag == 1)
        {
            cout << "YES"<<endl;
        }
        else
        {
            cout << "NO"<<endl;
        }
    }

    return 0;
}