#include <stdio.h>
#include <stdlib.h>

#define ALPHABET_LEN 26

char *string_realloc(char *original, size_t new_len);
char *string_malloc(size_t size);
void fill_lowercase(char *str, size_t len);
char *string_calloc(size_t size);

int main()
{
	char *str = string_calloc(ALPHABET_LEN + 1);
	fill_lowercase(str, ALPHABET_LEN + 1);
	printf("%s\n", str);
	printf("%p\n", str);
	str = string_realloc(str, (2 * ALPHABET_LEN) + 1);
	fill_lowercase(&str[ALPHABET_LEN], ALPHABET_LEN + 1);
	printf("%s\n", str);
	printf("%p\n", str);
	free(str);
	str = NULL;
}

char *string_realloc(char *original, size_t new_len)
{
	original = realloc(original, new_len);
	if (original == NULL)
	{
		fprintf(stderr, "out of memory");
		exit(EXIT_FAILURE);
	}
	return original;
}

char *string_malloc(size_t size)
{
	char *str = malloc(size);
	if (str == NULL)
	{
		fprintf(stderr, "out of memory");
		exit(EXIT_FAILURE);
	}
	for (size_t i = 0; i < size; ++i)
	{
		str[i] = '\0';
	}
	return str;
}
void fill_lowercase(char *str, size_t len)
{
	if (len > 26)
	{
		len = 27;
	}
	for (size_t i = 0; i < len - 1; i++)
	{
		str[i] = 'a' + i;
	}
	str[len - 1] = '\0'; 
}

char *string_calloc(size_t size)
{
	char *str = calloc(size, sizeof(char));
	if (str == NULL)
	{	
		fprintf(stderr, "out of memory");
		exit(EXIT_FAILURE);
	}
	return str;
}
