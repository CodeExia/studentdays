#include <stdio.h>
//It is simpler to separate each function into, well, a function.
//Enter a new record
//Display a record
//Change the price of the stock item
//Change the number onhand
//Also the selection of record should be a function too, since it's easier to just write 2 ifs

static const int max_stock = 50; //Maximum storage of the inventorty
int stock_count = 0; //Keeps track of how many stocks there are
int size = 14-3+1;

struct inventory {
	
	int style;
	int numberPairs[14-3+1];
	double price;
	
}stock[50];

int selectRecord();
int findStyle(int style);
void displayRecord();
void changePrice();
void enterNew();
void changeQuantity();

int main(){
	
	int choice;
	//Runs indefinitely until the user exists or the inventory gets maxed out
	while (1)
	{
		printf("\n");
		printf("\nInventory menu:\n");
		printf("1. Enter a new record.\n");
		printf("2. Display a record.\n");
		printf("3. Change price of a record.\n");
		printf("4. Change-on hand quantity.\n");
		printf("5. Exit\n");
		printf("Select (1-5):\n");
		scanf("%d", &choice);
		
		if (choice == 1)
			enterNew();
		else if (choice == 2)
			displayRecord();
		else if (choice == 3)
			changePrice();
		else if (choice == 4)
			changeQuantity();
		else if (choice == 5)
		{
			printf("Goodbye.\n");
			return 0;
		}
		else 
		{
			printf("Invalid choice, please try again:\n");
			continue;
		}
		
	}

}


int selectRecord()
{
	while (1)
	{
	int choice, index;
	printf("Please select how you want to choose a record:\n");
	printf("1. Stock number\n");
	printf("2. Style number\n");
	
	scanf("%d", &choice);
	if (choice == 1)
	{
		printf("Please enter a stock number:\n");
		scanf("%d", &index);
		if (index < 0 || index > max_stock)
			return -1;
		return index;
	}
	else if (choice == 2)
	{
		int styleNo;
		printf("Please enter a style numer:\n");
		scanf("%d", &styleNo);
		index = findStyle(styleNo);
		return index;
	}
	else 
		continue; //Continues until you enter a valid input
	}
}

int findStyle(int style)
{
	for (int i = 0; i < max_stock; i++)
	{
		if (stock[i].style == style)
			return i;
	}
	return -1;
}



void displayRecord()
{
	int index = selectRecord();
	if (index < 0)
	{
		printf("Record not found.\n");
		return;
	}
	struct inventory *ptr = &stock[index];
	printf("Record Stock #%d", index);
	printf("\nStyle: %d\n", ptr->style);
	printf("Price: %.2f\n", ptr->price);
	printf("On-hand:\n");
	for (int i = 0; i < size; i++)
	{
		printf("Size %2d - %3d pairs\n", 3+i, ptr->numberPairs[i]);
	}
}

void changePrice()
{
	int index = selectRecord();
	if (index < 0 || index > max_stock)
	{
		printf("Record not found.\n");
		return;
	}
	printf("Old price: $%.2f\n", stock[index].price);
	printf("New price: ");
	scanf("%lf", &stock[index].price);
	printf("\nPrice updated.\n");
}

void enterNew()
{
	struct inventory *ptr = &stock[stock_count];
	printf("New record #%d\n", stock_count);
	printf("Style: (0-50):");
	scanf("%d", &ptr->style);
	printf("\nPrice: ");
	scanf("%lf", &ptr->price);
	printf("\nEnter on-hand pairs for sizes 3 to 14:\n");
	//3 is the minimum size while 14 is the maximum
	for (int i = 0; i < size; i++)
	{
		printf("Size %d: ", 3+i);
		//3+i so that it increments for every instance
		scanf("%d", &ptr->numberPairs[i]);
	}
	printf("Record entered as stock #%d", stock_count);
	stock_count++;
}

void changeQuantity()
{
	if (stock_count == 0) 
	{
        printf("No stock records exist yet.  Please enter a record first.\n");
        return;
	}
	int index = selectRecord();
    if (index < 0 || index >= stock_count) 
	{
        printf("Record not found.  Cannot change quantity.\n");
        return;
    }
	struct inventory *ptr = &stock[index];
	while (1)
	{
		int quantity;
		int size;
		printf("Enter size to change (3-14) or (0 to be done): ");
		scanf("%d", &size);
		if (size == 0)
			break;
		if (size < 3 || size > 14)
		{
			printf("Invalid size, please try again.\n");
			continue;
		}
		printf("New quantity for size %d\n", size);
		scanf("%d", &quantity);
		ptr->numberPairs[size-3] = quantity;
		printf("\nUpdated size %d to %d pairs.\n", size, quantity);
	}
}
