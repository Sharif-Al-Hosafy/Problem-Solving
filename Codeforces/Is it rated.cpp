#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

int n,t=1;
cin>>n;
bool flag = 0;
int arr[n*2];

for(int i=0 ; i<n*2 ; i++)
    cin>>arr[i];


for(int i=0 ; i<(n*2)-1 ; i+=2)
{
    if(arr[i] != arr[i+1])
      {
         flag = 1;
         break;
      }
}

for(int i=0 ; i<(n*2)-2 ; i+=2)
{
    if( arr[i] < arr[i+2]) t=0; //unrated
}

if(flag == 1)
{
    cout<<"rated";
}
else if(t == 0 )
    cout<<"unrated";
else
    cout<<"maybe";
    return 0;
}
