//To add n fractions

#include <stdio.h>

typedef struct fraction
{
    int num, den;
} Fraction;

int input_n();
Fraction input_fraction();
void input_n_fractions(int n, Fraction f[n]);
int find_gcd(int a, int b);
Fraction add_fractions(Fraction f1, Fraction f2);
Fraction add_n_fractions(int n, Fraction f[n]);
void output(int n, Fraction f[n], Fraction sum);

int main() {
  int n;
  n=input_n();
  Fraction f[n],sum;
  input_n_fractions(n,f);
  sum = add_n_fractions(n,f);
  output(n,f,sum);
  return 0;
}

int input_n() {
  int elements;
  printf("Enter number of elements in the array: ");
  scanf("%d",&elements);
  return elements;
}

Fraction input_fraction() {
  Fraction f;
  printf("Enter a fraction: ");
  scanf("%d %d",&f.num,&f.den);
  return f;
}

void input_n_fractions(int n, Fraction f[n]) {
  int i;
  for(i=0;i<n;i++) {
    f[i]=input_fraction();
  }
}

int find_gcd(int a, int b) {
  int i,hcf;
  for(i=1;i<=a || i<=b; i++) {
    if(a%i==0 && b%i==0) {
      hcf=i;
    }
  }
  return hcf;
}

Fraction add_fractions(Fraction f1, Fraction f2) {
  Fraction res;
  res.num=f1.num+f2.num;
  res.den=f1.den;
  return res;
}

Fraction add_n_fractions(int n, Fraction f[n]) {
  int i,lcm,gcd,k;
  Fraction result={f[0].num,f[0].den};
  Fraction f1[n];
  for(i=1;i<n;i++) {
    gcd=find_gcd(result.den,f[i].den);
    lcm = (result.den*f[i].den)/gcd;
    for(k=0;k<lcm;k++) {
      if(result.den*i==lcm) {
        result.num=result.num*i;
        result.den=result.den*i;
      }
      if(f[i].den*i==lcm) {
        f1[i].num=f[i].num*i;
        f1[i].den=f[i].den*i;
      }
    }
    result=add_fractions(result,f1[i]);
  }
  return result;
}

void output(int n, Fraction f[n], Fraction sum) {
  printf("%d %d \n",sum.num,sum.den);
}
