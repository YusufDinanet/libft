#include "libft.h"

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	char	*str;
	size_t	size;

	if (!s || !(str = (char *)malloc(len + 1)))
		return (0);
	size = len;
	if (len > ft_strlen(s) && start < ft_strlen(s))
		size = ft_strlen(s) - start;
	if (start > ft_strlen(s))
	{
		if (!(str = (char *)malloc(1)))
			return (0);
		str[0] = '\0';
		return (str);
	}
	ft_strlcpy(str, s + start, size + 1);
	return (str);
}