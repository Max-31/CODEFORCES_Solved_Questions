#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    string s;
    cin>>s;
    lint n= s.length(); //, n= l- l/2;
    //cout<<n<<endl;
    vector <int> v;
    for(int i=0; i<n; i++){
        if(s[i]!='+'){
            v.push_back(s[i]-'0');
            //cout<<s[i]<<" ";
        }
    }//cout<<endl;

    sort(v.begin(), v.end());

    for(int i=0; i<v.size(); i++){
        cout<<v[i];
        if(i!= v.size()-1)
            cout<<"+";
    }

    return 0;
}