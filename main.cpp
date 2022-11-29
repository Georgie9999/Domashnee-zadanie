#include <bits/stdc++.h>
#include "Vector2.h"
#define ll long long
# define pi 3.141592653589793238462643
using namespace std;

int main (){
    Vector2 a(1, 1);
    Vector2 b(2, 3);
    Vector2 c = a+b;
    cout<<a.len()<<endl;
    cout<<a.getPhi()<<endl;
    cout<<c.x<<" "<<c.y<<endl;
    cout<<c.radtodeg()<<endl;
    a+=b;
    cout<<a.x<<" "<<a.y<<endl;
    a*=9;
    cout<<a.x<<" "<<a.y<<endl;
    a.norma();
    cout<<a.len()<<endl;
    a.change_len(8);
    cout<<a.len()<<endl;
    Vector2 v1(1,1);
    Vector2 v2(1,1);
    cout<<v1.ugol(v2)<<endl;
    cout<<(v1==v2)<<endl;

    v1.povorot(60);
    cout<<v1.x<<" "<<v1.y<<endl;
    auto Polar = v2.polar();
    cout<<Polar.first<<" "<<Polar.second<<endl;
    cout<<v2.getR();



    return 0;
}

