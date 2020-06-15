#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

char s[102];
char t[102];
cin>>s>>t;
bool flag = 0;

for(int i=0, j=strlen(s)-1 ; i<j ; i++ , j--)
   {
        s[i] = tolower(s[i]);
        s[j] = tolower(s[j]);
        swap(s[i], s[j]);
   }

for(int i=0 ; i<strlen(s) ; i++)
    if(s[i] == t[i])
        flag=1;
    else
    {flag=0; break;}

if(flag == 1 )
    cout<<"YES";
else
    cout<<"NO";

    return 0;
}
