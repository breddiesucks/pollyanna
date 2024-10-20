#include <stdio.h>
#include <stdlib.h>
#include "pollyanna.h"

// writes strings
void speakspell (char * echPtr) {
  int i = 0;

  for (i = 0; (*(echPtr + i) = fgetc(stdin)) != '\n' ; i++);
  *(echPtr + ++i) = '\0';
}

// prints strings
void echoes (char * finalPtr) {
  int i = 0;

  for (i = 0; *(finalPtr + i) != '\0'; i++)
    fputc(*(finalPtr + i), stdout);
}

// measures the length of the string
int kaos (char * ptr) {
  int i = 0;

  for (i = 0; *(ptr + i) != '\0'; i++);

  return i;
}

// copies the 1st string to the second
void knockin (char * ptrA, char * ptrB) {
  int i = 0;

  if (kaos(ptrB) > kaos(ptrA)) {
    printf("Womp Womp");
    exit(1);
  }
  else
    for (i = 0; (*(ptrB + i) = *(ptrB + i)) != '\0'; i++);
}

// converts the key file to the key string
void changeling (char * keyptr, FILE * keyseed) {
  int i = 0;
  char bufchar = ' ';

  while ((bufchar = fgetc(keyseed)) != EOF)
    if ((bufchar != '\n') && (bufchar != '\t') && (bufchar != ' '))
      *(keyptr + i++) = bufchar;

  echoes(keyptr);
  echoes("\nThe seed is successfully interpreted\n");
}
