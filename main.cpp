#include <stdio.h>
#include <string.h>
/**
Initialisation function
**/
int debugging = 1;
int main ( int argc, char *argv[] )
{
	printf("FreeBlox (bearded-shame): pre-alpha v. 0.0.0.1\n");
	printf("[DBG]: Launched with %d options\n",argc - 1);
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
}
