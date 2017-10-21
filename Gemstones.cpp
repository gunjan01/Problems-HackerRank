#include <bits/stdc++.h>
using namespace std;

int main() {
    int n,i,j;
    cin >> n;
    string s;
    int a[n][26]={0};
    
    for(i=0;i<n;i++)
    {
        cin>>s;
        for(j=0;j<s.length();j++)
        {
            a[i][s[j]-'a']++;
        }
    }
    
    int flag,cnt=0;
    for(j=0;j<26;j++)
    {
        for(i=0;i<n;i++)
        {
            if(a[i][j]==0) break;
        }
        if(i==n) cnt++;
    }
    
    cout<<cnt<<endl;
    
    return 0;
    
}
