#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
int n;
string words[102],words2[102],first,Last;
int c[102];
cin>>n;


for(int i=0 ; i<n ; i++){
        cin>>words[i];
        c[i] = words[i].length();
      //  tolower(Words[i]); -> not working

        transform(words[i].begin(), words[i].end(), words[i].begin(), ::tolower);
}


for(int i=0 ; i<n ; i++)
{
    words2[i] = words[i];
    if(c[i] > 10)
    {
      first= words[i].erase(1);
      words2[i].erase(words2[i].begin(),words2[i].end()-1);
    Last = words2[i];

        cout<<first<<c[i]-2<<Last<<endl;
    }
    else
        cout<<words[i]<<endl;
}
return 0;
}


/**/
