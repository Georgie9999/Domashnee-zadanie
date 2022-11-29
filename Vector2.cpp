#include <bits/stdc++.h>
#include "Vector2.h"
#define ll long long
# define pi 3.141592653589793238462643
using namespace std;


Vector2::Vector2() : x(0.0), y(0.0), R(0.0), phi(0.0) {};
Vector2::Vector2(double x, double y) : x(x), y(y), R(sqrt(x*x+y*y)), phi(atan2(y, x)) {};

double Vector2::len(){
    return sqrt(x * x + y * y);
}

double Vector2::getPhi(){
    return atan2(y, x);
}

Vector2 Vector2::operator+(const Vector2& vector) const{
    return Vector2(x + vector.x, y + vector.y);
}
void Vector2::operator+=(const Vector2& vector) {
    x +=vector.x;
    y += vector.y;
}

Vector2 Vector2::operator-(const Vector2& vector) const{
    return Vector2(x - vector.x, y - vector.y);
}
void Vector2::operator-=(const Vector2& vector) {
    x -=vector.x;
    y -= vector.y;
}
Vector2 Vector2::operator*(const int ch) const{
    return Vector2(ch*x, ch*y);
}
void Vector2::operator*=(const int ch) {
    x *=ch;
    y *=ch;
}

Vector2 Vector2::operator/(const int ch) const{
    if(ch!=0)
    return Vector2(x/ch, y/ch);
    return Vector2(x, y);
}
void Vector2::operator/=(const int ch) {
    if(ch!=0) {
        x /= ch;
        y /= ch;
    }
}

bool Vector2::operator==(const Vector2& vector) const{
    return x==vector.x and y==vector.y;
}
pair<double, double> Vector2::polar(){
    return {sqrt(x*x+y*y), atan2(y, x)/pi*180};
}

void Vector2::norma(){
    const double ch = sqrt(x*x+y*y);
    x =x/ch;
    y =y/ch;
}

void Vector2::change_len(const int l){
    double otn = l/sqrt(x*x+y*y);
    x =x*otn;
    y =y*otn;
}

double Vector2::ugol(const Vector2& vector) const{
    double t1 = sqrt(x*x+y*y);
    double t2 = sqrt(vector.x*vector.x+vector.y*vector.y);

    return (x*vector.x+ y*vector.y)/(t1*t2);
}

double Vector2::cosoe(const Vector2& vector) const{
    double t1 = sqrt(x*x+y*y);
    double t2 = sqrt(vector.x*vector.x+vector.y*vector.y);
    return x*vector.y- y*vector.x;
}

double Vector2::skalar(const Vector2& vector) const{
    return x*vector.x+ y*vector.y;
}

void Vector2::povorot(double phi){
    phi = phi/180*pi;
    double t1 = x*cos(phi) - y*sin(phi);
    double t2 = x*sin(phi) + y*cos(phi);
    x = t1;
    y =t2;
}


double Vector2::radtodeg() {
    return getPhi() * 180 / pi;
}
void Vector2::setX(int x){
    x = x;
}
double Vector2::getX(){
    return x;
}
void Vector2::setY(int y){
    y = y;
}
double Vector2::getY(){
    return y;
}
double Vector2::getR(){
    return R;
}
double Vector2::getphi(){
    return phi;
}