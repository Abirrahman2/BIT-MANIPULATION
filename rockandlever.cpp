#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n;
        cin>>n;
        int arr[n];
        for(int i=0;i<n;i++)
        {
            cin>>arr[i];
        }
        int track[n]={0};
        long long ans=0;
        for(int i=31;i>=0;i--)
        {
            int count=0;
            for(int j=0;j<n;j++)
            {
                if((arr[j] & (1<<i)) && track[j]==0)
                {
                    count++;
                    track[j]=1;
                }
            }
            ans=ans+1LL*count*(count-1)/2;
        }
        cout<<ans<<endl;
    }
}
