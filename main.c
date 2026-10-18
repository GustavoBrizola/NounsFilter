#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_LINE_LENGTH 1024
#define MAX_HEADER_LENGTH 1024

int main() 
{
    char* WhatFind = NULL; 
    char* WhereHas = NULL; 
    char* WhereGo = NULL;

    // Name the file
    char path[100];
    printf("File Name *add extension*:");
    fgets(path, sizeof(path), stdin);
    path[strcspn(path, "\n")] = '\0';
    WhereHas = path;

    // Create the File
    char path2[100];
    printf("filtered file name *Add extension*: ");
    fgets(path2, sizeof(path2), stdin);  
    path2[strcspn(path2, "\n")] = '\0';
    WhereGo = path2;

    // Find the Thing
    char path3[100];
    printf("what number/word find: ");
    fgets(path3, sizeof(path3), stdin);
    path3[strcspn(path3, "\n")] = '\0';
    WhatFind = path3;


    // r - reading
    FILE * input_file = fopen(WhereHas, "r");

    // w - writing
    FILE * output_file = fopen(WhereGo, "w");


    // Read Header
    char header[MAX_HEADER_LENGTH];
    fputs(header, output_file);

    // Read all
    char line[MAX_LINE_LENGTH];
    while(fgets(line, MAX_LINE_LENGTH, input_file) != NULL)
    {
        if(strstr(line, WhatFind) != NULL)
        {
            fputs(line, output_file);
        }
    }

    // Closes File
    fclose(input_file); fclose(output_file);
    
    return 0;
}