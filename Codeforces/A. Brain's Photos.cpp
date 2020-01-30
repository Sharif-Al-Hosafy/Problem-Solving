#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

char pixels[10002];
bool flag = 1;
int n, m;
cin>>n>>m;

for(int i=0 ; i<n*m ; i++)
    cin>>pixels[i];

for(int i=0 ; i<n*m ; i++)
{
    if( pixels[i]== 'W' || pixels[i]== 'B' || pixels[i]== 'G')
            continue;
    else
    {
        flag = 0;
        break;
    }
}

if( flag == 1)
    cout<<"#Black&White";
else
    cout<<"#Color";

    return 0;
}
