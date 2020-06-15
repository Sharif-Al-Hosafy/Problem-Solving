#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n, k, cnt=0;
	cin >> n >> k;
	string myChar[k];

	for (int i = 0; i<=n; i++)
		cin>>myChar[i];

for(int i=0; i<10 ; i++)
 {
  stringstream ss;
  ss<<i;
  string s;
  ss>>s;
    for(int j=0 ; j<=k ; j++)
    {
        if(s == myChar[j])
        {
            cnt++;
            break;
        }
    }
}
cout<<cnt;
return 0;
}

