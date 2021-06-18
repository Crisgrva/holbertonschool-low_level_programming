#include <stdio.h>

/**
 * main - Print alphabet in lowercase
 * Print all alphabet in lowercase
 * Return: 0 (Success)
 */
int main(void)
{
        int letter = 97;

        while (letter <= 122)
        {
                putchar(letter);
                letter++;
        }
        putchar('\n');
        return (0);
}
~
