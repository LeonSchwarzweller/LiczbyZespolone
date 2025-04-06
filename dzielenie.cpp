#include <iostream>
#include "liczby.h"
using namespace std;

complex division(complex x,complex y){
complex z;
z.a = (x.a*y.a + x.b*y.b)+(y.a*y.a + y.b*y.b);
z.b = (x.b*y.a - x.a*y.b)+(y.a*y.a + y.b*y.b);
return z;
};
