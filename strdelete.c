*Author : Ananta Jamdhade
* Date   : 03/07/2019
* Description : myatoi() function user define atoi() function whitch is accept string and return integer

*/

#include<stdio.h>
#include<string.h>
void delate(char*,char*);
main()
{
    //int [] x= {1,2,34};

	char s1[40],s2[40];
	puts("enter a string s1");     // main string
	gets(s1);
	puts("enter a string which u want to delete from above string"); // sub string 
	gets(s2);
	delate(s1,s2);	
	printf("%s\n",s1);
	//int x=s1.lenth;

}

/** 
 ***************************************************************************************
 * void delate(char *s1,char *s2);
 *
 * @brief - Find string s2 from s1 and Delet it 
 * 			
 * @return <void> : void
 * 		
 * DESCRIPTION:
 * 		accept two string s1 and s2 and find s2 string in s1 string and delete it 
 * 
 * @bug  Known Issues:
 *			None
 * 
 **************************************************************************************
*/

void delate(char *s1,char *s2)
{
	int i,j;
	char *p;
	for(i=0;s1[i];i++)
	{
		for(j=0;s2[j];j++)
		{
			if(s1[i]==s2[j])
				i++;
			else
			{
				i=i-j;
				break;
			}
		}

		if(j==strlen(s2))
		{
			memmove(s1+(i-j),s1+i,strlen(s1+i)+1);
			i=i-1-j;
		}
	}
}
