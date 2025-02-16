/*

Create a C file called polynomial.c that defines the following functions:
poly_t * new_polynomial()  that allocates memory for a new polynomial.  
void print_polynomial(const poly_t * poly)  prints a polynomial.  You do not need to print the terms in any specific order.
void add_to_polynomial(poly_t * poly, const term_t * term)  adds a term to the polynomial.  
poly_t * combine_like_terms(const poly_t * poly)  returns a new polynomial resulting from combining the like terms in the parameter polynomial poly.  
void delete_polynomial(poly_t ** poly)  that frees memory allocated for a  polynomial

*/

#include <stdio.h>
#include <stdlib.h>
#include "basiclist.h"
#include "polynomial.h"

#define LEN 100

poly_t * new_polynomial() {
    poly_t *polynomial = (poly_t*)malloc(sizeof(poly_t));
    if (polynomial == NULL) {
        printf("Memory allocation failed\n");
        return NULL;
    }
    
    return polynomial;
}

void print_polynomial(const poly_t *poly) {
    // to print, poly terms
    // while polly term is not null print the term, 
    // create new string from terms term_to_string

    // create new cString
    char *polyString = (char *)malloc(LEN * sizeof(char));
    node_t *currentTerm;

    currentTerm = poly->terms;
    while (currentTerm != NULL) {
        printf("%s ", currentTerm->data);
        currentTerm = currentTerm->next;
    }
}

void add_to_polynomial(poly_t * poly, const term_t * term) {
    list_add(poly->terms, term);
}

// this one is for sure going to take forever
poly_t * combine_like_terms(const poly_t * poly) {}

void delete_polynomial(poly_t ** poly) {
    free(poly);
}