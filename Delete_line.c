/*Author : Ananta Jamdhade
* Date   : 09/12/2018
* Description : Detete the line number in file which you enter and file name have give with command line argument 

*/

#include<stdio.h>
#include<stdlib.h>
main(int argc, char **argv)
{
	FILE *p;
 	char *ptr;
	int size=0,i,d=0,c=0,j,k,cnt=1;
	char ch;
	
	p=fopen(argv[1],"r");    // open the file
	if(p==0)
	{
		printf("error : '%s' file is not prasent\n",argv[2]);
		return;
	}
	puts("//////// orignal file cuntent ///////\n");
	while((ch=fgetc(p))!=EOF)              // read the file
	{
		size++;
		printf("%c",ch);
	}
	ptr=calloc(1,size+1);               // allocate memmory for store the file 
	fclose(p);
	p=fopen(argv[1],"r");
	//rewind(p);
	for(i=0;i<size;i++)
	{
		ptr[i]=fgetc(p);
		//printf("%c",ptr[i]);
	}
	fclose(p);
	p=fopen(argv[1],"w");
	//k=atoi(argv[1]);
	printf("\nenter the line no which you want to delete \n");
	scanf("%d",&k);
	
	for(i=0;i<size;i++)
	{
		
		
		if(k!=cnt)
		{
			fputc(ptr[i],p);
		}
		if(ptr[i]=='\n')
			cnt++;
			

	}
	fclose(p);
	p=fopen(argv[1],"r");
	puts("\n//////// modifide file cuntent ///////\n");
	while((ch=fgetc(p))!=EOF)
		printf("%c",ch);
	fclose(p);


}
