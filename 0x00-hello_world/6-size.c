#include <stdio.h>
/* main function - Entry point */
/* Return 0 (Success) */
/* Description: prints the values of C data types on any system */
int main(void)
{
printf("size of a char: %zu byte(s)\n", sizeof(char));
printf("size of an int: %zu byte(s)\n", sizeof(int));
printf("size of a long int: %zu byte(s)", sizeof(long int));
printf("size of a long long int: %zu byte(s)", sizeof(long long int));
printf("size of a float: %zu byte(s)", sizeof(float));
return (0);
}
