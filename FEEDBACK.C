#include<stdio.h>
int main()
{
char ch;
FILE*fp;
fp=fopen("feedback.txt","w");
if(fp==NULL)
{
printf("file opening failed\n");
return 0;
}
fprintf(fp,"feedback about the C program\n");
fprintf(fp," C is very useful language\n");
fprintf(fp," It is easy to understand\n");
fprintf(fp," It is a basic language that is used all over the world\n");
fprintf(fp," It is useful to improve our technical skills\n");
fprintf(fp," C is a powerful language and efficient\n");
fclose(fp);
fp=fopen("feedback.txt","a");
if(fp==NULL)
{
printf("file opening failed\n");
return 0;
}
fprintf(fp,"feedback about the C-Sir");
fprintf(fp,"Our C programming sir makes every class intersting and interactive");
fprintf(fp," He explains difficult concepts in a simple way and helps us understand the logic behind each program");
fprintf(fp," He gives us opportunities to practise and clear our doubts");
fprintf(fp," His teaching motivates us to improve our coding skills and gain confident in programming");
fprintf(fp," We are greatful for his dedication and support.\n");
fclose(fp);
fp=fopen("feedback.txt","r");
if(fp==NULL)
{
printf("file opening failed\n");
return 0;
}
while((ch=fgetc(fp))!=EOF);
{
printf("%c", ch);
}
fclose(fp);
return 0;
}