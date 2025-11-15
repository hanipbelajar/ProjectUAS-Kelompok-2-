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