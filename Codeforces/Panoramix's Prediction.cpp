#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

int n, m, prime;
bool flag = 0;
cin>>n>>m;
int j=n;

for(int i=n+1 ; i<=m ; i++)
{
    for(int j=2 ; j<i ; j++)
        if( i%j == 0 )
        {
           flag = 1;
           break;
        }

 if(flag == 0)
 {
    prime = i;
    break;
 }
 flag = 0;
}

if(flag == 0 && prime == m)
    cout<<"YES";
else
    cout<<"NO";

    return 0;
}
