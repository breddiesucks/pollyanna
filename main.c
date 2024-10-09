// Pollyanna - a reverse-engineered transcoder made for personal info management
// github - breddiesucks | discord - breddiesucks

#include <stdio.h>
#include <stdlib.h>

#define MAX 1000

void echoes(char *); // it writes strings
void newspeak (char *); // it encodes
void finalcut(char *); // it prints strings

int main() {
  char mystr[MAX] = {' '};

  echoes(mystr);
  newspeak(mystr);
  finalcut(mystr);

  return 0;
}

void echoes (char * echPtr) {
  int i = 0;

  for (i = 0; (*(echPtr + i) = fgetc(stdin)) != '\n' ; i++);
  *(echPtr + ++i) = '\0';
}

void newspeak (char * newPtr) {
  int i = 0;

  for (i = 0; *(newPtr + i) != '\n'; i++)
    if ((*(newPtr + i) >= 'a') && (*(newPtr + i) <= 'z'))
      *(newPtr + i) += (('b' - 'a' + *(newPtr + i)) < 26)? '!' : *(newPtr + i);

}

void finalcut (char * finalPtr) {
  int i = 0;

  for (i = 0; *(finalPtr + i) != '\0'; i++)
    fputc(*(finalPtr + i), stdout);
}
