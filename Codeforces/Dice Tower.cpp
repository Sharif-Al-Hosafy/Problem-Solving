#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

int n,first,x,y;
cin>>n>>first;

for(int i=0 ; i<n ; i++)
{
    cin>>x>>y;
    if(x==first ||x ==7-first ||y==first ||y ==7-first)
        {cout<<"NO"; return 0;}
}
cout<<"YES";


    return 0;
}
