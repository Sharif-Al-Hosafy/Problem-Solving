#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{

string s;
cin>>s;

int n = s.length();
int number[100];
char char_array[n+1];

strcpy(char_array, s.c_str()); // keda ana 7awelt el string le char

for (int i=0 ; i<n ; i +=2 )
{
    number[i] = char_array[i]-48; // 48 is zero in ASCII
}

for(int i=0 ; i<n ; i +=2 ){ //sorting
   int temp = number[i];
        for(int j = i+2 ; j<n ; j +=2 )
            {
                if(number[j]<number[i])
                    {
                        temp = number[i];
                        number[i]=number[j];
                        number[j] = temp;
                    }
            }
}


for(int i=0 ; i<n ;)
if(i == 0 || i%2 == 0){
        cout<<number[i];
        i++;
}
    else{
        cout<<"+";
    i++;
    }
    return 0;
}
