#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    lint n, k, x;
    vector<lint> v;
    cin>>n>>k;
    for(int i=0; i<n; i++){
        cin>>x;
        v.push_back(x);
    }

    lint t= v[k-1], c=0;

    for(int i=0; i<n; i++){
        if(v[i]>=t && v[i]!=0){
            c++;
        }
    }

    cout<<c;

    return 0;
}