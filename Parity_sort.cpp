#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

int main(){
fastIO();
    tc{
        lint n, e=0, o=0, f=0; 
        cin>>n; 
        vector <lint> a, b;
        lint x;
        for(int i=0; i<n; i++){
            cin>>x;
            a.push_back(x);
            
            b.push_back(x);
        }

        sort(b.begin(), b.end());

        for(int i=0; i<n; i++){
            if(a[i]%2 != b[i]%2){
                //cout<<"NO\n";
                f=0;
                break;
            }
            else{
                f=1;
            }
        }

        if(f==0){
            cout<<"NO\n";
        }
        else{
            cout<<"YES\n";
        }

        // lint large= *max_element(a.begin(), a.end());
        // // cout<<e<<" ";
        // lint small= *min_element(a.begin(), a.end());
        // // cout<<o<<" ";

        // if(n==1){
        //     cout<<"YES\n";
        // }
        // else{
        //     if((e!=1 || o!=1)||(e==1 && o==1)){
        //         if(((a[0]%2==0 && small%2==0)||(a[0]%2!=0 && small%2!=0))&&((a[n-1]%2==0 && large%2==0)||(a[n-1]%2!=0 && large%2!=0))){
        //             //if 1st ele and Least ele = SAME Type
        //             //and
        //             //if last ele and Large ele= SAME Type 
        //             cout<<"YES\n";
        //         }
        //         else{
        //             cout<<"NO\n";
        //         }
        //     }
        //     else if(e==1){//only one even present
        //         if(e==large && a[n-1]==e){
        //             cout<<"YES\n";
        //         }
        //         else if(e==small && a[0]==e){
        //             cout<<"YES\n";
        //         }
        //         else{
        //             cout<<"NO1\n";
        //         }
        //     }
        //     else if(o==1){//only one odd present
        //         if(o==large && a[n-1]==o){
        //             cout<<"YES\n";
        //         }
        //         else if(o==small && a[0]==o){
        //             cout<<"YES\n";
        //         }
        //         else{
        //             cout<<"NO\n";
        //         }
        //     }
        //     else{
        //         if(((a[0]%2==0 && small%2==0)||(a[0]%2!=0 && small%2!=0))&&((a[n-1]%2==0 && large%2==0)||(a[n-1]%2!=0 && large%2!=0))){
        //             //if 1st ele and Least ele = SAME Type
        //             //and
        //             //if last ele and Large ele= SAME Type 
        //             cout<<"YES\n";
        //         }
        //         else{
        //             cout<<"NO\n";
        //         }
        //     }
        // }

    }
    return 0;
}