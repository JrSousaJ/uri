#include<bits/stdc++.h>

using namespace std;


int main()
{
   int n;
   int n2;
   scanf("%d",&n);
   while(n--)
   {
       scanf("%d",&n2);
       int v[n2];
       double med=0;
       for(int i=0;i<n2;i++)
       {
           scanf("%d",&v[i]);
           med+=v[i];
       }
       med/=n2;
       int c=0;
       for(int i=0;i<n2;i++)
       {
           if(v[i]>med)
               c++;
       }
       double ans=(double)c/n2;

       printf("%.3lf %%\n",ans*100);
   }
	return 0;
}
