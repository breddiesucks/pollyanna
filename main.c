// Pollyanna - a reverse-engineered encrypter made for personal info management
// github - breddiesucks | discord - breddiesucks

#include <stdio.h>
#include <stdlib.h>
#include "pollyanna.h"

#define MAX 1000

int main() {
  char mystr[MAX] = {' '};
  char refstr[MAX] = {' '};

  speakspell(mystr);
  echoes(mystr);

  speakspell(refstr);
  echoes(refstr);

  //paintitblack(mystr, *(refstr));
  whoshotya(mystr, refstr);
  echoes(mystr);

  return 0;
}
