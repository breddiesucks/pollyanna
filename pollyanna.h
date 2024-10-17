#ifndef _POLLYANNA_H_
#define _POLLYANNA_H_

#define ARRMAX 1000

void speakspell (char * str); // writes strings
void echoes (char * str); // prints strings
void paintitblack (char * ptr, char ref); // encodes based on a single character - for debugging
void whoshotya (char * ptr, char * refptr); // encodes with reference to a string
void paranoid (char * ptr, char ref); // decoder based on one character
void hitemup (char * ptr, char * refptr); // decoder with reference to a string


#endif
