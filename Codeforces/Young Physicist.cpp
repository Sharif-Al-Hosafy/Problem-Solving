#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>>n;

int arr[n*3];

for(int i=0 ; i<n*3 ; i++)
    cin>> arr[i];


int sumX = 0;
int sumY = 0;
int sumZ = 0;

for(int i=0 ; i<n ; i++)
    for(int j = i ; j<n*3 ; j += 3)
    {
        if(i == 0)
            sumX += arr[j];
        if(i == 1)
            sumY += arr[j];
        if(i == 2)
            sumZ += arr[j];
    }


if(sumZ == 0 && sumY == 0 &&sumX == 0)
    cout<<"YES";
else
    cout<<"NO";

    return 0;
}
