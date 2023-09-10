#include <unistd.h>

void    snake_to_camel(char *str)
{
    int     i = 0;
    int     capitalize = 0;

    while (str[i])
    {
        if (str[i] == '_')
        {
            capitalize = 1;
            i++;
            continue;
        }
        if (capitalize && str[i] >= 'a' && str[i] <= 'z')
        {
            write(1, &((char){str[i] - 32}), 1);  // Convert to uppercase
            capitalize = 0;
        }
        else
        {
            write(1, &str[i], 1);
            capitalize = 0;
        }
        i++;
    }
}

int main(int argc, char **argv)
{
    if (argc == 2)
        snake_to_camel(argv[1]);
    write(1, "\n", 1);
    return (0);
}
