#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
#include "Scanner.h"
#pragma warning(disable : 4996)
void icg_error(int n);

FILE *astFile;                          // AST file
FILE *sourceFile;                       // miniC source program
FILE *ucodeFile;                        // ucode file

#define FILE_LEN 30

void main(int argc, char *argv[])
{
	char fileName[FILE_LEN];
	int err;

	printf(" *** start of Mini C Compiler\n");
	if (argc < 2) {
		printf("\nEnter filename : ");
		scanf("%s", fileName);
	}
	if (argc != 1) {
		icg_error(1);
		exit(1);
	}

	printf("   * source file name: %s\n", fileName);

	err = fopen_s(&sourceFile, fileName, "r");
	if (err != 0) {
		icg_error(2);
		exit(1);
	}
	
	
	//struct tokenType token;
	
	
	/*
	token = scanner();
	
	while (token.number != teof) {

		printf("Current Token --> ");
		printToken(token);
		token = scanner();
		
	}
	*/

    parser();
	
	printf(" === start of ICG\n");
	printf(" > Not yet implemented...\n");

	//codeGen(root);
	printf(" *** end   of Mini C Compiler\n");
} // end of main

void icg_error(int n)
{
	printf("icg_error: %d\n", n);
	//3:printf("A Mini C Source file must be specified.!!!\n");
	//"error in DCL_SPEC"
	//"error in DCL_ITEM"
}
