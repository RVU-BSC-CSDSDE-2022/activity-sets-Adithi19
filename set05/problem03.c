//To to find the weight of a camel, given height, length and stomach radius

#include <math.h>
#include <stdio.h>

struct camel {
   float radius, height, length, weight;
};

typedef struct camel Camel;

Camel input();
void find_weight(Camel *c);
void output(Camel c);

int main() {
  Camel c;
  c=input();
  find_weight(&c);
  output(c);
  return 0;
}

Camel input() {
  Camel attri;
  printf("Enter stomach radius of the camel: ");
  scanf("%f",&attri.radius);
  printf("Enter height of the camel: ");
  scanf("%f",&attri.height);
  printf("Enter length of the camel: ");
  scanf("%f",&attri.length);
  return attri;
}

void find_weight(Camel *c) {
  float product,pi;
  product = sqrt(c->height * c->length);
  pi = 22.0/7.0;
  c->weight= pi * (c->radius * c->radius * c->radius) * product;
}

void output(Camel c) {
  printf("The weight of the camel with radius: %f, height: %f and length: %f is %f \n", c.radius, c.height, c.length, c.weight);
}