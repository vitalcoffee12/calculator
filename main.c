#include <stdio.h>
#include "cal.h"

int main()
{
        char c;
        int a;
        int b;
        
        printf("Welcome to my calculator!\n");

        while(1)
        {

                printf("which command do you want to proceed?\n");
                printf("ADD (a)         SUB (s)         DIV (d)         MUL (m) | QUIT (q) \n >> ");
                scanf("%c", &c);

                switch(c)
                {
                        case 'a':
                                printf("insert two operand: ");
                                scanf("%d %d", &a, &b);
                                printf("the answer is : %d\n\n", add(a, b));
                                break;
                        case 's':
                                printf("insert two operand: ");
                                scanf("%d %d", &a, &b);
                                printf("the answer is : %d\n\n", sub(a, b));
                                break;

                        case 'd':
                                printf("insert two operand: ");
                                scanf("%d %d", &a, &b);
                                printf("the answer is : %d\n\n", div(a,b));
                                break;
                        case 'm':
                                printf("insert two operand: ");
                                scanf("%d %d", &a, &b);
                                printf("the answer is : %d\n\n", mul(a,b));
                                break;

                        case 'q':
                                return 0;
                                break;
                        default :
                                printf("unknown command\n\n");
                                break;

                }
        }

        return 0;
}
