#include <iostream>
#include "liczby.h"
using namespace std;

complex& subtraction(Complex& x, Complex& y){
complex z;
z.a = x.a - y.a;
z.b = x.b - y.b;
return z;
};
