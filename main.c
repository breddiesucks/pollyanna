// Pollyanna - a reverse-engineered transcoder made for personal info management
// github - breddiesucks | discord - breddiesucks

#include <stdio.h>
#include <stdlib.h>
#include "pollyanna.h"

#define MAX 1000

int main() {
  char mystr[MAX] = {' '};

  echoes(mystr);
  speakspell(mystr);

  paintitblack(mystr, 'd');
  speakspell(mystr);

  return 0;
}
