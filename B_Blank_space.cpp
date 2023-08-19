#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define endl "\n"


int main(){
fastIO();
    tc{
        int n, count0=0, x;
        cin>>n;
        vector <int> a, v;
        // vector <int> v;
        for(int j=0; j<n; j++){
            cin>>x;
            a.push_back(x);
        }

        for(int i=0; i<n; i++){
            if(a[i]==0){
                count0++;
                v.push_back(count0);
            }
            if(a[i]==1){
                v.push_back(count0);
                count0=0;
            }
                  
        }

        // sort(a, a+n);
        sort(v.rbegin(), v.rend()); //descending order sort
        cout<<v[0]<<endl;
    }
    return 0;
}