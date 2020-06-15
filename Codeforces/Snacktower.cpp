#include <iostream>

using namespace std;

int main()
{

int n;
cin>>n;
int maxi = n;
int arr[n+1];

for(int i=1 ; i<=n ; i++)
{
 cin>>arr[i];
}

bool vis[n+1]={0};

for(int i=1 ; i<=n ; i++)
{
    vis[ arr[i] ] = true;

    while( vis[maxi] && maxi>0 )
       {
         cout<< maxi<<" ";
         maxi--;
       }
        cout<<endl;
}

    return 0;
}
