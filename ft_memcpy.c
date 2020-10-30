#include <stdio.h>
#include <string.h>
void *ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char *str1;
	unsigned char *str2;
	
	if(!dest && !src)
		return (NULL);

	str1 = (unsigned char*)dest;
	str2 = (unsigned char*)src;
	while(n--)
		*(str1++) = *(str2++);

	return (dest);
}

int main(void)
{
	char str1[] = "aa";
	char str2[] = "bbbbbbbbb";

	printf("%s\n", ft_memcpy(str1, str2, 4));
	printf("%s\n", memcpy(str1, str2, 4));
	printf("%s\n", memmove(str1, str2, 4));
	return 0;
}

