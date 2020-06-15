#include <iostream>

using namespace std;

int main()
{
    int n,maxi;
    bool flag = 0;
    cin>>n;
    int first[n], last[n];

    for(int i=1 ; i<=n ; i++)
        cin>>first[i];

for(int i=1 ; i<=n ; i++)
{
    for(int j=1 ; j<=n ;j++)
    {
        if(i == first[j])
            last[i] = j;
    }
}

for(int i=1 ; i<=n ; i++)
        cout<<last[i] <<" ";

    return 0;
}
