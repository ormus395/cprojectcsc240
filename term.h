/*

Create a header file called term.h which defines the following:
A user-defined type that represents a term in a polynomial called term_t that contains the following fields:
coefficient: An integer field for the coefficient
var: A character field for the variable (assume the variable is a single character)
exponent: An integer for the exponent
For example: {3, 'x', 2} would represent the term 3x2.
Any forward declarations required for your functions.


*/

#ifndef TERM_H
#define TERM_H

typedef struct term {
	int coefficient;
	char var;
	int exponent;
} term_t;

char * term_to_string(const term_t * term);

#endif