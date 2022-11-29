#include <bits/stdc++.h>
#define ll long long 
using namespace std;

pair<int*, int> fill_array(){
    int x, t = 10;
    int len = 0;
    bool b1=true, b2 = false; 
    int *p_arr1 = new int[t], *p_arr2 = new int[t];
    while(cin>>x){
        if (t>len){
            if (b1) p_arr1[len] = x;
            else if(b2) p_arr2[len] = x;
        }
        else{
            t+=10;
            if(b1){
                p_arr2 = new int[t];
                for(int i = 0; i<len; i++) p_arr2[i] = p_arr1[i];
                p_arr2[len] = x;
                delete [] p_arr1;
            }
            else{
                p_arr1 = new int[t];
                for(int i = 0; i<len; i++) p_arr1[i] = p_arr2[i];
                p_arr1[len] = x;
                delete [] p_arr2;
            }
            b1 = !b1;
            b2 = !b2;
        }
        len++;
    }
    if (b1) return {p_arr1, len}; 
    return {p_arr2, len};    
}
pair<int*, int> five(int array[], int N){
    int k = 0;
    for(int i = 0; i<N; i++){
        if (array[i]>5) k++;
    }
    int *T = new int[k];
    int j = 0;
    for(int i = 0; i<N ;i++){
        if (array[i]>5){
            T[j] = array[i];
        j+=1;
        }
    }
    delete [] array;
    return {T, k};
}

int main(){
    auto P1 = fill_array();
    for(int i = 0; i<P1.second; i++)cout<<P1.first[i]<<" ";
    cout<<endl;
    auto P2 = five(P1.first, P1.second);
    for(int i = 0; i<P2.second; i++) cout<<P2.first[i]<<" ";

    return 0;

}