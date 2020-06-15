#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
long long num;
long long cnt = 0;
long long i;
cin>>num;

if(num%2 == 0)
    cout<<num/2;
else
{
    for(i=num ; i>=1 ; i -= 2)
        cnt++;

cout<<"-"<<cnt;
}
    return 0;
}

//  OR

/*

#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
long long num;
cin>>num;
if(num%2 == 0)
    cout<<num/2;
else
cout<< ( (num-1)/2 ) - num;
    return 0;
}



*/
