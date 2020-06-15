#include <iostream>
#include <bits/stdc++.h>
#include <stdint.h>
using namespace std;

int main()
{

int64_t n, m, a, c=0, d=0;

cin>>n>>m>>a;
if(a == 1)
{
    cout<<n*m;
}
else
{
while(n>0)
{
    n -= a;
     c++;
}
while(m>0)
{
    m -= a;
    d++;
}

cout<<c*d;
}

return 0;
}
