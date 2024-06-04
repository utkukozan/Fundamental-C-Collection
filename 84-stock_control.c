#include <stdio.h>

/*  FUNCTION DEFINITIONS */
void amountofStores	(int amount[][10]);
void stockControl (int amount[][10], int *, int *);
void allProducts (int amount[][10], int *);
void compareProducts (int amount[][10], int *, int *);
void comparebothProducts (int amount[][10], int *, int *);
void sortedProducts(int [][10], int []);
void updateStock (int [][10], int *, int *);
int returnMenucheck (); // For using " Continue" or "Return" menu

/*  MAIN FUNCTION */
int main(void)
{
	int operation, operationListofProducts, productid, storeid, storeidcompare, power, powerListofProductsmenu;
	int amount[10][10], amountsorted[10];
	
	
	/* WARNING !!! */
	// For this DEMO program work properly, the amount of all products in each store is set to "50" above. ( Since using text files is not available ) 
	// If any text file or another complication will be used, you can close the blocks 24-26 with comment line...
	for (int i=0;i<10;i++)
		for (int j=0;j<10;j++)
			amount[i][j] = 50;
	
	
	/* THE BEGINNING OF THE PROGRAM */ 
	printf("***********************************************************\n");
	power = 1;
	/*  MAIN MENU */
	while (power == 1)
	{
		printf("\nMain Menu :\n");
		printf("_____________________________________________________________________\n");
		printf("0- Input product amount of stores\n");
		printf("1- Stock control with product id and store id\n");
		printf("2- List products\n");
		printf("3- Update stock\n");
		printf("4- Quit\n");
		printf("--------------------------------------------\n\n");
		
		/* SELECT OPERATION */
		printf("Select your operation : ");
		scanf("%d", &operation);
		printf("--------------------------------------------\n");
		
		/* OPERATION CASES */
		switch (operation)
		{
			case 0: // Input product amount of stores
				do {
					amountofStores(amount);
					printf("...\n");
				} while (returnMenucheck() == 1);
				break;
				
			case 1: // Stock control with product id and store id
				do {
					printf("Enter product id : ");
					scanf("%d", &productid);
					printf("Enter store id : ");
					scanf("%d", &storeid);
					stockControl(amount, &productid, &storeid);
				} while (returnMenucheck() == 1);
				break;
			
			case 2: // List products
				powerListofProductsmenu = 1; // Power ON !
				
				while (powerListofProductsmenu == 1)
				{
					/* LIST PRODUCTS MENU */
			
					printf("1 - List all products of store n\n");
					printf("2 - List products exist in store n but not store m\n");
					printf("3 - List products exist in both store n and store m\n");
					printf("4 - List sorted product by stock\n");
					printf("--------------------------------------------\n");
					
					/* OPERATION OF LIST PRODUCTS MENU */
					printf("Select your operation : ");
					scanf("%d", &operationListofProducts);
						
					/* CASES OF LIST OF PRODUCTS MENU */
					switch(operationListofProducts)
					{
						case 1:  // List all products of store n
							printf("Input store id:");
							scanf("%d", &storeid);
							allProducts(amount, &storeid);	
							break;
						case 2:  // List products exist in store n but not store m
							printf("Select two stores to compare: ");
							scanf("%d %d", &storeid, &storeidcompare);
							compareProducts(amount, &storeid, &storeidcompare);
							break;
						case 3: // List products exist in both store n and store m
							printf("Choose two stores: ");
							scanf("%d %d", &storeid, &storeidcompare);
							comparebothProducts(amount, &storeid, &storeidcompare);
							break;
						case 4: // List sorted product by stock
							sortedProducts(amount, amountsorted);
							break;
					} // switch (operationListofProducts) curly bracket
					if (returnMenucheck() == 2)
						powerListofProductsmenu = 0;
						
				} // while(powerlistofProductsmenu) curly bracket
				break;  // Break of case 2 ( List Products )
			
			case 3 : // Update stock
				do {
					printf("Select store 1-10 : ");
					scanf("%d", &storeid);
					printf("Enter product id in store %d : ", storeid);
					scanf("%d", &productid);
					updateStock(amount, &storeid, &productid);
				} while (returnMenucheck() == 1);
				break;
			case 4 : // Quit
				printf("\nBYE...\n");
				printf("***********************************************************\n");
				power = 0;
				break;
		} // switch(operation) curly bracket
	} // while (power) curly bracket

	return(0);
}


/* amountofStores() Function */
void amountofStores(int amount[][10])
{
	int amountEnter, storeid, productid;
	
	printf("Enter product id : "); 
	scanf("%d", &productid);  // Read productid
	printf("Enter store id : ");		
	scanf("%d", &storeid);	// Read storeid
	printf("Enter amount : ");
	scanf("%d", &amountEnter);	// Read amount
	
	amount[storeid-1][productid-1] = amountEnter;
}


/* stockControl() Function */
void stockControl(int amount[][10], int *productid, int *storeid)
{
	printf("Store %d: product %d amount: %d\n", *storeid, *productid, amount[*storeid-1][*productid-1]);
}


/* allProducts() Function */
void allProducts (int amount[][10], int *storeid)
{
	int i,j;
	printf("--------------------------------------------\n");
	printf("Product 1	2 	3 	4 	5	6	7	8	9	10\n"); // For chart
	printf("Stock "); // For chart
	for (i=0;i<10;i++)
		printf("	%d",amount[*storeid-1][i]);
	printf("\n");
}
	


/* compareProducts() Function */
void compareProducts (int amount[][10], int *storeid, int *storeidcompare)
{
	int i;
	printf("\nProducts exist in store %d and not in store %d:\n", *storeid, *storeidcompare);
	printf("Product ");
	for (i=0;i<10;i++) // For determine products
	{
		if ( amount[*storeid-1][i] > 0 && amount[*storeidcompare-1][i] == 0)
			printf("%d ", i+1);
	}
	printf("\nAmount ");
	for (i=0;i<10;i++) // For determine amounts
	{
		if ( amount[*storeid-1][i] > 0 && amount[*storeidcompare-1][i] == 0)
			printf("%d ", amount[*storeid-1][i+1]);
	}
	printf("\n");
}


/* comparebothProducts() Function */
void comparebothProducts (int amount[][10], int *storeid, int *storeidcompare)
{
	int i;
	printf("\nProducts available both store %d and %d: ", *storeid, *storeidcompare);
	for (i=0;i<10;i++) // For determine products
	{
		if ( amount[*storeid-1][i] > 0 && amount[*storeidcompare-1][i] > 0)
			printf("%d ", i+1);
	}		
	printf("\n");
}


/* sortedProducts() Function */
void sortedProducts (int amount[][10], int amountsorted[]) 
{
	int i,j,sum,storage,min,index[10];
	for (j=0;j<10;j++) // For storing sum of products to "amountsorted" array
	{
		sum=0;
		for (i=0;i<10;i++)
			sum += amount[i][j];
		amountsorted[j] = sum; // Storage product amounts in "amountsorted" 1-D array		
	}
	
	
	printf("Product ");
	for (i=0; i<10; i++) // Sorting (selection sort) 1-D array and output the product number in ascending order
    {	
	    min = i;
        for (j=i+1; j<10-1; j++)
        {
            if ( amountsorted[j] < amountsorted[min] )
            	min = j;  // Finding minimum value 
        }
        storage = amountsorted[i];
        amountsorted[i] = amountsorted[min];
        amountsorted[min] = storage;
        printf("%d\t", min+1);  // Output product id's
	}
		
	printf("\nAmount ");
	for (i=0;i<10;i++) // For output the SORTED amount of products
		printf("%d\t", amountsorted[i]);
	
}


/* updateStock() Function */
void updateStock (int amount[][10], int *storeid, int *productid)
{
	int newStock;
	printf("Current stock of %d in store %d : %d \n", *productid, *storeid, amount[*storeid-1][*productid-1]);
	printf("Enter new stock : ");  // Read new stock value
	scanf("%d", &newStock);
	if (newStock == 0)  // Check out of stock
		printf("Product %d is out of stock in store %d\n", *productid, *storeid);	
	amount[*storeid-1][*productid-1] = newStock;
	printf("Done!\n");
}


/* returnMenucheck() Function */
int returnMenucheck ()
{
	int selection;
	do {
		printf("---------------------------------------------------------------------\n");
		printf("1- Continue\n");
		printf("2- Return main menu\n");
		printf("Selection : ", selection);
		scanf("%d",&selection);
	} while ( selection != 1 && selection != 2 );
	return (selection);
}

