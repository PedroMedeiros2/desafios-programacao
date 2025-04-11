#include <stdio.h>

void answer_everything()
{
    int num;
    while (1)
    {
        scanf("%d", &num);
        if (num == 42)
            break;
        printf("%d\n", num);
    }
}

int main()
{
    answer_everything();

    return 0;
}