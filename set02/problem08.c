//To find the triangle with smallest area in n given triangles

#include <stdio.h>

typedef struct _triangle {
	float base, altitude, area;
} Triangle;

int input_n();
Triangle input_triangle();
void input_n_triangles(int n, Triangle t[n]);
void find_area(Triangle *t);
void find_n_areas(int n, Triangle t[n]);
Triangle find_smallest_triangle(int n, Triangle t[n]);
void output(int n, Triangle t[n], Triangle smallest);

int main() {
  int n;
  n=input_n();
  Triangle t[n], smallest;
  input_n_triangles(n, t);
  find_n_areas(n, t);
  smallest=find_smallest_triangle(n, t);
  output(n, t, smallest);
  return 0;
}

int input_n() {
  int elements;
  printf("Enter the number of triangles: ");
  scanf("%d", &elements);
  return elements;
}

Triangle input_triangle() {
  Triangle tri;
  printf("Enter the base of the triangle: ");
  scanf("%f",&tri.base);
  printf("Enter the altitude of the triangle: ");
  scanf("%f",&tri.altitude);
  return tri;
}

void input_n_triangles(int n, Triangle t[n]) {
  int i;
  for(i=0;i<n;i++) {
    t[i] = input_triangle();
  }
}

void find_area(Triangle *t) {
  t->area=(t->base * t->altitude)/2;
}

void find_n_areas(int n, Triangle t[n]) {
  int i;
  for(i=0;i<n;i++) {
    find_area(&t[i]);
  }
}

Triangle find_smallest_triangle(int n, Triangle t[n]) {
  int i;
  Triangle small;
  small=t[0];
  for(i=0;i<n;i++) {
    if(t[i].area<small.area) {
      small=t[i];
    }
  }
  return small;
}

void output(int n, Triangle t[n], Triangle smallest) {
  int i;
  for(i=0;i<n;i++) {
    if(i==n-1) {
      printf("(%.2f,%.2f) is the triangle having base %.2f, height %.2f and area %.2f \n",t[i].base,t[i].altitude,smallest.base,smallest.altitude,smallest.area);
    }
    else if(i==0) {
      printf("The smallest triangle out of triangles with base and height (%.2f,%.2f) , ",t[i].base,t[i].altitude);
    }
    else {
      printf("(%.2f,%.2f) , ",t[i].base,t[i].altitude);
    }
  }
}