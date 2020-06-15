#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

int n;
cin>>n;
int arr[n];

for(int i=0 ; i<n ; i++)
{
    cin>>arr[i];
}

sort(arr,arr+n);

int c=0;
for(int i = 1 ; i<n-1 ;i++)
{
    if( arr[0]<arr[i]&&arr[n-1]>arr[i])c++;
}
cout<<c;

    return 0;
}
