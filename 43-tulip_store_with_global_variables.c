#include <stdio.h>
/* Initial Prices and Stocks */
int redtulip=0;
int pinktulip=0;
int whitetulip=0;
int yellowtulip=0;
int blacktulip=0;
int redtulipprice=15;
int pinktulipprice=16;
int whitetulipprice=17;
int yellowtulipprice=18;
int blacktulipprice=30;
int cash=0;

/* Function Definitions */
void printMainMenu(void);
void printStockInformation(void);
void printProductPrices(void);
void printProducts(void);
void printCashInfo(void);
int stockControl(int,int);
void updateStocks(void);
void updatePrices(void);
void sell(void);
void addMoney(int);
int calculateBill(int,int);
void printoperationsafterupdate(void);
void printoperationsafterupdateprices(void);
void operationsafterselling(void);

/* Main Function */ 
int main (void)
{
	printMainMenu();
	return(0);
}


/* MAIN MENU FUNCTION */
void printMainMenu(void)
{
	int selection,selection2;
	printf("_______________\n");
	printf("OPERATIONS :\n");
	printf("_______________\n");
	printf("1. Stock Info\n");
	printf("2. Update Stocks\n");
	printf("3. Update Prices\n");
	printf("4. Sell\n");
	printf("5. Current cash info\n");
	printf("6. Quit\n");
	
	printf("Select your operation : ");
	scanf("%d", &selection);
	switch (selection)
	{
		case 1:		// FOR 'Stock Info'
			printStockInformation();
			printMainMenu();
			break;
	
		case 2:		// FOR 'Update Stocks'
			printStockInformation();
			updateStocks();
			break;
		
		case 3:		// FOR 'Update Prices'
			printProductPrices();
			updatePrices();
			break;
	
		case 4:		// FOR 'Sell'
			printProducts();
			sell();
			break;
		
		case 5:		// FOR 'Current cash info'
			printCashInfo();
			printMainMenu();
			break;
	
		case 6:		// FOR 'Quit'
			printf("Bye !\n");
			break;
	}
}


/* STOCK INFORMATION FUNCTION */
void printStockInformation(void)
{
	printf("**************************************\n");
	printf("Current Stock Information :\n");
	printf("1. Red Tulip : %d\n",redtulip);
	printf("2. Pink Tulip : %d\n",pinktulip);
	printf("3. White Tulip : %d\n",whitetulip);
	printf("4. Yellow Tulip : %d\n",yellowtulip);
	printf("5. Black Tulip : %d\n",blacktulip);
	printf("**************************************\n");
}


/* UPDATE STOCKS FUNCTION */
void updateStocks(void)
{
	int selection,enter;
	printf("Select product : ");
	scanf("%d", &selection);
	switch (selection)
	{
		case 1:		// FOR UPDATING STOCKS OF RED TULIP
		printf("Enter stock for 'Red Tulip' product : ");
		scanf("%d",&enter);
		redtulip = enter;
		break;
		
		case 2:		// FOR UPDATING STOCKS OF PINK TULIP
		printf("Enter stock for 'Pink Tulip' product : ");
		scanf("%d",&enter);
		pinktulip = enter;
		break;
		
		case 3:		// FOR UPDATING STOCKS OF WHITE TULIP
		printf("Enter stock for 'White Tulip' product : ");
		scanf("%d",&enter);
		whitetulip = enter;
		break;
		
		case 4:		// FOR UPDATING STOCKS OF YELLOW TULIP
		printf("Enter stock for 'Yellow Tulip' product : ");
		scanf("%d",&enter);
		yellowtulip = enter;
		break;
		
		case 5:		// FOR UPDATING STOCKS OF BLACK TULIP
		printf("Enter stock for 'Black Tulip' product : ");
		scanf("%d",&enter);
		blacktulip = enter;
		break;
	}
		printStockInformation();
		printoperationsafterupdate();
}


/* OPERATIONS AFTER UPDATE MENU */
void printoperationsafterupdate(void)
{
	int enter;
	printf("______________\n");
	printf("OPERATIONS:\n");
	printf("_______________\n");
	printf("1. Continue update stock\n");
	printf("2. Return main menu\n");
	printf("Select your operation : ");
	scanf("%d",&enter);
	if (enter==1)
	{
		printStockInformation();
		updateStocks();
	}
	else if (enter==2)
		printMainMenu();	
}


/* PRODUCT PRICES INFORMATION FUNCTION */
void printProductPrices(void)
{
	printf("**************************************\n");
	printf("Prices :\n");
	printf("	1. Red Tulip : %d TL\n", redtulipprice);
	printf("	2. Pink Tulip : %d TL\n", pinktulipprice);
	printf("	3. White Tulip : %d TL\n", whitetulipprice);
	printf("	4. Yellow Tulip : %d TL\n", yellowtulipprice);
	printf("	5. Black Tulip : %d TL\n", blacktulipprice);
	printf("**************************************\n");
} 


/* UPDATE PRICES FUNCTION */
void updatePrices(void)
{
int selection,enter;
	printf("Select product : ");
	scanf("%d", &selection);
	switch (selection)
	{
		case 1:		// FOR UPDATING PRICES OF RED TULIP
		printf("Enter new price for 'Red Tulip' product : ");
		scanf("%d",&enter);
		redtulipprice = enter;
		break;
	
		case 2:		// FOR UPDATING PRICES OF PINK TULIP
		printf("Enter new price for 'Pink Tulip' product : ");
		scanf("%d",&enter);
		pinktulipprice = enter;
		break;
	
		case 3:		// FOR UPDATING PRICES OF WHITE TULIP
		printf("Enter new price for 'White Tulip' product : ");
		scanf("%d",&enter);
		whitetulipprice = enter;
		break;
	
		case 4:		// FOR UPDATING PRICES OF YELLOW TULIP
		printf("Enter new price for 'Yellow Tulip' product : ");
		scanf("%d",&enter);
		yellowtulipprice = enter;
		break;
		
		case 5:		// FOR UPDATING PRICES OF BLACK TULIP
		printf("Enter new price for 'Black Tulip' product : ");
		scanf("%d",&enter);
		blacktulipprice = enter;
		break;
	}
		printProductPrices();
		printoperationsafterupdateprices();
}


/* OPERATIONS AFTER PRICES UPDATE MENU  */
void printoperationsafterupdateprices(void)
{
	int enter;
	printf("______________\n");
	printf("OPERATIONS:\n");
	printf("_______________\n");
	printf("1. Continue update price\n");
	printf("2. Return main menu\n");
	printf("Select your operation : ");
	scanf("%d",&enter);
	if (enter==1)
	{
		printProductPrices();
		updatePrices();
	}
	else if (enter==2)
		printMainMenu();	
}


/* PRODUCTS AND STORAGES FUNCTION */
void printProducts(void)
{
	printf("******************************************\n");
	printf("Products:\n");
	printf("1. Red Tulip - %d TL - ( %d )\n", redtulipprice, redtulip);
	printf("2. Pink Tulip - %d TL - ( %d )\n", pinktulipprice, pinktulip);
	printf("3. White Tulip - %d TL - ( %d )\n", whitetulipprice, whitetulip);
	printf("4. Yellow Tulip - %d TL - ( %d )\n", yellowtulipprice, yellowtulip);
	printf("5. Black Tulip - %d TL - ( %d )\n", blacktulipprice, blacktulip);
}


/* SELL FUNCTION */
void sell(void)
{
	int selection,enter,price;
	printf("Select product : ");
	scanf("%d", &selection);
	switch (selection)
	{
		case 1:    // FOR SELLING RED TULIP
		printf("Enter how many sold 'Red Tulip' product : ");
		scanf("%d",&enter);
		if ( stockControl(redtulip,enter) == 0 )
		{
			printf("SORRY... 'Red Tulip' product out of stock.\n");
			operationsafterselling();
	    }
	    else
	    {
		price = calculateBill(redtulipprice, enter);
		addMoney(price); 
		redtulip = redtulip - enter;
	    }
		break;
		
		case 2:		// FOR SELLING PINK TULIP
		printf("Enter how many sold 'Pink Tulip' product : ");
		scanf("%d",&enter);
		if ( stockControl(pinktulip,enter) == 0 )
		{
			printf("SORRY... 'Pink Tulip' product out of stock.\n");
			operationsafterselling();
		}
		else
		{
		price = calculateBill(pinktulipprice, enter);
		addMoney(price);
		pinktulip = pinktulip - enter;
		}
		break;
		
		case 3:		// FOR SELLING WHITE TULIP
		printf("Enter how many sold 'White Tulip' product : ");
		scanf("%d",&enter);
		if ( stockControl(whitetulip,enter) == 0 )
		{
			printf("SORRY... 'White Tulip' product out of stock.\n");
			operationsafterselling();
		}
		else
		{
		price = calculateBill(whitetulipprice, enter);
		addMoney(price);
		whitetulip = whitetulip - enter;
		}
		break;
		
		case 4:		// FOR SELLING YELLOW TULIP
		printf("Enter how many sold 'Yellow Tulip' product : ");
		scanf("%d",&enter);
		if (enter>yellowtulip)
		{
			printf("SORRY... 'Yellow Tulip' product out of stock.\n");
			operationsafterselling();
		}
		else
		{
		price = calculateBill(yellowtulipprice, enter);
		addMoney(price);
		yellowtulip = yellowtulip - enter;
		}	
		break;
		
		case 5:		// FOR SELLING BLACK TULIP
		printf("Enter how many sold 'Black Tulip' product : ");
		scanf("%d",&enter);
		if ( stockControl(blacktulip,enter) == 0 )
		{
			printf("SORRY... 'Black Tulip' product out of stock.\n");
			operationsafterselling();
		}
		else
		{
		price = calculateBill(blacktulipprice, enter);
		addMoney(price);
		blacktulip = blacktulip - enter;
		}
		break;
	}
	printProducts();
	operationsafterselling();
}


/* OPERATIONS MENU AFTER SELLING FUNCTION */
void operationsafterselling(void)
{
	int enter;
	printf("______________\n");
	printf("OPERATIONS:\n");
	printf("_______________\n");
	printf("1. Continue selling\n");
	printf("2. Return main menu\n");
	printf("Select your operation : ");
	scanf("%d",&enter);
	if (enter==1)
	{
		printProducts();
		sell();
	}
	else if (enter==2)
		printMainMenu();	
}


/* MONEY UPDATE FUNCTION */
void addMoney(int input)
{
	printf("Add %d TL to cash register.\n", input);
	cash = cash + input;
}


/* CALCULATE BILL FUNCTION */
int calculateBill(int productPrice, int numberOfSold)
{
	int resultant;
	resultant = numberOfSold*productPrice;
	printf("%d * %d = %d.\n", numberOfSold ,productPrice ,resultant);
	return(resultant);
}


/* STOCK CONTROL FUNCTION */
int stockControl(int productStockInfo, int numberOfSold)
{
	if (numberOfSold>productStockInfo)
		return 0;
	else
		return 1;
}


/* CASH INFORMATION FUNCTION */
void printCashInfo(void)
{
	printf("**************************************\n");
	printf("Current cash information : %d TL\n",cash);
	printf("**************************************\n");
}


