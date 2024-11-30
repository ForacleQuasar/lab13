#include <stdio.h>
#include <string.h>
#include <ctype.h>
void main() {
	//1
	char Name[20];
	printf("Enter your name >");
	scanf("%s", Name);
	char snew[20] = "Hello,";
	strcat(snew, Name);
	int len = 40-strlen(snew);
	char Snew;
	for (int i = 0; i < 20; i++) {
		Snew = snew[i];
		printf("%c", toupper(Snew));
	}
	for (int i = 0; i < len; i++) {
		printf("!");
	}
	//2
	printf("\n");
	Snew = snew[0];
	printf("%c",tolower(Snew));
	for (int i = 1; i < 20; i++) {
		Snew = snew[i];
		printf("%c", toupper(Snew));
	}
}