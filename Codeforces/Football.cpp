#include <iostream>
#include <bits/stdc++.h>

using namespace std;

int main()
{

int f=0, s=0, n;
cin>>n;
string firstTeam, secondTeam, goals[102];


for(int i=0 ; i<n ; i++)
    cin>>goals[i];

firstTeam = goals[0];

if(n==1)
    cout<<goals[0];
else
{
    for(int i=0 ; i<n ; i++)
        if(goals[i] != firstTeam)
            {
                secondTeam = goals[i];
                break;
            }

    for(int i=0 ; i<n ; i++)
    {
        if(goals[i] == firstTeam)
            f++;
        else
            s++;
    }

    if(f>s)
        cout<<firstTeam;
    else
        cout<<secondTeam;
}

    return 0;
}
