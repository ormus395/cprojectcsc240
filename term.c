/*

Create a C file called term.c that defines the following function:
char * term_to_string(const term_t * term)  returns a string representation of a term.  

*/
#include <stdio.h>
#include <stdlib.h>
#include "term.h"

#define LEN 10

char * term_to_string(const term_t * term) {

	char *termAsString = (char *)malloc(LEN * sizeof(char));

	if (term->exponent == 1) {
        sprintf(termAsString, "%d%c", term->coefficient, term->var);
	} else if (term->exponent == 0) {
        sprintf(termAsString, "%d", term->coefficient);
	} else {
        sprintf(termAsString, "%d%c^%d", term->coefficient, term->var, term->exponent);
	}

	return termAsString;

}
/*
int main(void) {
	term_t testterm1 = {1, 'x', 0};
    term_t testterm2 = {2, 'x', 1};
    term_t testterm3 = {3, 'x', 2};

	printf("NAME: SAMPLE OUTPUT\n");
    printf("Testing term.c/h:\n");
    printf("testterm1: %s\n", term_to_string(&testterm1));
    printf("testterm2: %s\n", term_to_string(&testterm2));
    printf("testterm3: %s\n", term_to_string(&testterm3));
}
*/