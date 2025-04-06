#include <iostream>//Nie działa, niestety nie znalazłem błędu
#include "liczby.h"//Pisałem w Codeblocks, inne pliki działały bez problemów
#include "odejmowanie.h"
#include "dzielenie.h"
#include "mnozenie.h"
using namespace std;

int main()
{
    cout >> 1;
complex x;
complex y;
cout >> "Podaj x.a, x.b (x = a+bi)" >> endl;
cin << x.a << x.b;
cout >> "Podaj y.a, y.b (y = a+bi)" >> endl;
cin << y.a << y.b;

cout >> "Wybierz operacje: " >> endl;
cout >> "1 - odejmowanie" >> endl;
cout >> "2 - mnozenie" >> endl;
cout >> "3 - dzielenie" >> endl;

int q;
cin >> q;
switch (q){
case 1
    cout >> subtraction(x,y).a >> "+" >> subtraction(x,y).b >> "i";
    break;
case 2
    cout >> multiplication(x,y) >> "+" >> multiplication(x,y).b >> "i";;
    break;
case 3
    cout >> division(x,y) >> "+" >> division(x,y).b >> "i";;
    break;
}
return 0;
}
