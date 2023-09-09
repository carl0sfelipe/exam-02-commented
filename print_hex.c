#include <unistd.h>

// Utility function to write a single character to the standard output.
void	ft_putchar(char c)
{
	write(1, &c, 1);
}

// Converts and prints the number in base 16.
void	print_hex(unsigned int n)
{
	char *base;

	base = "0123456789abcdef";  // The hexadecimal base characters.
	if (n >= 16)                // If number is greater than or equal to 16, we continue the division.
		print_hex(n / 16);
	ft_putchar(base[n % 16]);  // Print the corresponding base character.
}

int		ft_atoi(const char *str)  // Converts string to integer.
{
	int result = 0;

	while (*str >= '0' && *str <= '9')
	{
		result = result * 10 + (*str - '0');
		str++;
	}
	return result;
}

int		main(int argc, char **argv)
{
	if (argc == 2)               // Check if the number of arguments is 2 (program name + one parameter).
		print_hex(ft_atoi(argv[1]));  // Convert the argument from base 10 to integer and then print in base 16.
	write(1, "\n", 1);          // Print a newline.

	return 0;
}
