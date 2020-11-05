#include <stdio.h>
int main() {
	char arr_1[1000];
	printf("vvedite stroku: ");
	fgets(arr_1, sizeof(arr_1), stdin);
	int len = 0;
	int i = 0;
	while (arr_1[len] != '\0') {
		len++;
	}
	i = len;
	int p = 0;

	while (i != -1) {
		if (arr_1[i] <= 97 || arr_1[i] >= 122) {
			p = i + 1;
			while (arr_1[p] >= 97 && arr_1[p] <= 122) {
				printf("%c", arr_1[p]);
				p++;
			}
			printf("\n");
		}

		if (i == 0)
		{
			p = 0;
			while (arr_1[p] >= 97 && arr_1[p] <= 122)
			{
				printf("%c", arr_1[p]);
				p++;

			}
		}
		i--;
	}

	return 0;
}
