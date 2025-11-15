#include<stdio.h>
#include<string.h>

int main() {
   FILE *fp = fopen("input.txt", "r");

    if (fp == NULL) {
         printf("File tidak dapat dibuka.\n");
         return 1;}
    
    char arr[1000][1000];

    fgets(arr[0], 1000, fp);
    
    int i = 1;
    while (fscanf(fp, "%s", arr[i]) == 1)
    { i++; }
     
    fclose(fp);

    fp = fopen("kosakata.txt","w");

    int n=i;
    int karakter=0;
    i=1; 
    while (i<=n)
    {  while (arr[i][karakter]!='\0')
        {
            if (arr[i][karakter]>='A' && arr[i][karakter]<='Z')
            {  arr[i][karakter]+=32;  }
            else if (arr[i][karakter]!='\''&& 
                !(arr[i][karakter]>='a' && arr[i][karakter]<='z')&& 
                !(arr[i][karakter]>='A' && arr[i][karakter]<='Z'))
            {  arr[i][karakter]='\0';  }
        karakter++;
        }
    karakter=0;
    i++;
    }
    fprintf(fp,"%s\n",arr[0]);
    printf("%s\n",arr[0]);
    fprintf(fp,"%s=\n",arr[1]);
    printf("%s=\n",arr[1]);

    i=2;
    for ( i; i <= n-1; i++)
    {   int j;
        for (  j = 1; j < i; j++)
        {