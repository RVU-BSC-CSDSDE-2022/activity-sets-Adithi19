//To find sum of two fractions

#include <stdio.h>

void input(int *num1, int *den1, int *num2, int *den2);
void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den);
void output(int num1, int den1, int num2, int den2, int res_num, int res_den);

int main() {
  int num1,num2,den1,den2;
  int res_num,res_den;
  input(&num1,&den1,&num2,&den2);
  add(num1,den1,num2,den2,&res_num,&res_den);
  output(num1,den1,num2,den2,res_num,res_den);
  return 0;
}

void input(int *num1, int *den1, int *num2, int *den2) {
  printf("Enter the first fraction: ");
  scanf("%d %d",num1,den1);
  printf("Enter the second fraction: ");
  scanf("%d %d",num2,den2);
}

void add(int num1, int den1, int num2, int den2, int *res_num, int *res_den) {
  int lcm,gcd,i;
  for(i=1;i<=den1 || i<=den2; i++) {
    if(den1%i==0 && den2%i==0) {
      gcd = i;
    }
  }
  lcm = (den1*den2)/gcd;
  for(i=0;i<lcm;i++) {
    if(den1*i==lcm) {
      den1=den1*i;
      num1=num1*i;
    }
    if(den2*i==lcm) {
      den2=den2*i;
      num2=num2*i;
    }
  }
  *res_num = num1 + num2;
  *res_den = den1;
}

void output(int num1, int den1, int num2, int den2, int res_num, int res_den) {
  printf("%d/%d + %d/%d = %d/%d \n",num1,den1,num2,den2,res_num,res_den);
}