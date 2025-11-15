#include<stdio.h>
#include<string.h>

int main() {
   FILE *fp = fopen("input.txt", "r");

    if (fp == NULL) {
         printf("File tidak dapat dibuka.\n");
         return 1;}
    
    char arr[1000][1000];

    fgets(arr[0], 1000, fp);