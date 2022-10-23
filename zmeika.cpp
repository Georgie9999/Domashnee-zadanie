#include <bits/stdc++.h>
#define ll long long 

using namespace std;

void print_vector(vector<vector<ll>> &T){
    ll n = T.size();
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            cout.width(3);
            cout<<T[i][j]<<" ";
        }
    cout<<endl;    
    }
}


vector<vector<ll>> levo(vector<vector<ll>> &T, ll k){
    ll n = T.size() - k;
    if (k!=0) for(int i = k; i<n; i++) T[k][i] = T[k][i-1] + 1;
    else{
        for(int i = k; i<n; i++)
        T[k][i] = i + 1;
    }    
    return T;

}

vector<vector<ll>> niz(vector<vector<ll>> &T, ll k){
    ll n = T.size()-k+1;
    for(int j = k; j<n; j++)
    {
       T[j][n-1] = T[j-1][n-1]+1;

    }
    return T;
}

vector<vector<ll>> pravo(vector<vector<ll>> &T, ll k){
    ll n = T.size();
    for(int i = k; i<n-k+1; i++) T[n - k][n - i - 1] = T[n-k][n-i]+1;
    return T;

}

vector<vector<ll>> verch(vector<vector<ll>> &T, ll k){
    ll n = T.size();
    for(int j = k; j<n-k; j++) T[n-j-1][k-1] = T[n-j][k-1]+1;
    return T;
}


int main(){
    ll N ;
    cin>>N;

    vector<vector<ll>>T;
    for (int i = 0; i<N; i++) T.push_back(vector<ll>(N, 0));
    

    ll k = 0;
    while(true){
        if (T[k][k]==0){
            T = levo(T, k);
            k+=1;}

    if (T[k][N- k]==0) T = niz(T, k);

    if (T[N-k][N-k-1]==0) T = pravo(T, k); 

    if (T[N-k-1][k-1]==0) T = verch(T, k);

    else break;
    }
    print_vector(T);



    return 0;
}