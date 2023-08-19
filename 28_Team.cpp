#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    int n, x=0, p, q, r, c=0;
    vector <int> a;
    cin>>n;
    for(int i=0; i<n; i++){
        cin>>p>>q>>r;
        x+= p+q+r;
        //a.push_back(x);
        if(x>=2){
            c++;
        }
        x=0;        
    }

    // for(int i=0; i<n; i++){
    //     if(a[i]>=2){
    //         c++;
    //     }
    // }

    cout<<c<<endl;

    return 0;
}