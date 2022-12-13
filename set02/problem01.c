//To find the area of a triangle

#include <stdio.h>

void input(float base, float height);
void find_area(float base , float height, float *area);
void output(float base, float height, float area);

int main() {
  float base,height;
  input(base, height);
  return 0;
}

void input(float base, float height) {
  float area;
  printf("Enter the base of the triangle: ");
  scanf("%f", &base);
  printf("Enter the height of the triangle: ");
  scanf("%f", &height);
  find_area(base, height, &area);
  output(base, height, area);
}

void find_area(float base , float height, float *area) {
  *area=(base*height)/2;
}

void output(float base, float height, float area) {
  printf("The area of the triangle with base %f and height %f is %f \n",base,height,area);
}