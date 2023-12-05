
int ft_strlen(char *str)
{
	int index;

	index = 0;
	while (str[index] != '\0')
		index++;
	return (index);
}

unsigned int ft_strlcat(char *dest, char *src, unsigned int size)
{
	int index;
	int destlen;
	int srclen;
	
	index = 0;
	destlen = ft_strlen(dest);
	srclen = ft_strlen(src);
	if (size <= 0)
		return srclen;
	if (size < (unsigned int)destlen)
		srclen += destlen;
	while (*src && (destlen + index) < destsize -1)
	{
		dest[destlen + index] = *src;
		index++;
		src++;
	}
	dest[destlen + index] = '\0';
	return (srclen);
}
