/*Author : Ananta Jamdhade
* Date   : 05/07/2019
* Description : Printf the binary value of float number

*/

#include<stdio.h>
main()
{
	float x;
	char *p;
	p=&x;
	int a,b,c;
	printf("enter a float value : ");
	scanf("%f",&x);
	for(a=3;a>=0;a--)
	{
		b=*(p+a);
		for(c=7;c>=0;c--)
			printf("%d",((b>>c)&1));
		printf("\t");
	}
	printf("\n");
}
