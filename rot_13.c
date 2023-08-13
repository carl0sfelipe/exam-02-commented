// Include the header file that provides access to various POSIX operating system functions.
#include <unistd.h>

int main(int argc, char **argv)
{
    // Declare and initialize a variable 'i' to be used as an index when traversing the string.
    int i = 0;

    // Check if at least one command-line argument was provided (besides the program's name).
    if (argc > 1)
    {
        // Loop that goes through each character of the string provided as the first argument.
        while (argv[1][i])
        {
            // Check if the current character is a lowercase letter.
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
            {
                // Apply the ROT13 cipher to the character:
                // 1. Subtract the ASCII value of 'a' to map 'a' to 0, 'b' to 1, etc.
                // 2. Add 13 to shift by 13 positions in the alphabet.
                // 3. Use modulus 26 to ensure the result is between 0 and 25.
                //    For example, if the result is 27, it wraps around to 1.
                // 4. Add back the ASCII value of 'a' to convert the number back into a letter.
                argv[1][i] = (argv[1][i] - 'a' + 13) % 26 + 'a';
            }
            // Check if the current character is an uppercase letter.
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
            {
                // The process is similar to the above, but for uppercase letters.
                argv[1][i] = (argv[1][i] - 'A' + 13) % 26 + 'A';
            }
            // Write the (possibly modified) character to standard output.
            write(1, &argv[1][i], 1);
            // Increment the index to move to the next character.
            i++;
        }
    }
    // Write a newline character to standard output for proper output formatting.
    write(1, "\n", 1);
    // Return 0 to indicate successful completion of the program.
    return (0);
}
