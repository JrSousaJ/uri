#include<bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    while(~scanf("%d",&n))
    {
        vector<string>v;
        for(int i=0;i<n;i++)
        {
            string x;
            cin >> x;
            v.push_back(x);
        }
        int m=-1,ans=0;
        for(int i=1;i<n;i++)
        {
            ans=0;
            for(int j=0;j<v[i].size();i++)
            {
                if(v[i][j]==v[0][j])ans++;
            }
            m=max(m,ans);
        }
        printf("%d\n",m);
    }
    return 0;
}
