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
