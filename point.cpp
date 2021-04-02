#include "stdafx.h"
#include "point.h"
using namespace std;

point point::operator + (point p)
{
return point (A+p.A, B+p.B, C+p.C) ;
}
point point::operator - (const point p) 
{
return point (A-p.A, B-p.B, C-p.C) ; 
}
point point::operator * (point p)
{
return point (A*p.A, B*p.B, C*p.C) ;
}
point point::operator / (point p)
{
return point (A/p.A, B/p.B, C/p.C) ;
}
point point::operator += (point p)
{
return point (A+=p.A, B+=p.B, C+=p.C) ;
}
point point::operator -= (point p)
{
return point (A-=p.A, B-=p.B, C-=p.C) ;
}
point point::operator *= (point p)
{
return point (A*=p.A, B*=p.B, C*=p.C) ;
}
point point::operator /= (point p)
{
return point (A/=p.A, B/=p.B, C/=p.C) ;
}
bool point::operator == (point p)
{
return (A==p.A && B==p.B && C==p.C) ? true:false ;
}
bool point::operator <= (point p)
{
return (B<=p.B && B<=p.B && C<=p.C) ? true:false ;
}
bool point::operator >= (point p)
{
return (A>=p.A && B>=p.B && C>=p.C) ? true:false ;
}
bool point::operator != (point p)
{
return (A!=p.A && B!=p.B && C!=p.C) ? true:false ;
}
point point::operator = (point p)
{
A=p.A; B=p.B; C=p.C;
return point (A, B, C) ;
}
double point::operator % (const point& p) 
{
return sqrt ((A-p.A)*(A-p.A) + (B-p.B)*(B-p.B) + (C-p.C)*(C-p.C)) ;
}
point point::operator && (point p)
{
return point(A&&p.A,B&&p.B,C&&p.C);
}
bool point::operator || (point p)
{
return (A||p.A&&B||p.B&&C||p.C) ? true:false ;
}
//point point::operator ^ (point p)
//{
// return point(A^p.A,B^p.B,C^p.C);
//}
//bool point::operator | (point p)
//{
// return (A|p.A && B|p.B && C|p.C) ? true:false ;
//}
//ostream &operator<<( ostream &output,point p ) { 
// output << "A: " << p.geta() << " B : " << p.getb()<< " C : " << 
p.getc();
// return output; 
// }
//friend istream &operator>>( istream &input, point p ) { 
// input >> p.X >> p.Y>>p.Z;
// return input; 
// }
//
//inline point point::operator >> (int i)
//{
// //X>>i;Y>>i;Z>>i;
// return point(X,Y,Z);
//}
//point point::operator << (int i)
//{
// return point(A,B,C);
//}
//
