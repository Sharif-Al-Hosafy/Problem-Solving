#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

int n;
int flag = 1;
int flag2 = 0;
int start = 0;
cin>>n;
char arr[302][302];

for(int i=1 ; i<=n ; i++)
    for(int j=1 ; j<=n ; j++)
        cin>>arr[i][j];

int leftd = arr[1][1];
int rightd = arr[1][n];

for(int i=1 ; i<=n ; i++)
    if( arr[i][i] != leftd)
            flag=0;

for(int i=1 ; i<=n ; i++)
{
    for(int j=1 ; j<=n ; j++)
        if(arr[i][j] == leftd)
                start = 2;
        else
        {
            start = 3;
            break;
        }

    if(start == 3) break;
}

if(start == 2) cout<<"NO";
else
{
for(int i=1, j=n ; i<=n ; i++,j--)
    if( arr[i][j] != rightd)
            flag=0;

for(int i=1 ; i<=n ; i++)
    for(int j=1, k=n ; j<=k ; j++, k--)
        if(arr[i][j] != arr[i][k])
            flag = 0;

for(int i=1 ; i<=n ; i++)
{
    for(int j=1 ; j<=n ; j++)
         if( arr[i][j] != arr[j][i])
                {
                    flag2 = 2;
                    break;
                }
    if(flag2 == 2) break;
}

if(flag == 0 || flag2 == 2) cout<<"NO";
else cout<<"YES";

}
    return 0;
}
