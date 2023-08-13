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

    // Check if the number of command-line arguments is 4.
    // Also, ensure that the strings in 'argv[2]' and 'argv[3]' are of length 1 (i.e., single characters).
    if (argc == 4 && !argv[2][1] && !argv[3][1])
    {
        // This 'while' loop will run as long as the character at position 'i' in 'argv[1]' is not the null terminator ('\0').
        while (argv[1][i] != '\0')
        {
            // Check if the current character in 'argv[1]' matches the character in 'argv[2]'.
            if (argv[1][i] == argv[2][0])
            {
                // If there's a match, replace the character in 'argv[1]' with the character in 'argv[3]'.
                argv[1][i] = argv[3][0];
            }
            // Write the (possibly modified) character to the standard output (file descriptor 1).
            write(1, &argv[1][i], 1);
            // Increment the index 'i' to move to the next character.
            i++;
        }
    }
    // Write a newline character to the standard output to ensure the output is properly formatted.
    write(1, "\n", 1);
}
