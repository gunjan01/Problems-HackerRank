#include <bits/stdc++.h>
using namespace std;

int main()
{
    
    string s;
    getline(cin,s);
    
    int f[256]={0},max=0,index,i;
    
    for(i=0;i<s.length();i++)
    {
        f[s[i]]++;
    }
    
    for(i=255;i>=0;i--)
    {
        if(max<=f[i])
        {
            max=f[i];
            index=i;
        }
    }
    
    cout<<char(index)<<" "<<max<<endl;
   
   
    return 0;
    
}
