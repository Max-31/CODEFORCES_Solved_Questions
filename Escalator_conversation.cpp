#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    tc{
        lint n, m, k, H, diff, sum=0;
        cin>>n>>m>>k>>H;
        vector <lint> h, ans;
        map<lint, int> mp;// mh;
        lint x;
        for(int i=0; i<n; i++){
            cin>>x;
            h.push_back(x);
            // mh[h[i]]++;
        }

        for(int i=1; i<m; i++){
            mp[k*i]++;
        }

        for(int i=0; i<n; i++){
            diff= abs(h[i]-H);
            if(mp.find(diff)!=mp.end()){
                // ans.push_back(h[i]);
                sum++;
            }
        }

        // for(auto it:mh){
        //     sum+=it.second;
        // }

        cout<<sum<<"\n";
    }
    return 0;
}