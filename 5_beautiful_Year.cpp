#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    lint y;
    cin>>y;
    lint a,b,c,d;
    map <lint, lint> m;
    
    for(lint i=y+1; i<=9012; i++){
        a=i/1000, b=(i/100)%10, c=(i/10)%10, d=i%10;
        m[a]++;
        m[b]++;
        m[c]++;
        m[d]++;
        if(m[a]==1 && m[b]==1 && m[c]==1 && m[d]==1 ){
            cout<<a<<b<<c<<d<<"\n";
            break;
        }
        else{
            m[a]=0;
            m[b]=0;
            m[c]=0;
            m[d]=0;
        }
    }
    return 0;
}