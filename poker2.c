#include <stdio.h>

//Static and const to ensure it never accidentally gets changed during the runtime.
static const int numberCards = 5;
static const int maxVal = 13; //There are only 13 possible values

struct hand{
	char suit;
	int value;
	
}card[5];

void printHand(struct hand current); //Pass the whole structure and print
void flushChecking(struct hand current[]); //Sorting function by passing the structure array
void sortPtr(struct hand *ptr); //Sorting function using a pointer
int straightFunc(int first, int second); //Pass the member to determine the straightness

static int flush = 1;  //Flush is true by default, if it becomes zero later on it means it's not a flush. Global so that the functions can change it.

int main()
{
	int decision = 1;
	while (decision == 1)
	{
	printf("What is your hand?\n");
	int counts[13] = {0};
	int pair = 0, three = 0, four = 0;
	//Switches for flush or straight results
	int straight = 1; //This is also true by default so by the cheking it becomes zero
	
	for (int i = 0; i < numberCards; i++)
	{
		printf("Card[%d]'s suit(C D H S):\n", i+1);
		scanf(" %c", &card[i].suit);
		//the space before the %c helps to not take \n as the char
		printf("Card[%d]'s value(2-14, 14 = Ace):\n", i+1);
		//It starts at 2 so when we have to subtract it by 2, the index would start at 0.
		scanf("%d", &card[i].value);
		
		printHand(card[i]);
		
		//This is to count the number of times each value has appeared
		int index = card[i].value - 2;
        if (index < 0 || index >= maxVal) index = 0; //There are only 13 possible card values. Also to check if it goes out of bounds.
        	counts[index]++;
		
	}
	
	///Flush checking. This is to see if they all have the same suits
	flushChecking(card);
	
	//Sorting using pointer
	sortPtr(&card);
	
	
	for (int i = 0; i < numberCards-1; i++)
	{
		if (straightFunc(card[i].value, card[i+1].value) != 1)
		{
			straight = 0;
			break;
		}
	}
	
	//Checking for low ace
	if (card[0].value == 2 && card[1].value == 3 && card[2].value == 4 && card[3].value == 5 && card[4].value == 14)
        straight = 1;
	
	//Remember that the array for counts is incremented everytime it gets a card of the same value.
	for (int i = 0; i < maxVal; i++)
	{
		if (counts[i] == 2)
			pair++;
		if (counts[i] == 3)
			three++;
		if (counts[i] == 4)
			four++;
	}
		
	
	//Since every switch that needed to be checked is now done, we score now in the order of highest ranking to lowest.
	if (straight && flush)
		printf("Straight flush.\n");
	else if (four)
		printf("Four of a kind.\n");
	else if (three && pair)
		printf("Full house.\n");
	else if (flush)
		printf("Flush.\n");
	else if (straight)
		printf("Straight.\n");
	else if (three)
		printf("Three of a kind.\n");
	else if (pair == 2)
		printf("Two pairs.\n");
	else if (pair == 1)
		printf("One pair.\n");
	else
		printf("Nothing.\n");
	//If none of the above triggers, it's just nothing.
	
	printf("Do you want to try another hand? (1 for Yes, anything else for No)\n");
	scanf("%d", &decision);
	}
	return 0;
}

void sortPtr(struct hand *ptr)
{
	//Sorting for easier straight checking
	for (int i = 0; i < numberCards-1; i++)
		for (int j = 0; j < numberCards-1; j++)
			if ((ptr+j)->value > (ptr+j+1)->value)
			{
				struct hand temp = *(ptr+j);
				*(ptr+j) = *(ptr+j+1);
				*(ptr+j+1) = temp;
			}
}

		
void flushChecking(struct hand current[])
{
	for (int i = 0; i < 5; i++)
		if (i > 0 && card[i].suit != card[0].suit)
			flush = 0;
}

void printHand(struct hand current)
{
	printf("%d%c\t", current.value, current.suit);
	printf("\n");
}

int straightFunc(int first, int second)
{
	int result = second - first;
	return result;
}
