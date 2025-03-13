#include <stdio.h>

int stringLength(const char string[]);
int main(int argc, char **argv)
{
	const char word1[] = "mohammad";
	const char word2[] = "varouqa";
	printf("%d %d\n",stringLength(word1), stringLength(word2));
	return 0;
}

int stringLength(const char string[])
{
	int i = 0;
	while(string[i] != '\0')
		i++;
		
	return i;
}
