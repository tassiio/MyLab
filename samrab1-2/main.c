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

int main()
{
	int a,n,d,x,s;
    printf("Input  a:\n");
	scanf("%d",&a);
    printf("Input  n:\n");
	scanf("%d",&n);
    printf("Input  d:\n");
	scanf("%d",&d);
		s=a*n+((n-1)*d*n)/2;
        x=3*a+3*n*d-3*d;
        printf("Sum s=%d\n",s);
        printf("Sum2 x=%d\n",x);


    return 0;
}
