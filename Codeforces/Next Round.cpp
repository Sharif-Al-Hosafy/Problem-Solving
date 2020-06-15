#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

int n,k,c=0;
cin>>n>>k;
int arr[n];

if(n >= k)
{
for(int i=1 ; i<=n ; i++)
    cin>>arr[i];

    for(int i=1 ; i<=n ; i++)
    {

        if( arr[i] >= arr[k] && arr[i] != 0 )
            c++;
    }
}

cout<<c;
    return 0;
}
