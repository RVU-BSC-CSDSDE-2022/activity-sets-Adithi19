//To find if a triangle is scalene

#include <stdio.h>

int input_side();
int check_scalene(int a, int b, int c);
void output(int a, int b, int c, int isscalene);

int main() {
  int a,b,c,isscalene;
  a=input_side();
  b=input_side();
  c=input_side();
  isscalene=check_scalene(a,b,c);
  output(a,b,c,isscalene);
  return 0;
}

int input_side() {
  int side;
  printf("Enter the side of the triangle: ");
  scanf("%d",&side);
  return side;
}

int check_scalene(int a, int b, int c) {
  int check;
  check=0;
  if(a==b || b==c || c==a) {
    check=1;
  }
  return check;
}

void output(int a, int b, int c, int isscalene) {
  if(isscalene==1) {
    printf("The triangle with sides %d %d and %d is not scalene \n",a,b,c);
  }
  else {
    printf("The triangle with sides %d %d and %d is scalene \n",a,b,c);
  }
}