/**
 * hash_djb2 - djb2 hash function
 * @str: Key value that is passed in
 *
 * Return: Returns hash value
 */
unsigned long int hash_djb2(const unsigned char *str)
{
	unsigned long hash = 5381;
	int c;

	while ((c = *str++))
		hash = ((hash << 5) + hash) + c;
	return (hash);
}
