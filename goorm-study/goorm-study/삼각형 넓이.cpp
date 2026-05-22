#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:6031)
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main() {
	int w;
	int h;
	float s;

	scanf("%d %d", &w, &h);
	s = (w * h) / 2.0;
	printf("%.1f", s);

	return 0;
}