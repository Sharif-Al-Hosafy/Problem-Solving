#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>>n;

bool arr[n];

memset(arr, 0,n);

for(int i=0 ; i<n ; i++)
    cout<<arr[i];

    return 0;
}
