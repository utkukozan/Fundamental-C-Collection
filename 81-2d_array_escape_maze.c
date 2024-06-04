#include <stdio.h>
int main(void)
{
	char arr[5][5];
	int i,j,movement,x,y;
	
	// INITIAL�ZE //
	for (i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{
			arr[i][j] = '*';
		}
	}
	
	// INPUT START LOCATION FROM USER AND MODIFY THE ARRAY  //
	printf("Input the start location of the robot as row and column numbers: ");
	scanf("%d %d",&x,&y);
	arr[x][y] = 'R';
	
	for (i=0;i<5;i++)
	{
		for(j=0;j<5;j++)
		{	
			printf("%c",arr[i][j]);
		}
		printf("\n");
	}
	
	// START //
	do
	{
		printf("1: Right, 2: Left, 3: Down, 4: Up\n");
		printf("\nInput movement command (-1 to exit) : ");
		scanf("%d", &movement);	
		switch (movement)
		{
			case 1: // MOVEMENT RIGHT
			{
				arr[x][y] = '*';
				arr[x][++y] = 'R';
				
				if (y<0 || y>4) // Check the robot exit from maze
				{
					printf("Robot exits from the maze !\n");
					printf("Bye !");
					return(0);
				}
				else // PRINT THE NEW POSITION
				{
					for (i=0;i<5;i++)
					{
						for(j=0;j<5;j++)
						{		
							printf("%c",arr[i][j]);
						}
							printf("\n");
					}
				}
			}
			break;
			
			case 2: // MOVEMENT LEFT
			{
				arr[x][y] = '*';
				arr[x][--y] = 'R';
				
				if (y<0 || y>4) // Check the robot exit from maze
				{
					printf("Robot exits from the maze !\n");
					printf("Bye !");
					return(0);
				}
				else  // PRINT THE NEW POSITION
				{
					for (i=0;i<5;i++)
					{
						for(j=0;j<5;j++)
						{		
							printf("%c",arr[i][j]);
						}
							printf("\n");
					}
				}
			}
			break;
			
			case 3: // MOVEMENT DOWN
			{
				arr[x][y] = '*';
				arr[++x][y] = 'R';
				
				if (x<0 || x>4)	// Check the robot exit from maze
				{
					printf("Robot exits from the maze !\n");
					printf("Bye !");
					return(0);
				}
				else // PRINT THE NEW POSITION
				{
					for (i=0;i<5;i++)
					{
						for(j=0;j<5;j++)
						{		
							printf("%c",arr[i][j]);
						}
							printf("\n");
					}
				}
			}
			break;
			
			case 4: // MOVEMENT UP 
			{
				arr[x][y] = '*';
				arr[--x][y] = 'R';
				
				if (x<0 || x>4)	// Check the robot exit from maze
				{
					printf("Robot exits from the maze !\n");
					printf("Bye !");
					return(0);
				}
				else // PRINT THE NEW POSITION
				{
					for (i=0;i<5;i++) 
					{
						for(j=0;j<5;j++)
						{		
							printf("%c",arr[i][j]);
						}
							printf("\n");
					}
				}
			}
			break;
			
		}	
	}while (movement != -1); // When user input '-1' to exit
	
	printf("Bye...");
	return(0);
}
