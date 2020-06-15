#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

char c[2];
int  n,out=0;
long long  x;
int  d;
cin>>n>>x;

for(int i=0 ; i<n ; i++)
{
    cin>>c>>d;

    if(c[0] == '+')
        x += d;
    else if(c[0] == '-')
    {
        if(x >= d)
            x -= d;
        else
            out ++;
    }
}

cout<<x<<" "<<out;


    return 0;
}
