#include <math.h>
#include <stdio.h>

int main() {
  double radius, volume, mass;
  const double density = 21500.0;

  if (scanf("%lf", &radius) != 1 || radius <= 0) {
    printf("n/a");
    return 1;
  }

  volume = (4.0 / 3.0) * M_PI * pow(radius, 3);
  mass = density * volume;

  printf("%.0lf", round(mass));

  return 0;
}
