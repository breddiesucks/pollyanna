// Pollyanna - a reverse-engineered encrypter made for personal info management
// github - breddiesucks | discord - breddiesucks

#include <stdio.h>
#include <stdlib.h>
#include "pollyanna.h"

int main() {
  char mystr[ARRMAX] = {' '};
  char refstr[ARRMAX] = {' '};

  printf("Enter the string to be encrypted: ");
  speakspell(mystr);

  printf("Enter the encryption string: ");
  speakspell(refstr);
  echoes(mystr);

  // encryption
  paintitblack(mystr, *(refstr));
  echoes(mystr);

  // decryption
  paranoid(mystr, *(refstr));
  echoes(mystr);

  return 0;
}
