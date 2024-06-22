#include <bits/stdc++.h>
using namespace std;

bool isDuplicate(int arr[], int n){
    for(int i = 0; i < n-1; i++){
        for(int j = i+1; j < n; j++){
            if(arr[i] == arr[j]){
                return true;
            }
        }
    }
    return false;
}

int main()
{
  int n;
  cin>>n;
  int array[n];
  for(int i = 0;i<n;i++){
    cin>>array[i];
  }
  if(isDuplicate(array, n)){
      cout<<"YES";
  }else{
      cout<<"NO";
  }
  return 0;
}

