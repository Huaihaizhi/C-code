 # include<stdio.h>
 # include<stdlib.h>
 int main()
 {
     FILE *fp;
	 char ch;
	 fp=fopen("F:\\lesson1.txt","w");
	 if(fp==0)
	 {
	     printf("file error!\n");
		 exit(1);
	 }
	 printf("Enter a text(end with '$'):\n");
	 ch=getchar;
	 while(ch!='$')
	 {
	     fputc(ch,fp);
		 ch=getchar();
	 }
	 fclose(fp);
	 return 0; 
 }