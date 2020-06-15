#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
   char c;
   int n, k, r, arr[103], no[103];
   cin>>n>>k;
    srand (time(NULL));    // initialize the random number generator

    arr[0]= 0 % 26;

    for (int i=1; i<=k; i++)
    {
          arr[i] = i % 26;
    while(arr[i] == arr[i-1])
        {
          arr[i] = i % 26;
        }
    }

if(n == k)
    {
      for(int i=0 ; i<n ; i++)
          {
        for(int j=i+1 ; j<n ; j++)
            if(arr[i] == arr[j])
                arr[j]= -5; //flag
           }

for(int i=0 ; i<n ; i++)
 {
       if(arr[i]==-5)
       {
        int temp = rand() % 26;
           for(int j =0 ; j<n ; j++)
           {
               if(temp == arr[j])
               {j = 0; temp = rand() % 26;}
           }
            arr[i] = temp;
       }
       c = 'a' + arr[i];
            cout << c;
   }

    }

else{
    for (int i=0; ; )
        {
            if(n == 0) break;
            n--;

            c = 'a' + arr[i];
            cout << c;
            i++;

            if(i == k)
                i = 0;
        }
    }

    return 0;
}
