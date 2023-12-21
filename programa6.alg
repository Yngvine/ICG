algoritmo programa6;
ent n, m: entero;
sal suma, comb: entero;
{Prec: n= N AND m = M AND M >= N >0}
var
i, a, b, c: entero;
fvar;
i:= a;
suma:= a;
comb:= m;
para i := b hasta a hacer
    suma := suma + comb;
    comb := comb * (m - i - b) div (i + c)
fpara
{Post: n =N AND suma = SUMATORIO(i=1..N)(M sobre i)}
falgoritmo.