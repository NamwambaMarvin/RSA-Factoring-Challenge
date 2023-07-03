#include "f.h"
/**
 * main -Entry point of the application
 * Return: Return zero
 */
int main(int argc, char *argv[])
{
	FILE *f;
	size_t s;
	ssize_t l;
	char *buffer = NULL;
	if (argc != 2)
	{
		fprintf(stderr, "Usage: factor <filename>\n");
		exit(EXIT_FAILURE);
	}
	f = fopen(argv[1], "r");
	if (!f)
	{
		fprintf(stderr, "Error: can't open file %s\n", argv[1]);
		exit(EXIT_FAILURE);
	}
	while ((l = getline(&buffer, &s, f)) != -1)
	{
		fact(buffer);
	}
	return (0);
}
