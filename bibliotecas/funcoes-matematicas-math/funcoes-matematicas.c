// sqrt() raiz quadrada
// pow() potencia
// abs() / fabs() valor absoluto
// sin(), cos(), tan() trigonometria

#include <stdio.h>
#include <math.h>

int main()
{
  double base = 2, expoente = 200;

  printf("2 elevado a 200: %.2lf\n", pow(base, expoente));

  printf("Raiz quadrada de 25: %.2lf\n", sqrt(25));

  return 0;
}

// trabalhar com double, usa-se o lf (long float) quando a potência é maior, ex: 2 elevado a 200.