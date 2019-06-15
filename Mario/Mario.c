#include <stdio.h>

/*The purpose of this program is to prompt a user to input an integer between 1 and 8 which will build a triangle structure*/

int main(void)
{
	int height;
	do {
		height = printf("Enter pyramid height: ");
		scanf_s("%i", &height);						// Program crashes when a char, float or string are input
		if (height > 0 && height <= 8) {

			for (int i = 0; i < height; i++) {

				for (int j = 7; j > i; j--) {
					printf(" ");
				}
				for (int k = 0; k <= i; k++) {
					printf("#");
				}
				printf("\n");
			}
			printf("The pyramid height is %i\n\n", height);
		}
		else {
			printf("Invalid height. Enter a value between 1 and 8\n\n");
		}
	} while (1);
}