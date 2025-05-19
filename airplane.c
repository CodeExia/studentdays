#include <stdio.h>

struct seats{
	int row;
	char column;
	int availability;
};

void displaySeats(struct seats seat[5][4]);
int columnToIndex(char col);
int main()
{
	int decision = 1;
	struct seats seat[5][4];
	char input[10];
	int counter= 0; //The counter to full seats.
	
	//Loop to intializae the default, avaialble values. While it is possible to make a matrix or declare them manually, that's over 20 same operations.
	for (int i = 0; i < 5; i++)
		for (int j = 0; j < 4; j++)
		{
			seat[i][j].row = i+1; //Plus one since the output needs to start at 1
			seat[i][j].column = 'A' + j; //Increments from A to D. ASSCI are just ints read as characters.
			seat[i][j].availability = 0; //By default, the seats are avaiblble.
		}
		
	while (counter < 20) //5x4, pretty self explanatory
	{
		displaySeats(seat);
		//Displays the current matrix of seats.
		int row;
		char col;
		
		//If you want to end the program early
		printf("Do you want to assign a seat? (1 for Yes, anything else for No)\n");
		scanf("%d", &decision);
			if (decision != 1)
				break;
		
		//Column and row input
		printf("\nEnter which row:\n");
		scanf("%d", &row);
		int indexRow = row - 1; //Since its converting to index, we need to start at 0.
		
		printf("\nEnter which column:\n");
		scanf(" %c", &col);
		int indexCol = columnToIndex(col);
		//Calls the function to convert the letter into an index number for our struct
		
		if (row < 1 || row > 5 || indexCol == -1)
		{
			printf("Seat doesn't exist. Please try again.\n");
			continue;
		}
		
		if (seat[indexRow][indexCol].availability) //Remember, the default value is 0
			printf("Seat %d%c is already taken, please choose another seat.\n", row, col);
		else 
		{
			seat[indexRow][indexCol].availability = 1;
			counter++;
			printf("Seat %d%c has been assigned.\n", row, col);
		}	
	}
	
	printf("\nFinal seating arrangment:\n");
	displaySeats(seat);
	
	return 0;
}


int columnToIndex(char col)
{
	if (col >= 'A' && col <= 'D') //To isolate the inputs only from A to D.
		return col - 'A'; //Since 'A' is the start of the uppercase ASCCI characters, subtracting it from the col just ensures the index is 0-3.
	return -1;
}


void displaySeats(struct seats seat[5][4])
{
	printf("\nSeat availability:\n");
	for (int i = 0; i < 5; i++)
	{
		printf("%d\t", i+1); //This is the initial numbers. +1 so it doesn't start from zero.
		for (int j = 0; j < 4; j++)
		{
			if (seat[i][j].availability) //It's just a switch. If its 1 or occupied, then it returns a big X.
				printf("X\t");
			else 
				printf("%c\t", seat[i][j].column);
		}
		printf("\n"); //Just an escape character to the next line
	}
}