#include <bits/stdc++.h>
#define ll long long 

using namespace std;

int main(){
    vector<string>T;
    string x;
    while(cin>>x){
        T.push_back(x);
    }
    // ctrl z - прекращение ввода
    
    sort(T.begin(), T.end());
    for(auto x: T){
        cout<<x<<" ";
    }






    return 0;
}