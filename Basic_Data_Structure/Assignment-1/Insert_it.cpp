#include <bits/stdc++.h>
using namespace std;

void insertX(int arr[], int n, int arr2[], int n2, int x)
{
    if (x > n)
    {
        copy(arr2, arr2 + n2, arr + n);
        copy(arr, arr + n, arr2);
        return;
    }
    for (int i = n - 1; i >= x; i--)
    {
        arr[i + n2] = arr[i];
    }
    for (int i = 0; i < n2; i++)
    {
        arr[x + i] = arr2[i];
    }
}

int main()
{
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    int n2;
    cin >> n2;
    int arr2[n2];
    for (int i = 0; i < n2; i++)
    {
        cin >> arr2[i];
    }
    int x;
    cin >> x;
    insertX(arr, n, arr2, n2, x);

    for (int i = 0; i < n + n2; i++)
    {
        cout << arr[i] << " ";
    }
    return 0;
}

