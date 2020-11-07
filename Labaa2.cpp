
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//Enter a string and a letter. Print all words starting with the specified letter.
int main() {
	char str[500];
	char let;
	int k = 0;
	printf("Enter the string:");
	fgets(str, sizeof(str), stdin);
	printf("Enter letter:");
	int j = scanf("%c", &let);
	char f = getchar();
	if (j != 1 || f != '\n') {
		printf("error:");
		return 7;
	}
	if (('a' <= let && let <= 'z') || ('A' <= let && let <= 'Z')) {
		for (int i = 0; i < 500; i++) {
			if ((i == 0) && (str[i] == let) || (str[i] == let) && (str[i - 1] == ' ') || (str[i + 1] == let) && (str[i] == ' ') || (str[i] == let) && (str[i - 1] == '	') || (str[i + 1] == let) && (str[i] == '	')) {
				while ((str[i] != ' ') && (str[i] != '\n')) {
					printf("%c", str[i]);
					i++;
				}
				printf(" ");
				k++;
			}
			else
				i++;
		}
	}
	else {
		printf("error:");
		return 8;
	}
	if (k == 0) {
		printf("Nothing found:");
		return 9;
	}
	return 0;
}

