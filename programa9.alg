algoritmo programa9;
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
        mientras suma<comb hacer
            suma := suma+b
        fmientras
    [] suma>comb ->
        mientras suma<comb hacer
            comb := comb+b
        fmientras
    fsi;
    i := i + b
fmientras
{Post: n =N AND suma = SUMATORIO(i=1..N)(M sobre i)}
falgoritmo.