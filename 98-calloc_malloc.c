 #include <stdio.h>
 #include <stdlib.h>
 int main(void)
 {
	int i,n;
	double* p; // We uses this reference variable to access
	
	printf("Input size: ");
	scanf("%d", &n);
	
	p = (double *)calloc(n, sizeof(double) ); // Make double array of 10 elements

	
	for ( i = 0; i < n; i++ )
		p[i]=i; // put value i in array elemen t i
	
	for ( i = 0; i < n; i++ )
		printf("p[%d] = %lf\n", i, p[i] );
	
	
	free(p); // Un-reserve the first array
	printf("\n**************\n");
	
	p = (double *) calloc(4, sizeof(double) ); // Make a NEW double array of 4 elements
	
	// ***** Notice that the array size has CHANGED !!! ****
	for ( i = 0; i < 4; i++ )
		*(p + i) = i*i; // put value i*i in array element i
	
	for ( i = 0; i < 4; i++ )
		printf("*(p + %d) = %lf\n", i, *(p+i) );
	
	free(p); // Un-reserve the second array
 }
