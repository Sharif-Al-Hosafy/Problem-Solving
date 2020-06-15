#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

char str[102];
cin>>str;

for(int i=0 ; i<strlen(str) ; i++)
{
    str[i] = tolower(str[i]);

    if(str[i]=='o'||str[i]=='u'||str[i]=='y'||str[i]=='e'||str[i]=='a' ||str[i]=='i')
        continue;
    else
    {
        cout<<".";
        cout<<str[i];

    }
}

    return 0;
}
