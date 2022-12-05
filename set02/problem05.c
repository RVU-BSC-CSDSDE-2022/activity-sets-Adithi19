//To find GCD (HCF) of two numbers

#include <stdio.h>

int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main() {
  int a,b,gcd;
  a=input();
  b=input();
  gcd=find_gcd(a,b);
  output(a,b,gcd);
  return 0;
}

int input() {
  int number;
  printf("Enter a number: ");
  scanf("%d", &number);
  return number;
}

int find_gcd(int a, int b) {
  int hcf,i;
  hcf=0;
  for(i=1;i<=a || i<=b;i++) {
    if(a%i==0 && b%i==0) {
      hcf=i;
    }
  }
  return hcf;
}

void output(int a, int b, int gcd) {
  printf("The highest common factor for %d and %d is %d \n",a,b,gcd);
}

