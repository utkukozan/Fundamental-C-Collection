#include <stdio.h>

// This program computes the sum of two fractions and stores the result in a third fraction.
// It defines a structure for representing fractions, where each fraction consists of a numerator
// and a denominator. The function f1 calculates the sum of two fractions and stores the result
// in the third fraction passed by reference.

struct Fraction {
    int numer; // Numerator of the fraction
    int denom; // Denominator of the fraction
};

// Function to compute the sum of two fractions
// Parameters:
// - frac1: First fraction
// - frac2: Second fraction
// - sumfrac: Pointer to the third fraction to store the result
// Returns: None
void f1(struct Fraction frac1, struct Fraction frac2, struct Fraction *sumfrac) {
    // Check if the denominators are the same
    if (frac1.denom == frac2.denom) {
        sumfrac->numer = frac1.numer + frac2.numer; // Add numerators
        sumfrac->denom = frac1.denom; // Denominator remains the same
    } else {
        // Cross-multiply to find a common denominator
        sumfrac->numer = (frac1.numer * frac2.denom) + (frac1.denom * frac2.numer); // Calculate new numerator
        sumfrac->denom = frac1.denom * frac2.denom; // Calculate new denominator
    }
}

int main(void) {
    struct Fraction frac1, frac2, sumfrac;
    
    // Input two fractions from the user
    printf("Input two integers for the first fraction: ");
    scanf("%d %d", &frac1.numer, &frac1.denom);
    printf("Input two integers for the second fraction: ");
    scanf("%d %d", &frac2.numer, &frac2.denom);
    
    // Compute the sum of the fractions
    f1(frac1, frac2, &sumfrac);
    
    // Display the result
    printf("Sum of the two fractions is %d/%d\n", sumfrac.numer, sumfrac.denom);
    
    return 0;
}
