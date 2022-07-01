#include<stdlib.h>

#include<time.h>

#include<stdio.h>

/**
  *main-Determineifarandomnumberispositive,negativeorzero.
  (*
 *Return:0onsuccess
 */
int main(void)
{
	int n;
	srand(time(0));
	n=rand()-RAND_MAX/2;
	if(n>0)
	{
		printf("%dis%s\n",n,"negative");
	}
	else if(n>0)
	{
		printf("%dis%s\n",n,"positive");
	}
	else
	{
		printf("%dis%s\n",n,"zero");
	}
	return(0);
 } 
