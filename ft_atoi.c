// This function, named "ft_atoi", converts a string representation of an integer into an actual integer.
int ft_atoi(char *str)
{
    // Declare and initialize a variable 'result' to store the final integer value.
    int result = 0;
    // Declare and initialize a variable 'sign' to 1. This will be used to determine if the number is positive or negative.
    int sign = 1;

    // This loop skips over any leading whitespace or control characters in the string.
    while (*str == ' ' || (*str >= 9 && *str <= 13))
        str++;

    // If the first non-whitespace character is '-', the number is negative. So, we set 'sign' to -1.
    if (*str == '-')
        sign = -1;
    // If there's a sign character (either '+' or '-'), move to the next character.
    if (*str == '-' || *str == '+')
        str++;

    // This loop processes each digit of the number.
    while (*str >= '0' && *str <= '9')
    {
        // Multiply the current result by 10 and add the integer value of the current character.
        // Subtracting '0' converts the character to its integer equivalent (e.g., '3' becomes 3).
        result = result * 10 + *str - '0';
        // Move to the next character in the string.
        str++;
    }

    // Multiply the result by the sign to get the final positive or negative integer.
    return (sign * result);
}
