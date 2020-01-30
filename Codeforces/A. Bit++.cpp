#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    cin>>n;
    string str[n];

    int c=0;

    for(int i=0 ; i<n ; i++)
        {
            cin>>str[i];
            str[i].erase(remove(str[i].begin(), str[i].end(), ' '), str[i].end());
            transform(str[i].begin(), str[i].end(), str[i].begin(), ::tolower);
        }

    for(int i=0 ; i<n ; i++)
        if(str[i] == "++x" || str[i] == "x++")
            c++;
        else if(str[i] == "--x" || str[i] == "x--")
            c--;

    cout << c;
    return 0;
}
