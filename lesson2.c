# include<stdio.h>
# include<stdlib.h>
int main()
{
    FILE *fp;
	char ch;
	fp=fopen("D:\\www\\testgit\\text.txt","r");
	if(fp==0)
	{
	    printf("file error!\n");
		exit(1);
	}
	while((ch=fgetc(fp))!=EOF)
	{
	    putchar(ch);
	}
	putchar('\n');
    fclose(fp);
	return 0;
}