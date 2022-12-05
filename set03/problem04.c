//To find nth number in fibonacci sequence

#include <stdio.h>

int input();
int find_fibo(int n);
void output(int n, int fibo);

int main() {
  int n,fibo;
  n=input();
  fibo=find_fibo(n);
  output(n,fibo);
  return 0;
}

int input() {
  int number;
  printf("Enter a number: ");
  scanf("%d",&number);
  return number;
}

int find_fibo(int n) {
  int f_fibo,i,previous,current,index;
  index=1;
  i=1;
  previous=0;
  while(1) {
    if(index==n) {
      f_fibo=i;
      break;
    }
    current=i;
    i=i+previous;
    previous=current;
    index=index+1;
  }
  return f_fibo;
}

void output(int n, int fibo) {
  printf("Fibo(%d) = %d \n",n,fibo);
}