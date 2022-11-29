using namespace std;
#ifndef HELLO_WORLD_VECTOR2_H
#define HELLO_WORLD_VECTOR2_H


class Vector2{
public:
    double x, y;

    Vector2();
    Vector2(double x, double y);

    double len();

    void setX(int x);
    double getX();
    void setY(int y);
    double getY();
    double getR();
    double getphi();
    double getPhi();
    Vector2 operator+(const Vector2 & vector) const;
    void operator+=(const Vector2& vector);
    Vector2 operator*(const int ch) const;
    void operator*=(const int ch);
    Vector2 operator/(const int ch) const;
    void operator/=(const int ch);
    void operator-=(const Vector2& vector);
    Vector2 operator-(const Vector2& vector) const;
    bool operator==(const Vector2& vector) const;
    void norma();
    void povorot(double phi);
    void change_len(const int l);
    pair <double, double> polar();
    double skalar(const Vector2& vector) const;
    double ugol(const Vector2& vector) const;
    double cosoe(const Vector2& vector) const;
    double radtodeg();
private:
    double  R, phi;
};

#endif //HELLO_WORLD_VECTOR2_H
