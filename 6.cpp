#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0;
    for(int i = 5;i>=1;i--,k=0)
    {
        for(int j = 1;j<=5-i;j++)
        {
            cout<<" ";
        }
        while(k != 2*i-1)
        {
            cout<<"*";
            k++;
        }
        cout<<endl;
    }
    return 0;
}
       