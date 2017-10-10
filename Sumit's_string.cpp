#include <bits/stdc++.h>

using namespace std;

string twoStrings(string s1, string s2){
    // Complete this function
    int f[26]={0},i;
    for(i=0;i<s1.length();i++) f[s1[i]-'a']++;
    for(i=0;i<s2.length();i++)
    {
        if(f[s2[i]-'a']>0) break;
    }
    if(i<s2.length()) return "YES";
    else return "NO";
    
}

int main() {
    int q;
    cin >> q;
    for(int a0 = 0; a0 < q; a0++){
        string s1;
        cin >> s1;
        string s2;
        cin >> s2;
        string result = twoStrings(s1, s2);
        cout << result << endl;
    }
    return 0;
}
