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
    lint n= s.length(), cu=0, cl=0, f=0;

    for(int i=0; i<n; i++){
        if('A'<=s[i] && s[i]<='Z'){
            cu++;
        }
        else{
            cl++;
        }
    }
    if(cu==n || cl==n){
        
    }
    else if(cu<=cl){
        for(int i=0; i<n; i++){
            if('A'<=s[i] && s[i]<='Z'){
                s[i]+=32;
            }
        }
    }
    else if(cu>cl){
        for(int i=0; i<n; i++){
            if('a'<=s[i] && s[i]<='z'){
                s[i]-=32;
            }
        }
    }

    cout<<s<<"\n";
    return 0;
}

/*
else if(cu<=cl){
        vu.clear();
        for(int i=0; i<vl.size(); i++){
            s[vl[i]]+=32;
        }
    }
    else{
        vl.clear();
        for(int i=0; i<vu.size(); i++){
            s[vu[i]]-=32;
        }
    }
*/