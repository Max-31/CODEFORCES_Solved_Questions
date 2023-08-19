#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    lint n, x, l, h, a=0;
    cin>>n;

    for(lint i=0; i<n; i++){
        cin>>x;
        if(i==0){
            l=x, h=x;
            continue;
        }

        if(x>h){
            a++;
            h=x;
        }
        else if(x<l){
            a++;
            l=x;
        }
    }

    cout<<a<<"\n";

    return 0;
}