
// This function, named "ft_strpbrk", searches the string 's1' for the first occurrence of any character from the string 's2'.
char *ft_strpbrk(const char *s1, const char *s2)
{
    // Declare and initialize an integer 'i' to 0. This will be used as an index to traverse through the string 's2'.
    int i = 0;

    // Check if either of the input strings is NULL. If so, return NULL (or 0).
    if (!s1 || !s2)
    {
        return (0);
    }

    // This outer loop goes through each character of the string 's1'.
    while(*s1)
    {
        // Reset the index 'i' to 0 for each new character of 's1'.
        i = 0;
        // This inner loop goes through each character of the string 's2'.
        while(s2[i])
        {
            // Check if the current character of 's1' matches the current character of 's2'.
            if(*s1 == s2[i])
                // If a match is found, return a pointer to the matched character in 's1'.
                return (char *) s1;
            // Move to the next character in 's2'.
            i++;
        }
        // Move to the next character in 's1'.
        s1++;
    }

    // If no matching character is found after checking the entire string 's1', return NULL (or 0).
    return (0);
}
