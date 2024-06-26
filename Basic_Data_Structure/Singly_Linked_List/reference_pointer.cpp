#include <bits/stdc++.h>
using namespace std;
void fun(int * &p)
{
    cout << &p << endl;
}
int main()
{
    int n = 50;
    int *ptr = &n;
    cout << &ptr << endl;
    fun(ptr);

    return 0;
}