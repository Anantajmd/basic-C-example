/*Author : Ananta Jamdhade
* Date   : 03/07/2019
* Description : Calculate the no of line no of word and no of charector in file ,
 file name should be give in command line argument  

*/
#include<stdio.h>
main(int argc,char **argv)
{
	FILE *fp;
	char ch;
	int a=0,b=0,c=1,flag=0;
	if(fp=fopen(argv[1],"r"))   // open file in read only mode
	{
		while((ch=fgetc(fp))!=EOF)
		{
			a++;
			if(flag==1&&ch=='\n')
				c++;
			if((flag==1)&&(ch==' '||ch==','||ch=='\n'||ch=='.'))
			{
				b++;
				flag=0;
			}
				
			if(ch!=' '&&ch!=','&&ch!='\n'&&ch!='.')
			flag=1;
			
		}
		fclose(fp);
	}
	printf("file name  : %s\ntotal line : %d\ntotal word : %d\ntotal char : %d\n",	argv[1],c,b,a);
}
