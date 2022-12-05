//To to find the weight of a camel, given height, length and stomach radius

#include <stdio.h>
#include <math.h>

void input_camel_details(float *radius, float *height, float *length);
float find_weight(float radius, float height, float length);
void output(float radius, float height, float length, float weight);

int main() {
  float radius, height, length, weight;
  input_camel_details(&radius, &height, &length);
  weight=find_weight(radius, height, length);
  output(radius, height, length, weight);
  return 0;
}

void input_camel_details(float *radius, float *height, float *length) {
  printf("Enter stomach radius of the camel: ");
  scanf("%f",&*radius);
  printf("Enter height of the camel: ");
  scanf("%f",&*height);
  printf("Enter length of the camel: ");
  scanf("%f",&*length);
}

float find_weight(float radius, float height, float length) {
  float wgt, product, pi;
  product=sqrt(height*length);
  pi = 22.0/7.0;
  wgt= pi * (radius*radius*radius) * product;
  return wgt;
}

void output (float radius, float height, float length, float weight) {
  printf("The weight of the camel with radius: %f, height: %f and length: %f is %f \n", radius, height, length, weight);
}