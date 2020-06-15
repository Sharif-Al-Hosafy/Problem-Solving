#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
string arr[100003];
int c=0,m;

cin>>m;
for(int i=0 ; i<m ; i++)
    cin>>arr[i];

for(int i=0 ; i<m-1 ; i++)
    if(arr[i] != arr[i+1])
        c++;

cout<<c+1;

    return 0;
}
