# include<stdio.h>
# include<stdlib.h>
int main()
{
    FILE *fp;
	char str[200];
	fp=fopen("F:\\lesson1.txt","r");
	if(fp==0)
	{
	    printf("file error!\n");
		exit(1);
	}
	while((fgets(str,200,fp))!=NULL)
	{
	    printf("%s",str);
	}
    putchar('\n');
	fclose(fp);
	return 0;
}