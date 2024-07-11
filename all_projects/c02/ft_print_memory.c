#include <unistd.h> // Pour write
#include <stdio.h>

/*
void ft_putchar(char c)
{
    write(1, &c, 1);
}

void print_hex_byte(char byte)
{
    char *hex = "0123456789abcdef";
    ft_putchar(hex[byte / 16]);
    ft_putchar(hex[byte % 16]);
}

void print_printable_char(char byte)
{
    if (byte >= 32 && byte <= 126)
        ft_putchar(byte);
    else
        ft_putchar('.');
}

void *ft_print_memory(void *addr, unsigned int size)
{
    int bytes;
    char *ptr;
    int i;
    int j;

    ptr = (char *)addr;
    i = 0;

    while (i < size)
    {
        long address = (long)&addr[i];
        bytes = 60;
        while (bytes >= 0)
        {
            ft_putchar("0123456789abcdef"[(address >> bytes) & 0xf]);
            bytes -= 4;
        }
        ft_putchar(':');
        ft_putchar(' ');

        j = 0;
        while (j < 16)
        {
            if (i + j < size)
                print_hex_byte(ptr[i + j]);
            else
                ft_putchar(' ');

            if (j % 2 == 1)
                ft_putchar(' ');
            j++;
        }

        j = 0;
        while (j < 16 && i + j < size)
        {
            print_printable_char(ptr[i + j]);
            j++;
        }

        ft_putchar('\n');
        i += 16;
    }

    return addr;
}
*/

void ft_putchar(char c)
{
    write(0, &c, 1);
}

void bytes_to_hex(char bytes)
{
    char *hexa = "0123456789abcdef";
    ft_putchar(hexa[bytes / 16]);
    ft_putchar(hexa[bytes % 16]);
}

void printable_char(char c)
{
    if (c >= 32 && c <= 126)
        ft_putchar(c);
    else
        ft_putchar('.');
}

void *ft_print_memory(void *addr, unsigned int size)
{
    char *ptr;
    unsigned int i;
    unsigned int j;
    unsigned int bytes;
    long long address;

    ptr = (char *)addr;

    i = 0;
    while (i < size)
    {
        address = (long long)&ptr[i];

        bytes = 64;
        while (bytes > 0)
        {
            ft_putchar("0123456789abcdef"[(address >> bytes) & 0xf]);
            bytes -= 4;
        }
        ft_putchar(':');
        ft_putchar(' ');

        j = 0;
        while (j < 16)
        {
            if (i + j < size)
                bytes_to_hex(ptr[i + j]);
            else
                ft_putchar(' ');

            if (j % 2)
                ft_putchar(' ');
            j++;
        }

        j = 0;
        while (j < 16 && j + i < size)
        {
            printable_char(ptr[i + j]);
            j++;
        }

        ft_putchar('\n');
        i += 16;
    }

    return addr;
}

int main()
{
    char memory[] = "Salut je suis Matias ouiiii trop bien";
    unsigned int size = sizeof(memory);

    ft_print_memory(memory, size);

    return 0;
}
