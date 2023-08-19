#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    int a, b, x;
    for(int i=0; i<5; i++){
        for(int j=0; j<5; j++){
            cin>>x;
            if(x==1){
                a=i;
                b=j;
            }
        }
    }
    x= abs(2-a) + abs(2-b);
    cout<<x<<"\n";
    
    return 0;
}