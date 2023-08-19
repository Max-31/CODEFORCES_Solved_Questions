#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    lint n, l1=0, l0=0, r1=0, r0=0, sum=0;
    cin>>n;
    vector<int> l, r;
    int x, y;
    for(int i=0; i<n; i++){
        cin>>x;
        l.push_back(x);
        if(x==1){
            l1++;
        }
        else{
            l0++;
        }

        cin>>y;
        r.push_back(y);
        if(y==1){
            r1++;
        }
        else{
            r0++;
        }

    }

    if(l1 >= l0){
        sum= l0;
    }
    else{
        sum= l1;
    }

    if(r1 >= r0){
        sum+=r0;
    }
    else{
        sum+=r1;
    }

    cout<<sum<<"\n";

    return 0;
}