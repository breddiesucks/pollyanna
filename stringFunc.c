#include <stdio.h>
#include <stdlib.h>
#include "pollyanna.h"

void speakspell (char * echPtr) {
  int i = 0;

  for (i = 0; (*(echPtr + i) = fgetc(stdin)) != '\n' ; i++);
  *(echPtr + ++i) = '\0';
}

void echoes (char * finalPtr) {
  int i = 0;

  for (i = 0; *(finalPtr + i) != '\0'; i++)
    fputc(*(finalPtr + i), stdout);
}
