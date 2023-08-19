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
        // lint n, x, y, maxi= INT_MIN;
        // cin>>n;
        char a[8][8], c;
        string s;

        for(int i=0; i<8; i++){
            for(int j=0; j<8; j++){
                cin>>c;
                if(c!= '.'){
                    s[i]=c;
                    cout<<s[i];
                }
            }
        }

        // for(int i=0; i<s.length(); i++){
        //     cout<<s[i];
        // }
        cout<<"\n";

        // for(int i=0; i<; i++){
        //     if(a[i] < 10){
        //         if(maxi<b[i]){
        //             maxi=b[i];
        //             x=i;
        //         }
        //     }
        //     // m[b[i]]=a[i];
        // }

        // for(auto it:m){
        //     if(it.second < 10){
        //         if(maxi<it.first){

        //         }
        //     }
        // }

        // for(int i=0; i<a.size(); i++){
        //     cout<<a[i]<<" "<<m[a[i]]<<endl;
        //     // cout<<m[a[i]];
        // }


        // sort(b.rbegin(), b.rend());

        // cout<<m[a[0]]<<"\n";
        //cout<<x+1<<"\n";
        
    }
    return 0;
}