/*Author : Ananta Jamdhade
* Date   : 03/07/2019
* Description : Make a manu list and add name in list delete and print using 2D arry

*/


#include<stdio.h>
#include<string.h>
main()
{
	char s1[20];
	int cnt=0,i,colm,j,a;
	char db[10][20],choice,temp[20];
	colm=sizeof(db)/sizeof(db[0]);
 	while(1)
	{
		puts("\n select valide choice\na : add name\nd : deleat name\np : print list\ns : sort list\nf : find name\nq : quit");
		//__fpurge(stdin);
		scanf("%c",&choice);
		__fpurge(stdin);
		switch(choice)
		{
			case 'a':
				puts("enter name");
				gets(db[cnt++]);	
				//cnt++;
				//printf("%c\n%d",db[0][0],cnt);
				break;
			case 'p':
				puts("name list");
				for(i=0;i<cnt;i++)
					printf("%d : %s\n",i,db[i]);
					break;
			case 's'://printf("%c  %d",db[0][0],cnt);
				for(j=cnt;j>0;j--)
				{
					for(i=0;i<j-1;i++)
					{
						if(db[i][0]>db[i+1][0])	
						{
							//printf("%c\n%d",db[i][0],cnt);
							strncpy(temp,db[i],20);
							strncpy(db[i],db[i+1],20);
							strncpy(db[i+1],temp,20);
							//temp=db[i];
							//db[i]=db[i+1];
							//[i+1]=temp;
						}
				}	}
				break;	
			case 'q':
				return;
			case 'd':
				puts("enter name serial number which  u want delet");
				scanf("%d",&a);
				__fpurge(stdin);
				memmove(db[a],db[a+1],(--cnt-1)*20);                // delete the string 
				break;
			case 'f':
				puts("enter name which u want search");
				gets(s1);
				for(i=0;i<cnt;i++)
				{
					if(strstr(db[i],s1))
					{
				    		printf("%s.. is fount in list at position %d",s1,i);
						goto l;	
					}
				}
				printf("..name not found...");
				l:break;

		}
	}
}
