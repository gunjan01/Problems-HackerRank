#include<bits/stdc++.h>
using namespace std;

int main()
{
    int t;
    cin>>t;
    
    if(t<1 || t>10) cout<<"Invalid Test"<<endl;
    
    else
    {
      string s;
      
    while(t!=0)
    {
        cin>>s;
        int i,cntu=0,cntl=0;
        
       
        if(s.length()>100 || s.length()==0 )
        {
            cout<<"Invalid Input"<<endl;
            t--;
            continue;
        }
        
        for(i=0;i<s.length();i++)
        {
    
            if(isupper(s[i])) cntu++;
            
            else if(islower(s[i])) cntl++;
        }
        
        if(cntu==0 && cntl==0) cout<<"Invalid Input"<<endl;
        else cout<<min(cntu,cntl)<<endl;
        
    
        
        t--;
        
    }
    
    }
    return 0;
}
