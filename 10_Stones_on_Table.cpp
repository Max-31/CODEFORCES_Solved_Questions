#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    lint n, c=0;
    cin>>n;
    string s;
    cin>>s;

    for(int i=0; i<n-1; i++){
        if(s[i]==s[i+1]){
            c++;
        }
    }

    cout<<c<<endl;
    
    return 0;
}