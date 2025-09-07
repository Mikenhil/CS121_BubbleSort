/*
 *
 *
 * Algorithm
 *
 * PRE-DECLARE FUNCTIONS sort(), printValues(), swap()
 *
 * FUNCTION main()
 *
 * 	CREATE VARIABLE INTEGER list_max assign 9
 * 	CREATE VARIABLE INTEGER[] values assign [7, 3, 9, 4, 6, 1, 2, 8, 5]
 *
 * 	sort(list_max, values)
 *	
 *	return 0
 *
 * FUNCTION printValues(max, numbers) PARAMETERS: integer max, integer[] values
 * 	PRINT "["
 * 	CREATE VARIABLE INTEGER i
 *	FORLOOP INCREMENT i (0 to max)
 *		IF i == max - 1
 *			PRINT "values[i]"
 *		ELSE
 *			PRINT "values[i], " 
 *	PRINT "]\n"
 *
 * FUNCTION swap(x, y) PARAMETERS: integer* x, integer* y
 * 	CREATE VARIABLE INTEGER temp ASSIGN x
 * 	ASSIGN ADDRESS x as y
 * 	ASSIGN ADDRESS y as temp
 *
 * FUNCTION sort() PARAMETERS: int max, integer[] values
 *	CREATE DUAL_VARIABLE INTEGER i, j assign NULL
 *
 *	FORLOOP Iterate on i (0 to max - 1)
 *		FORLOOP Iterate on j (0 to max - 1)
 *			IF values+j > values + (j+1)
 *				
 *				CALL FUNCTION swap(values[j], values[j + 1])
 *				CALL FUNCTION printValues(max, values)
*/

#include <stdio.h>

void sort(int max, int values[]);
void printValues(int max, int values[], int swapped_a, int swapped_b);
void swap(int* x, int* y);

int main() {
	int list_max = 9;
	int values[] = {7, 3, 9, 4, 6, 1, 2, 8, 5};

	sort(list_max, values);

	return 0;
}

void sort(int max, int values[]){
	
	int i, j;
	for(i = 0; i < max - 1; i++) {
		for (j = 0; j < max - 1; j++) {
			if (values[j] > values[j + 1]){
				swap(values + j, values + (j + 1));
				printValues(max, values, *(values+j), *(values + (j+1)));
			}
		}
	}

}

void printValues(int max, int values[], int swapped_a, int swapped_b){
	
	printf("[");
		
	int i;
	for (i = 0; i < max; i++){

		// Cleans up the end value so there are no extra spaces or commas.
		if (i == max - 1) {
			printf("%d", values[i]);
		}
		else {
			printf("%d, ", values[i]);
	
		}
	}
	
	// Added additional output for the swapped elements
	printf("] Swapped %d with %d \n", swapped_a, swapped_b);
}

void swap(int* a, int* b) {
	int temp = *a;

	*a = *b;
	*b = temp;
}
