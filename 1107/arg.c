#include<stdio.h>
int main(int argc, char* argv[])
{
	int i;

	printf("argumnet count : %d\n", argc);
	for(i=0; i<argc; i++)
		printf("%d번 째 인수 : %s\n", i, argv[i]);

	return 0;
}
