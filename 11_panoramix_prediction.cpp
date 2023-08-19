#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint
bool ifprime(int m){
    for(int i=2; i<=sqrt(m); i++){
        if(m%i==0){
            return false;
        }
    }
    return true;
}

bool ifnextprime(int n, int m){
    for(int i=n+1; i<=m; i++){
        if(ifprime(i)==true){
            if(i!=m){
                return false;
            }
        }
    }
    return true;
}

int main(){
fastIO();
    int n, m;
    cin>>n>>m;

    if(ifprime(m)==false){
        cout<<"NO\n";
    }
    else{
        if(ifnextprime(n, m)==true){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }

    return 0;
}