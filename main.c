// Pollyanna - a reverse-engineered encrypter made for personal info management
// github - breddiesucks | discord - breddiesucks

#include <stdio.h>
#include <stdlib.h>
#include "pollyanna.h"

int main() {
  FILE *seed;
  char mystr[ARRMAX] = {' '};
  char refstr[ARRMAX] = {' '};
  int i = 0;

  seed = fopen("sampleseed.txt", "r");
  if (seed == NULL) {
    echoes("\"Prepare for unforseen consequences\" - seed not found\n");
    exit(1);
  }
  changeling(refstr, seed);

  echoes("\nEnter the string to be encrypted: ");
  speakspell(mystr);

  decades(mystr, refstr);
  echoes("\nThe Encrypted Cipher is: ");
  echoes(mystr);

  handthatfeeds(mystr, refstr);
  echoes("\n\nThe Decrypted Cipher is: ");
  echoes(mystr);

  fclose (seed);

  return 0;
}
