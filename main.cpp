#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    string arr[200003];
    int n, cnt=0;
    cin>>n;

    for(int i=0 ; i<n ; i++)
        cin>>arr[i];

    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == "Tetrahedron")
            cnt += 4;
        else if(arr[i] == "Icosahedron")
            cnt += 20;
        else if(arr[i] == "Cube")
            cnt += 6;
        else if(arr[i] == "Octahedron")
            cnt += 8;
        else if(arr[i] == "Dodecahedron")
            cnt += 12;
    }

    cout<<cnt;
    return 0;
}
