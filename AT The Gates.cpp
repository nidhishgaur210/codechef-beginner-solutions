#include <bits/stdc++.h>
using namespace std;
int main() {
    int t;
    cin>>t;
    while(t--)
    {
        int n,k;
        cin>>n>>k;
        char a[n+1];
        for(int i=0;i<n;i++)
        cin>>a[i];
        int h=0;
        for(int i=n-1;i>=n-k;i--)
        {
            if(a[i]=='H')
            {
                for(int j=0;j<i;j++)
                {
                    if(a[j]=='H')
                     a[j]='T';
                    else
                     a[j]='H';
                }
            }
        }
        for(int i=0;i<n-k;i++)
        {
            if(a[i]=='H')
             h++;
        }
        cout<<h<<endl;
    }
	return 0;
}
