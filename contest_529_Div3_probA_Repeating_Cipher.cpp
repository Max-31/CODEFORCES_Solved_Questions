#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define endl 
 

int main(){
fastIO();
    lint n, m=0;
    cin>>n;
    // vector <int> v,v1;
    string s,t;
    cin>>s;
    
    if(n==1){
        for(lint i=0; i<n;i++){
            if(m<n){
                cout<<s[m];
                m=m+i;
                // v.push_back(m);
            }        
        }
    }
    else{
        for(lint i=1; i<n;i++){
            if(m<n){
                cout<<s[m];
                m=m+i;
                // v.push_back(m);
            }        
        }
    }
    // cout<<'\0';

    return 0;
}