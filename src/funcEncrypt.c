// the encoder works, but far from complete
// I need to induce the key stream as ref, the raison d'etre of this program

#include <stdio.h>
#include <stdlib.h>
#include "pollyanna.h"

// encryption - one process version
void paintitblack (char * base, char ref) {
  if ((*base >= ' ') && (*base <= '~'))
    *base = 32 + ((*base - 32) + (ref - 32)) % 96;
}

// decryption - one process version
void paranoid (char * base, char ref) {
  if ((*base >= ' ') && (*base <= '~'))
    *base = 32 + ((*base - ref < 0)? (96 + (*base - ref)) : ((*base - ref) % 96));
}

// encryption - string edition
void decades (char * base, char * ref) {
  int i = 0;
  int j = 0;

  for (i = 0, j = 0; *(base + i) != '\0'; i++, j++) {
    if (*(ref + j) == '\0')
      j = 0;

    paintitblack ((base + i), *(ref + j));
  }
}

// decryption - string edition
void handthatfeeds (char * base, char * ref) {
  int i = 0;
  int j = 0;

  for (i = 0, j = 0; *(base + i) != '\0'; i++, j++) {
    if (*(ref + j) == '\0')
      j = 0;

    paranoid ((base + i), *(ref + j));
  }
}
