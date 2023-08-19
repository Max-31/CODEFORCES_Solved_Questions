#include<bits/stdc++.h>
using namespace std;
void fastIO(){ios_base::sync_with_stdio(false);}
#define lint  long long int
#define tc int t; cin>>t; while(t--)
#define vecint vector<int> 

//ALWAYS USE long long int OR lint

int main(){
fastIO();
    lint k, l, m, n, d, prod;
    cin>>k>>l>>m>>n>>d;
    lint numdrag= d;

    if(k==1 || l==1 || m==1 || n==1){
        cout<<d<<"\n";
    }
    else{
        vector <lint> v;
        map <lint, lint> mp;

        //k
        for(lint i=0; i<=d; i++){
            prod= k*i;
            v.push_back(prod);
            mp[prod]++;
        }

        //l
        for(int i=0; i<=d; i++){
            if(mp.find(l*i)==mp.end()){
                prod=l*i;
                v.push_back(prod);
                mp[prod]++;
            }
        }
        
        //m
        for(int i=0; i<=d; i++){
            if(mp.find(m*i)==mp.end()){
                prod=m*i;
                v.push_back(prod);
                mp[prod]++;
            }
        }

        //n
        for(int i=0; i<=d; i++){
            if(mp.find(n*i)==mp.end()){
                prod=n*i;
                v.push_back(prod);
                mp[prod]++;
            }
        }

        v.erase(v.begin());//erasing the zero

        //finding the unharmed dragons
        for(int i=1; i<=d; i++){
            if(mp.find(i)==mp.end()){
                numdrag--;
            }
        }

        cout<<numdrag<<"\n";
    }

    return 0;
}