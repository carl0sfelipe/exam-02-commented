#include <unistd.h>   // Inclui o cabeçalho para usar funções do sistema, como 'write'.

// Função para verificar se um caractere já foi impresso anteriormente.
int		already_printed(char c, char *str, int len)
{
	int i;    // Variável contador.

	i = 0;    // Inicialização do contador.
	while (i < len)   // Enquanto 'i' for menor que 'len' (o comprimento da substring considerada).
	{
		if (str[i] == c)   // Se o caractere na posição 'i' da string for igual ao caractere 'c'.
			return (1);   // Retorna 1 (verdadeiro).
		i++;   // Incrementa o contador.
	}
	return (0);   // Se o caractere 'c' não foi encontrado, retorna 0 (falso).
}

// Função para verificar se um caractere está contido em uma string.
int		is_in_string(char c, char *str)
{
	while (*str)   // Enquanto houver caracteres na string.
	{
		if (*str == c)   // Se o caractere atual da string for igual ao caractere 'c'.
			return (1);   // Retorna 1 (verdadeiro).
		str++;   // Move para o próximo caractere da string.
	}
	return (0);   // Se o caractere 'c' não foi encontrado, retorna 0 (falso).
}

// Função principal do programa.
int		main(int argc, char **argv)
{
	int i;   // Variável contador.

	// Verifica se o número de argumentos fornecidos não é 3 (nome do programa + 2 strings).
	if (argc != 3)
	{
		write(1, "\n", 1);   // Escreve uma nova linha na saída padrão.
		return (0);   // Termina o programa.
	}
	i = 0;   // Inicialização do contador.
	// Enquanto houver caracteres na primeira string (argumento).
	while (argv[1][i])
	{
		// Verifica se o caractere atual está na segunda string e se ele ainda não foi impresso.
		if (is_in_string(argv[1][i], argv[2]) && !already_printed(argv[1][i], argv[1], i))
			write(1, &argv[1][i], 1);   // Escreve o caractere na saída padrão.
		i++;   // Incrementa o contador.
	}
	write(1, "\n", 1);   // Escreve uma nova linha na saída padrão.
	return (0);   // Retorna 0 e termina o programa.
}
