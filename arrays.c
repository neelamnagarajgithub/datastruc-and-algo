#include<stdio.h>
int main() {
  FILE *f1;
  f1= fopen("myfile.txt","w");
  fputs("apple",f1);
  fclose(f1);
return 0;
}