#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n,q,d,i,x=1;
    cin>>n;
    
    int a[n];
    for(i=0;i<n;i++) cin>>a[i];
    
    cin>>q;
    
    while(q!=0)
    {
        cin>>d;
        x=x*d;
        q--;
    }
    
    for(i=0;i<n;i++) 
    {
        if(x==0) cout<<"0"<<" ";
        else cout<<a[i]/x<<" ";
    }
    
    return 0;

}
