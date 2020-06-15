#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

vector <int> v;
int n ,numbers , S=0 , D=0;
bool sState = true , dState = false;

cin>>n;

for(int i=0 ; i<n ; i++)
   {cin>>numbers;
   v.push_back(numbers);
   }


for(int i=0 ; i<n ; i++)
{
    if(v.front()>v.back())
    {
        if(sState){
            S+=v.front();
            sState = false;
            dState = true;
            v.erase(v.begin());
        }else
            {
                D+=v.front();
                dState = false;
                sState = true;
                v.erase(v.begin());
            }

    }else
    {
        if(sState){
            S+=v.back();
            v.pop_back();
            sState = false;
            dState = true;
        }else
            {
                D+=v.back();
                v.pop_back();
                dState = false;
                sState = true;
            }
    }
}

cout<<S<<" "<<D;
    return 0;
}
