#include<bits/stdc++.h>
using namespace std;
int main()
{
    int k = 0;
    int m = 0;
    for(int i = 1;i<=4;i++,k=0)
    {
        for(int j = 1;j<=4-i;j++)
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
    for(int i = 3;i>=1;i--,m=0)
    {
        for(int j = 1;j<=3;j++)
        {
            if(j>=i)
                cout<<" ";
        }
        while(m != 2*i-1)
        {
            cout<<"*";
            m++;
        }
        cout<<endl;
    }

    return 0;
}
// for(int i = 5;i>=1;i--,k=0)
//     {
//         for(int j = 1;j<=5-i;j++)
//         {
//             cout<<" ";
//         }
//         while(k != 2*i-1)
//         {
//             cout<<"*";
//             k++;
//         }
//         cout<<endl;
//     } 