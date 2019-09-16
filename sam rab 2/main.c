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
#include <locale.h>
#include <math.h>

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

/*int main()
{
	setlocale(LC_ALL,""); 
    int a,b,c;
	printf("input a=");
	scanf("%d",&a);
    printf("input b=");
	scanf("%d",&b);
    printf("input c=");
	scanf("%d",&c);
  if ((a<b) && (a<c))
			printf("������� �� ����� a=%d\n",a);
	else if ((b>c) && (a>c))
		    printf("������� �� ����� c=%d\n",c);
	else if ((a>b) && (c>b))
		    printf("������� �� ����� b=%d\n",b);

    else if ((a==b) & (a<c))
            printf("������� �� ����� a,b=%d\n",a,b);
	else if ((a==b) & (b==c))
		    printf("��� ����� ����� %d\n",a);
    else if((a==b) & (a>c))
            printf("������� �� ����� �=%d\n",c);
    else if((c==b) & (a<c))
            printf("������� �� ����� a=%d\n",a);
    else if((c==b) & (a>c))
            printf("������� �� ����� c,b=%d\n",c,b);
	else if((a==c) & (a<b))
            printf("������� �� ����� a,c=%d\n",a,c);
    else if((a==c) & (a>b))
            printf("������� �� ����� b=%d\n",b);

    return 0;

}
*/
int main()
{
	setlocale(LC_ALL,""); 
    int x,y;
	printf("input x=");
	scanf("%d",&x);
    printf("input y=");
	scanf("%d",&y);
	if ((x>0) && (y>0))
    {
		if ((x*x + y*y >= 250*250) && (abs(x) + abs(y) <= 250*sqrt(2)))
			printf("�����������");
			else ("�� �����������");
	}
	if ((x<0) && (y>0))
	{
         if ((x*x + y*y >= 250*250) && (abs(x) + abs(y) <= 250*sqrt(2)))
	     printf("�����������");
	     else ("�� �����������");
	}
    
	if ((x<0) && (y<0))
	{
         if ((x*x + y*y <= 250*250) && (abs(x) + abs(y) >= 250))
	     printf("�����������");
	     else ("�� �����������");
	}
	if ((x>0) && (y<0))
	{
         if ((x*x + y*y <= 250*250) && (abs(x) + abs(y) >= 250))
	     printf("�����������");
	     else ("�� �����������");
	}

    return 0;


}
