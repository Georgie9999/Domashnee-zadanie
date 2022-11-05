#include <bits/stdc++.h>
#define ll long long 

using namespace std;


ll indeX(vector<ll>&T, ll t){

    for(int i = 0; i<T.size(); i++){
        if (T[i]==t) return i;
    }
    return -1;
}

int main(){
    vector<vector<ll>>T;
    T.resize(2);
    
    ll x, indx;

    while (cin>>x){
        indx = indeX(T[0] ,x);
        if( indx == -1){
            T[0].push_back(x);
            T[1].push_back(1);
        }
        else{
            T[1][indx]++;
        }
    }
    for(auto x:T[0]) cout<<x<<" ";
    cout<<endl;
    for(auto x:T[1]) cout<<x<<" ";




    return 0;
}