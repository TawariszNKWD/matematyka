#include<math.h>

long double heron(long double a, long double b, long double c)
{
    long double p,r,p1,p2,p3,wynik;
    p=a+b+c;
    p=p/2;
    p1=p-a;
    p2=p-b;
    p3=p-c;
    wynik=p*p1*p2*p3;
    return sqrt(wynik);
}
long double wpisany(long double a, long double b, long double c, long double r)
{
    long double p;
    p=a+b+c;
    p=p/2;
    long double wynik;
    wynik=p*r;
    return wynik;
}

long double opisany(long double a, long double b, long double c, long double R)
{
    long double p=a*b*c;
    R=4*R;
    p=p/R;
    return p;
}
