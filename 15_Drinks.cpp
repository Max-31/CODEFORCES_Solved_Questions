#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    lint n;
    cin>>n;
    //vector <lint> p;
    lint x;
    long double sum=0;
    for(int i=0; i<n; i++){
        cin>>x;
        sum+= x;
    }

    cout<<sum/n<<"\n";

    return 0;
}