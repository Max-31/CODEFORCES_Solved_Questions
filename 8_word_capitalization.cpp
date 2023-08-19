#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    string s;
    cin>>s;
    lint n= s.length();

    if('a'<=s[0] && s[0]<='z'){
        s[0]-=32;
    }

    cout<<s<<"\n";
    return 0;
}