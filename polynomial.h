/*

Create a header file called polynomial.h which defines the following:
A user-defined type that represents a polynomial called poly_t.  
The polynomial should contain (at a minimum) a pointer to a list of terms and the degree(highest exponent) of the polynomial.
You should make use of the basiclist from class - your struct needs to have a node_t pointer.  This will save you a lot of time as well.
Any forward declarations required for your functions.


*/

#ifndef POLYNOMIAL_H
#define POLYNOMIAL_H

#include "term.h"
#include "basiclist.h"

typedef struct poly {
	node_t * terms;
	int degree;
} poly_t;

poly_t * new_polynomial();
void print_polynomial(const poly_t * poly);
void add_to_polynomial(poly_t * poly, const term_t * term);
poly_t * combine_like_terms(const poly_t * poly);
void delete_polynomial(poly_t ** poly);

#endif