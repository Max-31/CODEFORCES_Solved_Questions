#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    lint n, t, to, boycount=0;
    cin>>n>>t;
    to=t;
    string s;
    cin>>s;

    while(t--){
        for(int i=0; i<n; i++){
            if(s[i]=='B' && s[i+1]=='G'){
                swap(s[i], s[i+1]);
                i++;
            }
        }
    }
    cout<<s<<"\n";
    
    return 0;
}

/*
int index=0;
    for(int i=0; i<n; i++){
        if(s[i]=='B'){
            boycount++;
            if(boycount>1){
                continue;
            }
            
            // else{
                index=i;
                t=to;
                
            // }
        }

        else if(s[i]=='G'){
            boycount=0;
            if(t>0 && index!=i){
                swap(s[index], s[i]);
                index=i;
                t--;
            }
        }
    }
    cout<<s<<"\n";
    
*/