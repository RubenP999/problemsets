#  2202A - Parkour Design CODEFORCES 

### 📊 Veredicto: ACCEPTED | ⏱️ Time: 46 ms | 💾 Memory: 0 KB

Este repositorio contiene la solución al problema de **Parkour Design**
**Link del Problema:** [Codeforces #2026](https://codeforces.com/problemset/problem/2202/A)

---

##  Lógica de Resolución

El problema plantea que Steve puede realizar tres tipos de saltos:
1. **Salto A:** (2, 1)
2. **Salto B:** (3, 0)
3. **Salto C:** (4, -1)

Para determinar si un punto $(x, y)$ es alcanzable, apliqué un sistema de filtros basados en restricciones físicas y aritméticas.

### 1. Filtro Aritmético (Divisibilidad)
Al modelar los saltos como una combinación lineal:
* $x = 2a + 3b + 4c$
* $y = 1a + 0b - 1c$

Sumando ambas ecuaciones:
$$x + y = 3(a + b + c)$$

**Conclusión:** Para que el punto sea alcanzable, la suma de sus coordenadas $(x + y)$ debe ser forzosamente un **múltiplo de 3**.

### 2. Filtro Geométrico (Región de Posibilidad)
Utilicé **Inecuaciones Lineales** para definir el "cono" de alcance de Steve basado en las pendientes extremas ($m = y/x$):

* **Límite Superior (Salto A):** Pendiente $1/2$. 
  * Inecuación: $y \le 0.5x \implies \mathbf{2y \le x}$
* **Límite Inferior (Salto C):** Pendiente $-1/4$. 
  * Inecuación: $y \ge -0.25x \implies \mathbf{4y \ge -x}$

Cualquier punto fuera de estas fronteras es físicamente inalcanzable para Steve.
