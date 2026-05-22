#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main12() {
	int a = 0, b = 0, c = 0, d = 0;
	char str[10000];

	fgets(str, sizeof(str), stdin);

	for (int i = 0; str[i] != '\0'; i++) {
		if (str[i] == '1') {
			a++;
		}
		else if (str[i] == 'I') {
			b++;
		}
		else if (str[i] == 'l') {
			c++;
		}
		else if (str[i] == '|') {
			d++;
		}
	}

	printf("%d\n", a);
	printf("%d\n", b);
	printf("%d\n", c);
	printf("%d\n", d);

	return 0;
}