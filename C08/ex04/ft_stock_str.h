#ifndef	FT_STOCK_STR_H
#define	FT_STOCK_STR_H

#include <stdlib.h>

char *ft_strcpy(char *dest, char *src);
int ft_strlen(char *str);

typedef struct s_stock_str
{
	int size;
	char *str;
	char *copy;
} t_stock_str;


#endif
