#include <bits/stdc++.h>
using namespace std;

int main()
{
    int t,n,k;
    cin>>t;
    
    while(t!=0)
    {
        
        string s;
        cin>>n>>k;
        cin>>s;
        
        int i,offset;
        
        for(i=0;i<n;i++)
        {
            if(isupper(s[i]))
            {
                offset=((s[i]-'A')+k)%26;
                cout<<char('A'+offset);
            }
            else if(islower(s[i])) 
            {
                cout<<char('a'+((s[i]-'a')+k)%26);
            }
            else if(isdigit(s[i]))
            {
                offset=s[i]-'0';
                offset=(offset+k)%10;
                cout<<(char)('0'+offset);
            }
            else cout<<s[i];
        }
        
        cout<<endl;
        
        t--;
        
    }
    return 0;
}
