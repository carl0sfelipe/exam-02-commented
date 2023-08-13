// This header file provides access to the POSIX operating system API.
// It is used here for the 'write' function, which writes data to a file descriptor.
#include <unistd.h>

// The 'main' function is the entry point of a C program.
// It takes two parameters:
// argc: This is the number of command-line arguments passed to the program.
// argv: This is an array of strings representing the command-line arguments.
int main(int argc, char **argv)
{
    // Declare and initialize an integer 'i' to 0. This will be used as an index to traverse through the string in 'argv[1]'.
    int i = 0;

    // Check if the number of command-line arguments is 2.
    // If true, it means the user provided one argument to the program (the program name itself is always the first argument).
    if (argc == 2)
    {
        // This 'while' loop will run as long as the character at position 'i' in 'argv[1]' is not the null terminator ('\0').
        while (argv[1][i] != '\0')
        {
            // Check if the character is a lowercase letter.
            if (argv[1][i] >= 'a' && argv[1][i] <= 'z')
                // Convert the lowercase letter to uppercase by subtracting 32 from its ASCII value.
                argv[1][i] -= 32;
            // Check if the character is an uppercase letter.
            else if (argv[1][i] >= 'A' && argv[1][i] <= 'Z')
                // Convert the uppercase letter to lowercase by adding 32 to its ASCII value.
                argv[1][i] += 32;
            // Write the modified character to the standard output (file descriptor 1).
            write(1, &argv[1][i], 1);
            // Increment the index 'i' to move to the next character.
            i++;
        }
    }
    // Write a newline character to the standard output to ensure the output is properly formatted.
    write(1, "\n", 1);
}
