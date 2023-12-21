algoritmo programa10;
ent n, m: entero;
sal suma, comb: entero;
{Prec: n= N AND m = M AND M >= N >0}
var
i, a, b, c: entero;
fvar;
i:= a;
suma:= a;
comb:= m;
mientras i <n hacer
    suma := suma + comb;
    comb := comb * (m - i - b) div (i + c);
    si suma<comb ->
        para a := suma hasta comb hacer
            a := a+b
        fpara;
        suma := a
    [] suma>comb ->
        para a := comb hasta suma hacer
            a := a+b
        fpara;
        comb := suma
    fsi;
    i := i + b
fmientras
{Post: n =N AND suma = SUMATORIO(i=1..N)(M sobre i)}
falgoritmo.