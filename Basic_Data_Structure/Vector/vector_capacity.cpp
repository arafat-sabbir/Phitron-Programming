#include <bits/stdc++.h>
using namespace std;

int main()
{
    vector<int> v;
    cout << v.size() << endl;
    cout << v.capacity() << endl;
    v.push_back(10);
    cout << v.capacity() << endl;
    v.push_back(20);
    cout << v.capacity() << endl;
    v.push_back(40);
    cout << v.capacity() << endl;
    cout << v.max_size() << " " << "MaxSize" << endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    v.clear();
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << v[1] << endl;
    return 0;
}