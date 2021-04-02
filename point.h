#include "stdafx.h"
#include<iostream>
using namespace std;
class point{
private:
float A;
float B;
float C;
public:
//point():X(0.0f), Y(0.0f), Z(0.0f){}
point(float a=0.0f, float b=0.0f,float c=0.0f){
A=a; B=b; C=c;
}
void seta(float a){ A=a; }
void setb(float b){ B=b; }
void setZc(float c){ C=c; }
float geta(){return A; }
float getb(){return B; }
float getc(){return C; }
point operator+(const point p);
point operator-(const point p); 
point operator*(point p);
point operator/(point p);
point operator+=(point p);
point operator-=(point p); 
point operator*=(point p);
point operator/=(point p);
bool operator==(point p);
bool operator<=(point p);
bool operator>=(point p);
bool operator!=(point p);
point operator=(point p);
double operator%(const point& p);
bool operator||(point p);
point operator&&(point p);
};
