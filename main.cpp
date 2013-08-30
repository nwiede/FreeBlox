/*
FreeBlox, Created primarily by: Lionel07 and in part by Nwiede
*/
#include <stdio.h>
#include <string.h>
/**
Initialisation function
**/
int debugging = 1;
int main ( int argc, char *argv[] )
{
	int realargs = argc - 1;
	if(realargs)
	{
		printf("Doing %s\n",argv[1]);
		if(strcmp("launch",argv[1])==0)
		{
			if(realargs!=2)
			{
				printf("usage: %s launch [url]\n",argv[0]);
				return 1;
			}
			printf("Launching is unimplemented");
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
