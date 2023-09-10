#include <unistd.h>
// Função para verificar se o caractere é um espaço ou tab
int     is_space(char c)
{
    return (c == ' ' || c == '\t');
}

// Função para avançar o ponteiro até o próximo espaço ou final da string
char    *next_word(char *str)
{
    while (*str && !is_space(*str))
        str++;
    while (*str && is_space(*str))
        str++;
    return (str);
}

// Função para escrever a palavra na saída
void    print_word(char *str)
{
    while (*str && !is_space(*str))
    {
        write(1, str, 1);
        str++;
    }
}

int     main(int argc, char **argv)
{
    if (argc > 1)
    {
        char *str = argv[1];
        char *first_word = str;

        // Avançar para a próxima palavra após a primeira
        str = next_word(str);

        // Imprimir todas as palavras após a primeira
        while (*str)
        {
            print_word(str);
            write(1, " ", 1);
            str = next_word(str);
        }

        // Imprimir a primeira palavra
        print_word(first_word);
    }
    write(1, "\n", 1);
    return (0);
}
