#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

char arr[203];
string last[203];
cin>>arr;
int i = 0;

while(i<strlen(arr))
{
    if( arr[i] == 'W' && arr[i+1] == 'U' && arr[i+2] == 'B')
    {
        if(i!=0) last[i] = " ";
        i+=3;
    }
    else
    {
        last[i] = arr[i];
        i++;
    }
}

for(int i=0 ; i<strlen(arr) ; i++)
{
    if(last[i] == " " && last[i+1] == " ") last[i].erase();
    cout<<last[i];
}
    return 0;
}
