/*
 *
 *
 * Algorithm
 *
 * PRE-DECLARE printValues(), swap()
 *
 * FUNCTION main()
 *
 * 	CREATE VARIABLE INTEGER list_max assign 9
 * 	CREATE VARIABLE INTEGER[] values assign [7, 3, 9, 4, 6, 1, 2, 8, 5]
 *
 * 	CREATE DUAL_VARIABLE INTEGER i, j assign NULL
 *
 * 	FORLOOP Iterate on i (0 to list_max - 1)
 * 		FORLOOP Iterate on j (0 to list_max - 1)
 * 			IF values[j] > values[j + 1]
 *
 * 				CALL FUNCTION swap(values[j], values[j + 1])
 *				CALL FUNCTION printValues()
 *
 *
 * FUNCTION printValues(max, numbers) PARAMETERS: integer max, integer[] numbers
 * 	PRINT "["
 * 	CREATE VARIABLE INTEGER i
 *	FORLOOP INCREMENT i (0 to max)
 *		IF i == max - 1
 *			PRINT "i"
 *		ELSE
 *			PRINT "i, " 
 *	PRINT "]\n"
 *
 * FUNCTION swap(x, y) PARAMETERS: integer* x, integer* y
 * 	CREATE VARIABLE INTEGER temp ASSIGN x
 * 	ASSIGN ADDRESS x as y
 * 	ASSIGN ADDRESS y as temp
 *
 * FUNCTION sort()
 *	
 *
 *
 *
 *
*/

#include <stdio.h>

void printValues(int max, int numbers[]);
void swap(int* x, int* y);

int main() {

	int list_max = 9;
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

	int i;
	int j;

	//printf("Test x1: %p %d\n", &i, i);
	//printf("Test y2: %p %d\n", &j, j);

	//swap(&i, &j);

	//printf("Test x3: %p %d\n", &i, i);
	//printf("Test y3: %p %d\n", &j, j);

	for(i = 0; i < list_max - 1; i++) {
		for (j = 0; j < list_max - 1; j++) {
			//printf("Testing list iteration. Current Value is %d\n", values[j]);
			if (values[j] > values[j + 1]){
				swap(&values[j], &values[j + 1]);
				printValues(list_max, values);
			}
		}
	}


	return 0;
}


void printValues(int max, int numbers[]){
	
	printf("[");
		
	int i;
	for (i = 0; i < max; i++){
		if (i == max - 1) {
			printf("%d", numbers[i]);
		}
		else {
			printf("%d, ", numbers[i]);
	
		}
	}

	printf("]\n");
}

void swap(int* x, int* y) {
	int temp = *x;

	(*x) = *y;
	(*y) = temp;
}
