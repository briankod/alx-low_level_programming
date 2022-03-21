/**
 * _strcpy - check the code.
 * @dest: a pointer to destination of string.
 * @src: a pointer to source string to copy from
 * Return: the pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *c = dest;

	while (*src)
		*dest++ = *src++;
	return (c);
}
