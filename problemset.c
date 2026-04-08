#include <stdio.h>

int main() {
    // Definimos las variables para las coordenadas
    // Usamos long long para evitar errores con números gigantescos
    long long x, y;

    // Leemos la entrada: x (horizontal) y y (vertical)
    // scanf devuelve el número de elementos leídos; validamos que sea 2
    if (scanf("%lld %lld", &x, &y) != 2) return 0;

    // APLICACIÓN DE LAS TRES REGLAS DE ORO
    
    // Regla 1 (Aritmética): La suma x + y debe ser múltiplo de 3
    int regla_suma = ((x + y) % 3 == 0);

    // Regla 2 (Geometría): No pasarse del "techo" (pendiente 1/2)
    // En lugar de y <= x/2, usamos 2*y <= x para evitar decimales
    int regla_techo = (2 * y <= x);

    // Regla 3 (Geometría): No pasarse del "suelo" (pendiente -1/4)
    // En lugar de y >= -x/4, usamos 4*y >= -x
    int regla_suelo = (4 * y >= -x);

    // Regla Extra: Steve solo avanza hacia adelante (derecha)
    int regla_avance = (x >= 0);

    // Si cumple todas las condiciones, ¡Steve puede llegar!
    if (regla_suma && regla_techo && regla_suelo && regla_avance) {
        printf("YES\n");
    } else {
        printf("NO\n");
    }

    return 0;
}