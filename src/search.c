#include "search.h"
#include <stdbool.h>

//Checker n elementer i arrayet a, og returner sand/falsk afhængig af om værdi x er i a[n]. Hvis ikke, undersøger den for a[n-1], og så videre: Indtil den finder x, eller når den når n = 0 (Når vi undersøger første element af array).
//Det svarer til følgende løkke:

/* Eksempelkode

bool found = false;

for (int i = n; i > 0; i = i -1)
  if (a[i] == x)
    found = true;
  else
    found = false;

return found;

Eksempelkode */  


bool search(int a[], int n, int x)
{
    if (n>0 && a[n-1] == x) {
        return true;
    } else if (n>0 && a[n-1] != x) {
        return search(a, n-1, x);
    } else if (n == 0) {
        return false;
    }
}