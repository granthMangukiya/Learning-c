#include <stdio.h>

int main()
{
    /*label:
    printf("hello world");
    goto end;
    goto label;
    end:
    printf("we are at end");
    */
    int i, num;
    for (i = 0; i < 8; i++)
    {
        printf("%d\n", i);
        for (int j = 0; j < 8; j++)
        {
            printf("Enter the number. enter 0 to exit\n");
            scanf("%d",&num);
            if (num==0)
            {
                goto end;
            }
            
        }
    }
    end:
    return 0;
}