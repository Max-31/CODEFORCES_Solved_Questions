#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    // vector <lint> a, b, ans;
    lint x, y;
    string a1, b1;
    cin>>a1>>b1;

    for(int i=0; i<a1.length(); i++){
        x= a1[i]-'0'; //convert Character to Integer
        y= b1[i]-'0';

        // a.push_back(x);
        // b.push_back(y);

        if(x!=y){
            // ans.push_back(1);
            cout<<1;
        }
        else{
            // ans.push_back(0);
            cout<<0;
        }
    }

    // for(int i=0; i<ans.size(); i++){
    //     cout<<ans[i];
    // }
    cout<<"\n";

    return 0;
}