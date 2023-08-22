#include <unistd.h>

void ft_putchar(char c)
{
    write(1, &c, 1);
}

void ft_putnbr(int nb)
{
    if (nb >= 10)
    {
        ft_putnbr(nb / 10);
        ft_putnbr(nb % 10);
    }
    else
    {
        ft_putchar(nb + '0');
    }
}

void ft_print_combn(int n)
{
    int digits[n];
    int i;

    i = 0;
    while (i < n)
    {
        digits[i] = i;
        i++;
    }

    while (digits[0] <= 10 - n)
    {
        i = 0;
        while (i < n)
        {
            ft_putnbr(digits[i]);
            i++;
        }

        if (digits[0] < 10 - n)
        {
            ft_putchar(',');
            ft_putchar(' ');
        }

        i = n - 1;
        digits[i]++;
        while (i > 0 && digits[i] > 9)
        {
            digits[i - 1]++;
            digits[i] = digits[i - 1] + 1;
            i--;
        }
    }
    ft_putchar('\n');
}

int main()
{
    ft_print_combn(2);  // 2桁の組み合わせを表示
    return 0;
}
