

// myPoint.cpp : main project file.
#include "stdafx.h"
#include "point.h"
#include<iostream>
using namespace std;
using namespace System;
int main(array<System::String ^> ^args)
{
point n (3.0, 4.0, 5.0), m (1.0, 2.0, 3.0), p3, p4, 
p5,p6,p7,p8,p9,p2,p10,p11,p12,p13,p14,p15,p16,p17,p18; 
point r,q;
p3=n + m; 
p4=n - m;
p5=n * m;
p6=n /m;
p7=n+=m;
p8=n -=m;
p9=n *=m;
p10=n /=m;
p11=n ==m;
p12=n<=m;
p13=n >=m;
p14=n !=m;
p15=n =m;
p16=n%m;
p17=n&&m;
p18=n||m;
cout<<"The first operation is addition:"<<endl;
cout <<" p1 ( " << p3.geta ( )<< ","<<p3.getb ( )<<","<< p3.getc ( )<< 
")"<< endl;
cout<<"The second operation is subtraction:"<<endl;
cout <<" p2 ( " << p4.geta ( )<< ","<<p4.getb ( )<<","<< p4.getc ( )<< 
")"<< endl;
cout<<"The third operation is * :"<<endl;
cout <<" p3 ( " << p5.geta ( )<< ","<<p5.getb ( )<<","<< p5.getc ( )<< 
")"<< endl;
cout<<"The fourth operation is / :"<<endl;
cout <<" p4 ( " << p6.geta ( )<< ","<<p6.getb ( )<<","<< p6.getc ( )<< 
")"<< endl;
cout<<"The fife operation is +=:"<<endl;
cout <<" p5 ( " << p7.geta ( )<< ","<<p7.getb ( )<<","<< p7.getc ( )<< 
")"<< endl;
cout<<"The sixth operation is -=:"<<endl;
cout <<" p6 ( " << p8.geta ( )<< ","<<p8.getb ( )<<","<< p8.getc ( )<< 
")"<< endl;
cout<<"The seventh operation is *= :"<<endl;
cout <<" p7 ( " << p9.geta ( )<< ","<<p9.getb ( )<<","<< p9.getc ( )<< 
")"<< endl;
cout<<"The egith operation is /= :"<<endl;
cout <<" p8 ( " << p10.geta ( )<< ","<<p10.getb ( )<<","<< p10.getc ( 
)<< ")"<< endl;
cout<<"The ninth operation is == :"<<endl;
cout <<" p9 ( " << p11.geta ( )<< ","<<p11.getb ( )<<","<< p11.getc ( 
)<< ")"<< endl;
cout<<"The tenth operation is <=:"<<endl;
cout <<" p10 ( " << p12.geta ( )<< ","<<p12.getb ( )<<","<< p12.getc ( 
)<< ")"<< endl;
cout<<"The eleventh operation is >=:"<<endl;
cout <<" p11 ( " << p13.geta ( )<< ","<<p13.getb ( )<<","<< p13.getc ( 
)<< ")"<< endl;
cout<<"The twelvth operation is != :"<<endl;
cout <<" p12 ( " << p14.geta ( )<< ","<<p14.getb ( )<<","<< p14.getc ( 
)<< ")"<< endl;
cout<<"The thirteenth operation is = :"<<endl;
cout <<" p13( " << p15.geta ( )<< ","<<p15.getb ( )<<","<< p15.getc ( 
)<< ")"<< endl;
cout<<"The fourteen operation is %:"<<endl;
cout <<" p14 ( " << p16.geta ( )<< ","<<p16.getb ( )<<","<< p16.getc ( 
)<< ")"<< endl;
cout<<"The fifteen operation is &&:"<<endl;
cout <<" p15 ( " << p17.geta ( )<< ","<<p17.getb ( )<<","<< p17.getc ( 
)<< ")"<< endl;
cout<<"The sixteen operation is || :"<<endl;
cout <<" p16 ( " << p18.geta ( )<< ","<<p18.getb ( )<<","<< p18.getc ( 
)<< ")"<< endl;
system("pause");
 return 0;
}
