#include <stdio.h>
int main(void)
{
	int power=1,selection,customerselect,howmanytickets,row,j,AcounterA=0,ScounterA=0,AcounterB=0,ScounterB=0,giveback,adminselect,ScounteradminA=13,ScounteradminB=26;
	char category,givecategory;
	
	do 
	{
		printf("----->Welcome to ABC Cinema<-----\n");
		printf("->Choose user:\n");
		printf("1. Admin\n2. Customer\n");
		scanf("%d",&selection);
		
		switch (selection)
		{
			case 1:
				printf("->Choose your request:\n");
				printf("1. Check availability\n");
				printf("2. Show number of reservations\n");
				printf("3. Check gross revenue\n");
				printf("4. Switch role\n");
				printf("5. Exit\n");
				scanf("%d", &adminselect);
				
				switch(adminselect)
				{
					case 1:		// Seat availability
						printf("Current seat availability:");
						printf("		STAGE		\n");
						printf("Category A\n");		// Category A
							
						for (row=1;row<=5;row++)
							{
								printf("Row %d ",row);
								
								if (row==1)
								{
									for (j=1;j<=10;j++)
									{				
										printf("S");
										printf(" ");
										ScounterA+=1;
									}
								}
								else if (row==2)
								{
									printf("S ");
									ScounterA+=1;
							
									for (j=1;j<=9;j++)
									{				
										printf("A");
										printf(" ");
										AcounterA+=1;
									}
								}
								else
								{
									for (j=1;j<=10;j++)
									{				
										printf("A");
										printf(" ");
										AcounterA+=1;
									}
								}
								printf("\n");
							}
						
						printf("		STAGE		\n");
						printf("Category B\n");		// Category B
							
						for (row=1;row<=5;row++)
						{
							printf("Row %d ",row);
								
							if (row==1 || row==2)
							{
								for (j=1;j<=10;j++)
								{				
									printf("S");
									printf(" ");
									ScounterB+=1;
								}
							}
							else if (row==3)
							{
								for (j=1;j<=6;j++)
								{
								printf("S");
								printf(" ");
								ScounterB+=1;
								}
								for (j=1;j<=4;j++)
								{
									printf("A");
									printf(" ");
									AcounterB+=1;
								}
							}
							else
							{
								for (j=1;j<=10;j++)
								{
									printf("A");
									printf(" ");
									AcounterB+=1;
								}
							}
							printf("\n");
						}
						printf("Category A: Available seats: %d\nCategory B: Available seats:  %d\n", AcounterA, AcounterB);
						break;
						
						case 2:  // Show number of reservations
						printf("Category A: sold seats: %d\nCategory B: sold seats: %d\n",ScounteradminA, ScounteradminB);
						break;
						
						case 3: //	Check gross revenue
						printf("Daily earnings\nCategory A: %dtl\nCategory B: %dtl\nTotal: %dtl\n", ScounteradminA*30, ScounteradminB*20, (ScounteradminA*30)+(ScounteradminB*20));
						
						case 4: // Switch Role
						break;
						
						case 5: // Exit
						printf("Thank you for choosing our movie theater\nHave a good day...");
						power=0;
						break;
				}//Switch Adminselect Closer
				break;
			case 2:
				printf("->Choose your request:\n");
				printf("1. Book seats\n");
				printf("2. Check availability\n");
				printf("3. Switch Role\n");
				printf("4. Cancel the ticket\n");
				printf("5. Exit\n");
				scanf("%d", &customerselect);
			
				switch (customerselect)
				{
					case 1:
						printf("How many tickets do you want? (You can buy up to 9 ticket at once)\n");
						scanf("%d", &howmanytickets);
						printf("Which category do you want ? A or B ?\n");
						scanf(" %c", &category);
						if (row==1 || ( row==1 & category=='B' ) || ( row==2 & category=='B' ) )
							printf("This row of this category is full, please select another row or category !\n"); 
						else if (category=='A')
							printf("%d seats are booked from %c category, row 2\n", howmanytickets, category);
						else if (category=='B' && howmanytickets<=4)
							printf("%d seats are booked from %c category, row 3\n", howmanytickets, category);
						else if (category=='B' && howmanytickets>4)
							printf("%d seats are booked from %c category, row 3 and row 4\n", howmanytickets, category);
						
						/* Category A Selected*/
						if (category==('A'))
						{
							printf("		STAGE		\n");
							printf("Category A\n");
							
							for (row=1;row<=5;row++)
							{
								printf("Row %d ",row);
								
								if (row==1)
								{
									for (j=1;j<=10;j++)
									{				
										printf("S");
										printf(" ");
									}
								}
								else if (row==2)
								{
									printf("S ");
									for (j=0;j<howmanytickets;j++)
									{				
										printf("*");
										printf(" ");
									}
						
									for (j=1;j<=9-howmanytickets;j++)
									{				
										printf("A");
										printf(" ");
									}
								}
								else
								{
									for (j=1;j<=10;j++)
									{				
										printf("A");
										printf(" ");
									}
								}
								printf("\n");
							}
							
							printf("Category B\n");
							
							for (row=1;row<=5;row++)
							{
								printf("Row %d ",row);
									
									if (row==1 || row==2)
									{
										for (j=1;j<=10;j++)
										{				
											printf("S");
											printf(" ");
										}
									}
									else if (row==3)
									{
										for (j=1;j<=6;j++)
										{				
											printf("S");
											printf(" ");
										}
										for (j=7;j<=10;j++)
										{
											printf("A");
											printf(" ");
										}
									}
									else
									{
										for (j=1;j<=10;j++)
										{				
											printf("A");
											printf(" ");
										}
									}
								printf("\n");
							}
							printf("You should pay %d*30TL=%d\n",howmanytickets,howmanytickets*30);
						}
						
						/* Category B Selected*/
						if (category==('B'))
						{
							printf("		STAGE		\n");
							printf("Category A\n");
							
							for (row=1;row<=5;row++)
							{
								printf("Row %d ",row);
								
								if (row==1)
								{
									for (j=1;j<=10;j++)
									{				
										printf("S");
										printf(" ");
									}
								}
								else if (row==2)
								{
									printf("S ");
									for (j=2;j<=10;j++)
									{				
										printf("A");
										printf(" ");
									}
								}
								else
								{
									for (j=1;j<=10;j++)
									{				
										printf("A");
										printf(" ");
									}
								}
								printf("\n");
							}
							
							printf("Category B\n");
							
							for (row=1;row<=5;row++)
							{
								printf("Row %d ",row);
									
									if (row==1 || row==2)
									{
										for (j=1;j<=10;j++)
										{				
											printf("S");
											printf(" ");
										}
									}
									else if (row==3)
									{
										for (j=1;j<=6;j++)
										{				
											printf("S");
											printf(" ");
										}
										if (howmanytickets<=4)		// For ticket<=4
										{
											for (j=1;j<=howmanytickets;j++)
											{
												printf("*");
												printf(" ");
											}
											for(j=1;j<=4-howmanytickets;j++)
											{
													printf("A");
													printf(" ");
											}
										}
									
									}
									else if (row==4)	
									{
										if (howmanytickets>4 && howmanytickets<10)			// For ticket>4
										{
											for (j=1;j<=(howmanytickets-4);j++)
											{
												printf("*");
												printf(" ");
											}
											for(j=1;j<=10-(howmanytickets-4);j++)
											{
													printf("A");
													printf(" ");
											}
										}
								  else
										{
										for(j=1;j<=10;j++)
											{
													printf("A");
													printf(" ");
											}
										}
									}
									else
									{
										for (j=1;j<=10;j++)
										{				
											printf("A");
											printf(" ");
										}
									}
								printf("\n");
							}
							printf("You should pay %d*20TL=%d\n",howmanytickets,howmanytickets*20);
						}
						break;
						// Case 2
					case 2:		// Seat availability
						printf("Current seat availability:");
						printf("		STAGE		\n");
						printf("Category A\n");		// Category A
							
						for (row=1;row<=5;row++)
							{
								printf("Row %d ",row);
								
								if (row==1)
								{
									for (j=1;j<=10;j++)
									{				
										printf("S");
										printf(" ");
										ScounterA+=1;
									}
								}
								else if (row==2)
								{
									printf("S ");
									ScounterA+=1;
							
									for (j=1;j<=9;j++)
									{				
										printf("A");
										printf(" ");
										AcounterA+=1;
									}
								}
								else
								{
									for (j=1;j<=10;j++)
									{				
										printf("A");
										printf(" ");
										AcounterA+=1;
									}
								}
								printf("\n");
							}
						
						printf("		STAGE		\n");
						printf("Category B\n");		// Category B
							
						for (row=1;row<=5;row++)
						{
							printf("Row %d ",row);
								
							if (row==1 || row==2)
							{
								for (j=1;j<=10;j++)
								{				
									printf("S");
									printf(" ");
									ScounterB+=1;
								}
							}
							else if (row==3)
							{
								for (j=1;j<=6;j++)
								{
								printf("S");
								printf(" ");
								ScounterB+=1;
								}
								for (j=1;j<=4;j++)
								{
									printf("A");
									printf(" ");
									AcounterB+=1;
								}
							}
							else
							{
								for (j=1;j<=10;j++)
								{
									printf("A");
									printf(" ");
									AcounterB+=1;
								}
							}
							printf("\n");
						}
						printf("Category A: Available seats: %d\nCategory B: Available seats:  %d\n", AcounterA, AcounterB);
						break;
					// Case 3
					case 3:			// Switch the role
						break;
					// Case 4
					case 4:		    // Cancel Ticket
						printf("How many ticket will you give back ?\n");
						scanf("%d", &giveback);
						printf("Which category ?  A or B ?\n");
						scanf(" %c", &givecategory);
						if (givecategory=='A')
						{
							printf("%d seats are canceled from A Category",giveback);
							printf("Money that repay is %d*30=%dtl",giveback, giveback*30);
						}
						else if (givecategory=='B')
						{
							printf("%d seats are canceled from B Category\n",giveback);
							printf("Money that repay is %d*20=%dtl\n",giveback, giveback*20);
						}
						break;
						// Case 5
						case 5:		//Quit
						printf("Thank you for choosing our movie theater\nHave a good day...");
						power=0;
						break;
				break;
				} // Switch Customer Close
		} // Switch Selection Close
	} // Do While Close
	while (power!=0);
	return(0);
}  // Main Close
