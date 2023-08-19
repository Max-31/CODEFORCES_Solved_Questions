#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    lint n;
    cin>>n;
    lint x=0, y=0, z=0, a, b, c;
    for(int i=0; i<n; i++){
        cin>>a>>b>>c;
        x+=a;
        y+=b;
        z+=c;
    }

    if(x==0 && y==0 && z==0){
        cout<<"YES\n";
    }
    else{
        cout<<"NO\n";
    }
    
    return 0;
}