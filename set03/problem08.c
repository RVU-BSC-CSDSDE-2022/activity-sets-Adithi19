//To find the perimeter of a polygon

#include <stdio.h>
#include <math.h>

typedef struct point {
    float x, y;
} Point;

typedef struct side {
    Point p1,p2;
    float distance;
} Side;

typedef struct polygon {
    Side sides[100];
    float perimeter;
} Polygon;

int input_n();
Point input_point(int i);
void initialize_sides(int n, Polygon *p);
float find_distance(Point a, Point b);
void find_perimeter(int n, Polygon* p);
void output(Polygon p);

int main() {
  int n,i;
  n=input_n();
  Polygon p;
  initialize_sides(n,&p);
  find_perimeter(n,&p);
  output(p);
  return 0;
}

int input_n() {
  int sides;
  printf("Enter the number of sides: ");
  scanf("%d",&sides);
  return sides;
}

Point input_point(int i) {
  Point pnt;
  printf("Enter the point %d (x,y): ",i);
  scanf("%f %f",&pnt.x,&pnt.y);
  return pnt;
}

void initialize_sides(int n, Polygon *p) {
  int i;
  p->sides[0].p1=input_point(1);
  p->sides[n-1].p2=p->sides[0].p1;
  for(i=1;i<n;i++) {
    p->sides[i-1].p2=input_point(i+1);
    p->sides[i].p1=p->sides[i-1].p2;
  }
}

float find_distance(Point a, Point b) {
  float dist;
  dist=sqrt((pow((b.x-a.x),2)+pow((b.y-a.y),2)));
  return dist;
}

void find_perimeter(int n, Polygon* p) {
  int i;
  p->perimeter=0.0;
  for(i=0;i<n;i++) {
    p->perimeter=p->perimeter+find_distance(p->sides[i].p1,p->sides[i].p2);
  }
}

void output(Polygon p) {
  printf("The perimeter of the polynomial is %f \n", p.perimeter);
}