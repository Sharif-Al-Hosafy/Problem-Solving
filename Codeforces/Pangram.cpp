#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

int n;
cin>>n;
char input[n];
cin>>input;

int arr[103];
bool vis[26]={0};
bool flag = 1;

int sizee = strlen(input);

for(int i=0 ; i<sizee ; i++)
{
   input[i] = tolower( input[i] );
}

for(int i=0 ; i<sizee ; i++)
{
    arr[i] = input[i]+0;
    vis[ arr[i] - 97 ] = 1;
}


for(int i=0 ; i<26 ; i++)
    if( vis[i] != 1 )
    {
        flag = 0;
        break;
    }

    if(flag == 1)
        cout<<"YES";
    else
        cout<<"NO";

return 0;
}
