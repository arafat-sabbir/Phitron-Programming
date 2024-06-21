#include <bits/stdc++.h>
using namespace std;

int main()
{
    // vector<int> v; Initializing Vector Without Size And Value
    // vector<int> v(5);  Initializing Vector With Size 5
    // vector<int> v(5, 10); Initializing Vector With Size 5 And Value 10
    vector <int> v2(10,100); //Initializing Vector With Size 10 And Value 100
    int array[5] = {1, 2, 3, 4, 5};
    vector<int> v(array, array + 5); // Initializing Vector With Array
    // vector<int> v(v2); Initializing Vector With Vector v2
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }
    cout << endl;
    cout << v.size();
    return 0;
}