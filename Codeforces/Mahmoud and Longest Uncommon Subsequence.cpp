#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

string a,b;

cin>>a>>b;

transform(a.begin(), a.end(), a.begin(), ::tolower);
transform(b.begin(), b.end(), b.begin(), ::tolower);

if(a.size() > b.size())
    cout<< a.size();
else if(b.size() > a.size())
     cout<< b.size();
else
{
 if( a == b )
        cout<<-1;
 else
    cout<<a.size();
}

    return 0;
}
