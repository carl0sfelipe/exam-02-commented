// This function is named "ft_strcpy". It is designed to copy the string from 's2' to 's1'.
// It takes two parameters:
// s1: This is the destination string where the content of s2 will be copied.
// s2: This is the source string which will be copied to s1.
char *ft_strcpy(char *s1, char *s2)
{
    // Declare and initialize an integer 'i' to 0. This will be used as an index to traverse through the string 's2'.
    int i = 0;

    // This 'while' loop will run as long as the character at position 'i' in 's2' is not the null terminator ('\0').
    // The null terminator indicates the end of a string in C.
    while (s2[i] != '\0')
    {
        // Copy the character from 's2' at position 'i' to 's1' at the same position.
        s1[i] = s2[i];
        // Increment the index 'i' to move to the next character.
        i++;
    }
    // After copying all characters from 's2' to 's1', we add a null terminator at the end of 's1' to ensure it's a valid string.
    s1[i] = '\0';

    // The function returns the destination string 's1' after copying.
    return (s1);
}
