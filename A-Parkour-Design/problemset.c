#include <stdio.h>

int main() {
   
    long long x, y;

   
    if (scanf("%lld %lld", &x, &y) != 2) return 0;

    
    int regla_suma = ((x + y) % 3 == 0);

  
    int regla_techo = (2 * y <= x);

    
    int regla_suelo = (4 * y >= -x);

   
    int regla_avance = (x >= 0);

    
    if (regla_suma && regla_techo && regla_suelo && regla_avance) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}
