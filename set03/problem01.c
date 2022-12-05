//To find the distance between 2 points

#include <stdio.h>

void input(float *x1, float *y1, float *x2, float *y2);
float find_distance(float x1, float y1, float x2, float y2);
void output(float x1, float y1, float x2, float y2, float distance);

int main() {
  float x1,y1,x2,y2,distance;
  input(&x1,&y1,&x2,&y2);
  distance=find_distance(x1,y1,x2,y2);
  output(x1,y1,x2,y2,distance);
  return 0;
}

void input(float *x1, float *y1, float *x2, float *y2) {
  printf("Enter the first points: ");
  scanf("%f %f",x1,y1);
  printf("Enter the second points: ");
  scanf("%f %f",x2,y2);
}

float find_distance(float x1, float y1, float x2, float y2) {
  float i,nw,ini,point_x,point_y,dist,sqr;
  ini=1.0;
  point_x=x2-x1;
  point_y=y2-y1;
  dist=(point_x*point_x) + (point_y*point_y);
  while(1) {
    nw=(ini + (dist/ini))/2.0;
    if(nw==ini) {
      sqr=nw;
      break;
    }
    else {
      ini=nw;
    }
  }
  return sqr;
}

void output(float x1, float y1, float x2, float y2, float distance) {
  printf("The distance between point (%f, %f) and (%f, %f) is %f \n",x1,y1,x2,y2,distance);
}