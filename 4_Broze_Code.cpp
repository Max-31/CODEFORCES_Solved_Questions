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
    vector <lint> v; 

    for(int i=0; i<n; i++){
        if(s[i]=='-'){
            if(s[i+1]=='-'){
                v.push_back(2);
                i++;
                continue;
            }
            else if(s[i+1]=='.'){
                v.push_back(1);
                i++;
                continue;
            }
        }
        if(s[i]=='.'){
            v.push_back(0);
        }
        
    }

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
    }
    cout<<"\n";

    return 0;
}