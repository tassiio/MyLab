/****************************************************************************
 *                                                                          *
 * File    : main.c                                                         *
 *                                                                          *
 * Purpose : Console mode (command line) program.                           *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/

#include <stdio.h>
#include <stdlib.h>

/****************************************************************************
 *                                                                          *
 * Function: main                                                           *
 *                                                                          *
 * Purpose : Main entry point.                                              *
 *                                                                          *
 * History : Date      Reason                                               *
 *           00/00/00  Created                                              *
 *                                                                          *
 ****************************************************************************/
int chil (int c)
{
    int count=0;
    while (c != 0)
    {
        c = c/10;
        count++;
    }
    return count;
}
void a_prog(int f, int kolvo, int raznost)
{
    printf("---------");
    for (int i = 0; i < kolvo; i++)
    {
      printf("------");
    }


    printf("\nIndex   | ");
    for (int i = 0; i < kolvo; i++)
    {
        printf("%d ", i+1);
        for(int j = 0; j<4-chil(i+1);j++)
            {
                printf(" ");
            }
            printf("|");
    }
    printf("\n");
    printf("---------");
    for (int i = 0; i < kolvo; i++)
    {
      printf("------");
    }
    printf("\nNumbers | ");
    for (int i = 0; i < kolvo; i++)
    {
            printf("%d ", f + raznost*i);
            for(int j = 0; j<4-chil(f+raznost*i);j++)
            {
                printf(" ");
            }
            printf("|");
    }
    printf("\n");
    printf("---------");
    for (int i = 0; i < kolvo; i++)
    {
      printf("------");
    }

}
void sum (int first, int kol, int razn)
{
    printf("\nsumma = %d\n", (((2*first + (kol-1)*razn)*kol)/2));
    printf("summa the last + 1 = %d\n", 3*first+3*kol*razn-3*razn);
}
int main()
{
	int a,n,d,x,s;
    printf("Input  a:\n");
	scanf("%d",&a);
    printf("Input  n:\n");
	scanf("%d",&n);
    printf("Input  d:\n");
	scanf("%d",&d);

	a_prog(a,n,d);
	sum(a, n, d);


    return 0;
}
