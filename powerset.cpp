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
    vector<vector<int>>ans;
     for(int i=0;i<=(1<<n)-1;i++)
        {
            vector<int>v;
            for(int j=0;j<=n-1;j++)
            {
                if(i & (1<<j))
                {
                    v.push_back(arr[j]);
                }
            }
            ans.push_back(v);
        }

        for(int i=0;i<ans.size();i++)
        {
            for(int j=0;j<ans[i].size();j++)
            {
                cout<<ans[i][j]<<" ";
            }
            cout<<endl;
        }
  }
}
