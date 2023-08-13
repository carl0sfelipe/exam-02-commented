// This function, named "is_power_of_2", checks if a given unsigned integer 'n' is a power of 2.
int is_power_of_2(unsigned int n)
{
    // If the number is 0, it's not considered a power of 2. Return 0 (false).
    if (n == 0)
        return (0);

    // This loop continues as long as 'n' is even (i.e., divisible by 2 without a remainder).
    while (n % 2 == 0)
        // Divide 'n' by 2. This operation effectively shifts the binary representation of 'n' one position to the right.
        n /= 2;

    // After the loop, if 'n' is 1, it means the original number was a power of 2.
    // If 'n' is not 1, then the original number had other prime factors besides 2.
    return ((n == 1) ? 1 : 0);
}
