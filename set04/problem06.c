//To count the number of words in a string using strtok (string.h)

#include <stdio.h>
#include <string.h>

void input_string(char *a);
int count_words(char *string);
void output(char *string, int no_words);

int main() {
  char a[100];
  int no_words;
  input_string(a);
  no_words=count_words(a);
  output(a,no_words);
  return 0;
}

void input_string(char a[100]) {
  printf("Enter a string of words: ");
  scanf("%[^\n]s", a);
}

int count_words(char *string) {
  int count=1,i=0;
  char constant[]=" ";
  char *token=(string,constant);
  printf( " %s\n", token );
  // while( token != NULL ) {
  //     printf( " %s\n", token );
    
  //     token = strtok(NULL, constant);
  //  }
  while(string[i]!='\0') {
    if(string[i]==' ') {
      count++;
    }
    i++;
  }
  return count;
}

void output(char *string, int no_words) {
  printf("The number of words in \"%s\" is %d \n",string,no_words);
}