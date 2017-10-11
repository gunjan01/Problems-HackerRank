#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    string s;
    cin>>t;
    
    while(t!=0)
    {
        
        int i;
        cin>>s;
        
        int f[5]={0};
        
        for(i=0;i<s.length();i++)
        {
            if(s[i]=='a') f[0]++;
            if(s[i]=='e') f[1]++;
            if(s[i]=='i') f[2]++;
            if(s[i]=='o') f[3]++;
            if(s[i]=='u') f[4]++;
        }
        
        
        for(i=0;i<5;i++)
        {
            if(f[i]==0) break;
        }
            
        if(i<5) cout<<"NO"<<endl;
        else cout<<"YES"<<endl;
        
        
        t--;
    }

    return 0;
}
