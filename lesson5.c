#include<stdio.h>
#include<stdlib.h>
int main()
{
    FILE *fin,*fout;
	char ch;
	char s1[]="D:\\www\\mtt1\\test.txt",s2[]="F:\\test.txt";
	fin=fopen(s1,"r");
	if(fin==0)
	{
	    printf("file error!\n");
		exit(1);
	}
	fout=fopen(s2,"w");
	if(fout==0)
	{
	    printf("file error!\n");
		exit(1);
	}
	while((ch=fgetc(fin))!=EOF);
	{
	    fputc(ch,fout);
	}
	fclose(fin);
	fclose(fout);
	return 0;
}