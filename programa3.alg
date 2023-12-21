algoritmo programa3;
ent a, b, c: entero; sal max, min, med: entero; {Prec: a = A AND b = B AND c = C}
var
B_a: booleano;
fvar;
si a >= b y a >= c ->
    si b >= c ->
        med := b; 
        min := c
    [] b <c ->
        med := c; 
        min := b
    fsi;
    max := a
[] b >= a y b >= c ->
    max := b;
    si a >= c ->
        med := a; 
        min := c
    [] a <c ->
        med := c; 
        min := a;
        B_a := c > b
    fsi
[] B_a y c >= a ->
    max := c;
    si b >= a ->
        med := b; 
        min := a
    [] b <a ->
        med := a; 
        min := b; 
        B_a := c > b
    fsi
fsi
{Post: a=A AND b = B AND c= C ...}
falgoritmo.