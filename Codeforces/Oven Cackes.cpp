#include <iostream>
#include <bits/stdc++.h>
using namespace std;


int main()
{

int n, t, k, d;
cin>>n>>t>>k>>d;
int total1=0;
int g=(n+k-1)/k;
int total2=d;
for(int i=0 ; i<g ; i++){

if(total1<=total2){
    total1 += t;
}
else
    total2 += t;
}

if(max(total1,total2)< g*t) //ceil howa 3adad magmo3at ely basta5dem feha el forn badraha fe t 34an a3raf total el time
    cout<<"YES";
else
    cout<<"NO";

    return 0;
}
