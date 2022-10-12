#include "sum.h"

//Når den returnerer, så vil den køre funktionen igen for n-1, og derefter for n-2, og så videre.
//Hvis n er 0, så returnerer den 0, og er ikke recursive længere. Det svarer til løkken nedenfor:

/* Eksempelkode

for (int i = n; i > 0; i = i -1)
  sum = sum + i;

return sum;

Eksempelkode */ 

int sum(int a[], int n)
{
    if (n>0) {
        return a[n-1] + sum(a, n-1);
    } else if (n == 0) {
        return 0;
    }
}