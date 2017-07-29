#include <stdio.h>

float ftoc(float f);

int main(void) {
  float fahr, celsius;
  int lower, upper, step;
  lower = 0, upper = 300, step = 20;
  fahr = lower;
  while (fahr <= upper) {
    celsius = ftoc(fahr);
    printf("%3.0f %6.1f\n", fahr, celsius);
    fahr += step;
  }
}

float ftoc(float f) {
  return (5.0 / 9.0) * (f - 32.0);
}