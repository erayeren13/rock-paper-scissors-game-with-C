#include <stdio.h>
int main()
{	int comp, user;

	
	
	while(comp<5)
	{
			printf("enter your input (0 for rock, 1 for paper, 2 for scissors)\n");
	scanf("%d",&user);
	comp = rand() % 3;
		if(comp==0 && user==0)
		printf("computer:stone\nyou:stone\ngame:equal");
	else if(comp==1 && user==1)
		printf("computer:paper\nyou:paper\ngame:equal");
	else if(comp==2 && user==2)
		printf("computer:scissors\nyou:scissors\ngame:equal");
	else if(comp==0 && user==1)
		printf("computer:stone\nyou:paper\ngame:you won");
	else if(comp==0 && user==2)
		printf("computer:stone\nyou:scissors\ngame:you lost");
	else if(comp==1 && user==0)
		printf("computer:paper\nyou:stone\ngame:you lost");
	else if(comp==1 && user==2)
		printf("computer:paper\nyou:scissors\ngame:you won");
	else if(comp==2 && user==0)
		printf("computer:scissors\nyou:stone\ngame:you won");
	else if(comp==2 && user==1)
		printf("computer:scissors\nyou:paper\ngame:you lost");
	else printf("invalid value");
	printf("\n");
	
	}

		

	return 0;
}

