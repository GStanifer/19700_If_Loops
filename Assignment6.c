/*
Program:  Assignment 6, Program 1
Made by:  Garrett Stanifer
Date:  3/17/2021
Using if loops, creates 4 different patterns 
*/
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>
int  main()
{
	int rows;
	int cols;

	printf("Pattern 1\n");
	for (rows = 1; rows <= 6; rows++)  //Initial loop for the length of the pattern
	{
		for (cols = 1; cols <= 6; cols++)  //Loop for the width of the pattern
		{
			if (cols == rows) {  //When columns = rows, prints 7
				printf("7");
			}
			else if (rows > cols) {  //When rows > columns, prints 6
				printf("6");
			}
			else if (rows < cols) {  //when rows < columns, prints 8
				printf("8");
			}
		}
		printf("\n");
	}
	printf("\n");

	printf("Pattern 2\n");
	for (rows = 6; rows >= 1; rows--) {  //Loop controlling length of pattern

		for (cols = 1; cols <= (2 * rows - 1); cols++) {  //Loop controlling width of code
			printf("*");  //Prints "*" 
		}
		printf("\n");
	}

	printf("\n");
	printf("Pattern 3\n");
	for (rows = 1; rows <= 6; rows++) {  //Controls pattern length

		for (cols = 1; cols <= 6; cols++) {  //Controls pattern width
			if (cols <= 6 - rows)
				printf(" ");  //When columns <= 6-row number, prints a space
			else
				printf("*");  //Otherwise it prints an "*"
		}
		printf("\n");
	}

	printf("\n");

	printf("Pattern 4\n");

	for (rows = 1; rows <= 9; rows++) {  //Controls pattern length
		for (cols = 1; cols <= rows - 1; cols++) {  //Controls pattern width
			printf(" "); //When this is true, prints a space
		}
		printf("%d", rows); //Otherwise print the amount of rows
		printf("\n");
	}
}
