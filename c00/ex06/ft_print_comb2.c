#include <unistd.h>

void ft_print_comb2(void) {
    int i = 0;
    int j;

    while (i <= 98) {
        j = i + 1;
        while (j <= 99) {
            char output[6];
            output[0] = i / 10 + '0';
            output[1] = i % 10 + '0';
            output[2] = ' ';
            output[3] = j / 10 + '0';
            output[4] = j % 10 + '0';
            output[5] = (j == 99 && i == 98) ? '\n' : ',';

            write(1, output, 6);
            j++;
        }
        i++;
    }
}

int main() {
    ft_print_comb2();
    return 0;
}
