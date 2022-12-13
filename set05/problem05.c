//To find borga(x) given x

#include <stdio.h>

int input();
float borga_x(int x);
void output(int x, float result);

int main() {
  int x;
  float result;
  x=input();
  result=borga_x(x);
  output(x, result);
  return 0;
}

int input() {
  int num;
  printf("Enter a number: ");
  scanf("%d", &num);
  return num;
}

float borga_x(int x) {
  float borga,y,fac,pow;
  int i;
  fac=1.0;
  pow=1.0;
  y=0.0;
  borga=0.0;
  i=1;
  while(1) {
    y=pow/fac;
    fac=fac*(i*2)*(i*2+1);
    pow=pow*x;
    i++;
    borga=y+borga;
    if(y<0.000001) {
      break;
    }
  }
  return borga;
}

void output(int x, float result) {
  printf("borga(%d) = %f \n",x, result);
}