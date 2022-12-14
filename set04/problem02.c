//To find the smallest of three fractions

#include <stdio.h>

typedef struct {
    int num, den;
} Fraction;

Fraction input_frac();
Fraction smallest_frac(Fraction f1, Fraction f2, Fraction f3);
void output(Fraction f1, Fraction f2, Fraction f3, Fraction result);

int main() {
  Fraction f1,f2,f3;
  Fraction result;
  f1=input_frac();
  f2=input_frac();
  f3=input_frac();
  result=smallest_frac(f1, f2, f3);
  output(f1, f2, f3, result);
  return 0;
}

Fraction input_frac() {
  Fraction fn;
  printf("Enter a fraction: ");
  scanf("%d %d",&fn.num,&fn.den);
  return fn;
}

Fraction smallest_frac(Fraction f1, Fraction f2, Fraction f3) {
  Fraction small;
  int gcd,cm_den,i;
  int nm1,nm2,nm3;
  for(i=1;i<=f1.den || i<=f2.den || i<=f3.den; i++) {
    if(f1.den%i==0 && f2.den%i==0 && f3.den%i==0) {
      gcd = i;
    }
  }
  cm_den = (f1.den*f2.den*f3.den)/gcd;
  for(i=1;i<cm_den;i++) {
    if(f1.den*i==cm_den) {
      nm1=f1.num*i;
    }
    if(f2.den*i==cm_den) {
      nm2=f2.num*i;
    }
    if(f3.den*i==cm_den) {
      nm3=f3.num*i;
    }
  }
  if(nm1<nm2 && nm1<nm3) {
    small = f1;
  }
  else if(nm2<nm3) {
    small = f2;
  }
  else {
    small = f3;
  }
  return small;
}

void output(Fraction f1, Fraction f2, Fraction f3, Fraction result) {
  printf("The smallest of %d/%d, %d/%d and %d/%d is %d/%d \n",f1.num,f1.den,f2.num,f2.den,f3.num,f3.den,result.num,result.den);
}