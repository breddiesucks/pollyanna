// the encoder works, but far from complete
// I need to induce the key stream as ref, the raison d'etre of this program

#include <stdio.h>
#include <stdlib.h>
#include "pollyanna.h"

void paintitblack (char * ptr, char ref) {
  int i = 0;

  for (i = 0; *(ptr + i) != '\0'; i++)
    if ((*(ptr + i) >= ' ') && (*(ptr + i) <= '~'))
      *(ptr + i) = 32 + (((*(ptr + i) - 32) + (ref - 32)) % 93);

}


void whoshotya (char * ptr, char * refptr) {
  int i = 0;

  for (i = 0; *(ptr + i) != '\0'; i++)
    if ((*(ptr + i) >= ' ') && (*(ptr + i) <= '~'))
      *(ptr + i) = 32 + (((*(ptr + i) - 32) + (*(refptr + i) - 32)) % 93);

}
