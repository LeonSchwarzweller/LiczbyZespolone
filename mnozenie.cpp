#include <iostream>;
#include "liczby.h"

using namespace std;

complex& multiplication(Complex& x,Complex& y){
complex z;
z.a = x.a*y.a - x.b*y.b;
z.b = x.b*y.a + x.a*y.a;
return z;
};
