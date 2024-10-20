// personal ground-up library for specific tasks
// this may seem daft, but hey, making your own library sounds cool to me

#ifndef _POLLYANNA_H_
#define _POLLYANNA_H_

#define ARRMAX 1000

// string functions
void speakspell (char * str); // writes strings
void echoes (char * str); // prints strings

// other string utils
int kaos (char * ptr); // measure the string
void knockin (char * ptrA, char * ptrB); // copies the one to another string

// key interpretation
void changeling (char * keyptr, FILE * fileseed);

// encryption setup
void paintitblack (char * base, char ref); // encrypts one char
void paranoid (char * base, char ref); // decrypts one char

void decades (char * base, char * ref);
void handthatfeeds (char * base, char * ref);

#endif
