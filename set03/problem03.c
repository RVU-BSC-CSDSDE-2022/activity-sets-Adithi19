//To check if the given number is prime

#include <stdio.h>

int input_number();
int is_prime(int n);
void output(int n, int result);

int main() {
  int n, result;
  n=input_number();
  result=is_prime(n);
  output(n,result);
  return 0;
}

int input_number() {
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  return number;
}

int is_prime(int n) {
  int res,i,count;
  count=0;
  res=0;
  for (i=1;i<=n;i++) {
    if(n%i==0) {
      count=count+1;
    }
  }
  if(count==2) {
    res=1;
  }
  return res;
}

void output(int n, int result) {
  if(result==1) {
    printf("%d is a prime number \n",n);
  }
  else {
    printf("%d is a composite number \n",n);
  }
}