#include "libft.h"
#include <stdio.h>
#include <limits.h>

int main()
{
//FT_ATOI
	printf("-------ft_atoi-------\n");
	char *test1 = "    \t\n\v\f\r+200";
	int standard = atoi(test1);;
	int written = ft_atoi(test1);
	printf("test1: ");
	printf("%d == %d\n", standard, written);

	char *test2 = "2147483647";
	standard = atoi(test2);
	written = ft_atoi(test2);
	printf("test2: ");
	printf("%d == %d\n", standard, written);
	
	char *test3 = "-2147483648";
	standard = atoi(test3);
	written = ft_atoi(test3);
	printf("test3: ");
	printf("%d == %d\n", standard, written);
	
	char *test4 = "2147483648";
	standard = atoi(test4);
	written = ft_atoi(test4);
	printf("test4: ");
	printf("%d == %d\n", standard, written);
	
	char *test5 = "-2147483649";
	standard = atoi(test5);
	written = ft_atoi(test5);
	printf("test5: ");
	printf("%d == %d\n", standard, written);
	
	char *test6 = "125a213";
	standard = atoi(test6);
	written = ft_atoi(test6);
	printf("test6: ");
	printf("%d == %d\n", standard, written);
	
	char *test7 = "++2345";
	standard = atoi(test7);
	written = ft_atoi(test7);
	printf("test7: ");
	printf("%d == %d\n", standard, written);
	
	char *test8 = "--32352";
	standard = atoi(test8);
	written = ft_atoi(test8);
	printf("test8: ");
	printf("%d == %d\n", standard, written);
//FT_ITOA
	printf("\n-------ft_itoa-------\n");
	char *output = ft_itoa(0);
	printf("test1: 0 = ");
	printf("%s\n", output);
	printf("test2: -3442 = ");
	output = ft_itoa(-3442);
	printf("%s\n", output);
	printf("test3: INTMIN = ");
	output = ft_itoa(INT_MIN);
	printf("%s\n", output);
	printf("test4: INTMAX = ");
	output = ft_itoa(INT_MAX);
	printf("%s\n", output);
	printf("test5: 10000 = ");
	output = ft_itoa(10000);
	printf("%s\n", output);
//FT_STRTRIM
	printf("---------ft_strtrim------\n");
	char *trim1 = "    Hello world  ";
	char *trim2 = " ";
	char *trim3 = "H";
	char *trim4 = "Hello  ";
	char *trim5 = ft_strtrim(trim1, trim2);
	char *trim6 = ft_strtrim(trim3, trim2);
	char *trim7 = ft_strtrim(trim4, trim2);
	printf("Correct Output ||   Function\n");
	printf("-Hello world-      -%s-\n", trim5);
	printf("-H-                -%s-\n", trim6);
	printf("-Hello-            -%s-\n", trim7);
//FT_SPLIT
	char *split1 = "    Hello World today  is sunny";
	char split2 = ' ';
	char **split = ft_split(split1, split2);
	printf("--------------ft_split------------\n");
	printf("     Hello World today    is sunny\n");
	printf("Index 0 = -%s-\n", split[0]);
	printf("Index 1 = -%s-\n", split[1]);
	printf("Index 2 = -%s-\n", split[2]);
	printf("Index 3 = -%s-\n", split[3]);
	printf("Index 4 = -%s-\n", split[4]);



}
