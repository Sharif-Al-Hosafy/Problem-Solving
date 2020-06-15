#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

int n, c1=0, c2=0, c3=0, mini,Teams=0;
int students[5004],places1[5004],places2[5004],places3[5004];
cin>>n;

for(int i=1 ; i<=n ; i++)
    {
      cin>>students[i];

        if(students[i] == 1)
            c1++;
        else if(students[i] == 2)
            c2++;
        else if(students[i] == 3)
            c3++;
    }
    int da5el1 = c1;
    int da5el2 = c2;
    int da5el3 = c3;

mini = min(min(c1,c2),c3);
while(c1 != mini || c2 != mini || c3 != mini)
        if(c1>mini)
            c1 = mini;
        else if(c2>mini)
        c2 = mini;
        else if (c3>mini)
        c3 = mini;
int temp = c1;
while(c1 != 0)
{       c1--;
        Teams++;
}

for(int i=1 ; i<=Teams ; i++)
    for(int j=1 ; j<=n ; j++)
        if(students[j] == 1 && temp != 0)
            {
                places1[i] = j;
                students[j]= -1;
                temp --;
                break;
            }

for(int i=1 ; i<=Teams ; i++)
    for(int j=1 ; j<=n ; j++)
        if(students[j] == 2 && c2 != 0)
            {
                places2[i] = j;
                students[j]= -1;
                c2 --;
                break;
            }

for(int i=1 ; i<=Teams ; i++)
    for(int j=1 ; j<=n ; j++)
        if(students[j] == 3 && c3 != 0)
            {
                places3[i] = j;
                students[j]= -1;
                c3 --;
                break;
            }

if(da5el1 == 0 || da5el2 == 0 || da5el3 == 0)
   {
     cout<<0;
   }
    else{
        cout<< Teams<<endl;
            for(int j=1 ; j<= Teams ; j++)
                cout<<places1[j]<<" "<<places2[j]<<" "<<places3[j]<<endl;
        }
    return 0;
}
