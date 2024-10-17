// the encoder works, but far from complete
// I need to induce the key stream as ref, the raison d'etre of this program

#include <stdio.h>
#include <stdlib.h>
#include "pollyanna.h"

// char key encode
void paintitblack (char * ptr, char ref) {
  int i = 0;

  for (i = 0; *(ptr + i) != '\0'; i++)
    if ((*(ptr + i) >= ' ') && (*(ptr + i) <= 'z')) {
      *(ptr + i) = 32 + (((*(ptr + i) - 32) + (ref - 32)) % 96);
    }
}

// char key decode
void paranoid (char * ptr, char ref) {
  int i = 0;

  for (i = 0; *(ptr + i) != '\0'; i++)
    if ((*(ptr + i) >= ' ') && (*(ptr + i) <= 'z')) {
      *(ptr + i) = 32 + (((*(ptr + i) - 32) + (ref - 32)) % 96);
    }
}

void whoshotya (char * ptr, char * refptr) {
  int i = 0;
  int j = 0;

  for (i = 0, j = 0; *(ptr + i) != '\0'; i++, j++) {
    if (*(refptr + j) = '\n')
      j = 0;
    if ((*(ptr + i) >= ' ') && (*(ptr + i) <= 'z'))
      *(ptr + i) = 32 + (((*(ptr + i) - 32) + (*(refptr + j) - 32)) % 96);
  }
}

