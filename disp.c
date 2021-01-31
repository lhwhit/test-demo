#include <stdio.h>
#include <stdlib.h>
int main()
{
	FILE *fp;
	char c;
	if ((fp=fopen("abc.txt","r"))==NULL) {
		printf("File does not exist!\n");
		exit(0);
	}
	while ((c=fgetc(fp))!=EOF) {
		printf("%c",c);
	}
	fclose(fp);
	return 0;
}
