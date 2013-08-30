/*
--------------------------------------------------------------
FreeBlox: main.cpp
Created primarily by: Lionel07 and in part by Nwiede
--------------------------------------------------------------
Current ongoing transactions:
 * Get display working
Get network
Make block class
Make models
 * Make opengl bindings
*/
#include <stdio.h>
#include <string.h>
/**
Initialisation function
**/
int debugging = 1;

/**
The entry point; determines the function to preform and if none; will start the game via initialiseBindings() and then initalise...
**/
int main ( int argc, char *argv[] )
{
	int realargs = argc - 1;
	if(realargs)
	{
		if(strcmp("launch",argv[1])==0)
		{
			if(realargs!=2)
			{
				printf("usage: %s launch [url]\n",argv[0]);
				return 1;
			}
			printf("Launching is unimplemented\n");
		}
		else if(0)
		{
			printf("Unimplemented\n");
			return 1;
		}
	}
	else
	{
		printf("usage: ./freeblox [args] (Try help)\n");
	}
}
