#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>>n;
char s[n];
cin>>s;

int zero=0, one=0;
for(int i=0 ; i<n+1 ; i++)
{
    if( s[i] == '0' )
        zero++;
    else if( s[i] == '1' )
        one++;
}

cout<<abs( zero-one );

    return 0;

}
