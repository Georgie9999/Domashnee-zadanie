#include <bits/stdc++.h>
#include <vector>
#define ll long long 

using namespace std;

void print_vector(vector<vector<double>> &T){
    int N = T.size();
    for(int i = 0; i<N; i++){
        for(int j = 0; j<N;j++)
            cout<<T[i][j]<<" ";
        cout<<endl;
}

}

double det(vector<vector<double>> &T){
    double Res = 1;
    ll N = T.size();
    for(int i = 0; i<N; i++){
        for(int j = i+1; j<N; j++){
            double p = T[j][i]/T[i][i];
            for(int k = 0; k<N; k++){
                T[j][k] = T[j][k] - p*T[i][k];
                
            }

        }
    }
    for(int i = 0; i<N; i++){
        Res*=T[i][i];
    }
    return Res;

}


int main(){
    ll N;
    cin>>N;
    vector<vector<double>>T;

    for (int i = 0; i<N; i++)
    { 
        T.push_back(vector<double>(N, 0));
    }

    for(int i = 0; i<N; i++){
        for(int j = 0; j<N; j++){
            T[i][j] = rand()%10;
        }
    }


    print_vector(T);
    cout<<endl;
    double res = det(T);
    cout<<endl;
    cout<<"Определитель матрицы = "<<res;

    return 0;
}