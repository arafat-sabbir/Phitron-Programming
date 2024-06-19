#include <bits/stdc++.h>
using namespace std;

int main()
// O(log n) time complexity
{
  int n;
  cin>>n;
  while(n>0){
    int digit = n%10;
    cout<<digit<<endl;
    n/=10;
  }
  return 0;
}