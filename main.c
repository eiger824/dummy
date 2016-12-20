#include <stdio.h>

int main()
{
	int nr;
	printf(">>Nr: ");
	scanf(" %d", &nr);
	
	printf("There %s %d error%s\n", (nr>1 || nr == 0) ? "are":"is just"
				      , nr
				      , (nr > 1 || nr == 0) ? "s":"");
	return 0;
}
