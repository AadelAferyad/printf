#include "../main.h"

int main(void)
{
    int num1 = 42;
    int num2 = -10;

    _printf("Integer (%% %% d): %d\n", num1);
    _printf("Integer (%% %% %%% d): %d\n", num2, num1);
    _printf("Integer (%%i): %i\n", num1);
    _printf("Integer (%%i): %i\n", num2);

    return (0);
}
