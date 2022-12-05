#include <stdio.h>

int main(void) {
  FILE *f1,*f2;
  char buffer[100];
  char c;
  f1 = fopen("sample.txt", "w");
  printf("Enter a sentence to be written in file:\n");
  fgets(buffer, sizeof(buffer), stdin);
  fprintf(f1, "%s", buffer);
  fclose(f1);

  f1=fopen("sample.txt","r");
  printf("The file contains:");
  c=fgetc(f1);
  while(c!=EOF)
    {
      printf("%c",c);
      c=fgetc(f1);
    }
  fclose(f1);

  f1=fopen("sample.txt","r");
  f2=fopen("sample2.txt","w");
  c=fgetc(f1);
  while(c!=EOF)
    {
      fprintf(f2,"%c",c);
      c=fgetc(f1);
    }
  printf("\n");
  fclose(f1);
  fclose(f2);
  printf("File copied successfully\n");

  
  

  return 0;
}