#include <stdio.h>
#include<bits/stdc++.h>
using namespace std;

#define FILE_INPUT_STRING "datafile1.c"
#define FILE_OUTPUT_STRING "parentheses.txt"


FILE *p1,*p2;
char c;
char str[1000];

void readFileCharacter();
void writeFileCharacter();

void readFileString();
void writeFileString();


int main()
{
    writeFileString();
}


void readFileCharacter()
{
    p1 = fopen(FILE_INPUT_STRING, "r");
    if(!p1)
        printf("\nFile can't be opened!\n");
    else
    {
        while((c = fgetc(p1)) != EOF)
        {
            cout << c;
        }
    }
    fclose(p1);
}

void writeFileCharacter()
{
    p2 = fopen(FILE_OUTPUT_STRING, "w");
    ///statement
    ///fputc('A', p2);
    fclose(p2);
}

void readFileString()
{
    p1 = fopen(FILE_INPUT_STRING, "r");
    if(!p1)
        printf("\nFile can't be opened!\n");

    else
    {
        while(fgets(str, sizeof(str), p1) != NULL)
        {
            str[strlen(str) - 1] = '\0';
            cout << str << endl;
        }
    }
    fclose(p1);
}

void writeFileString()
{
    p2 = fopen(FILE_OUTPUT_STRING, "w");
    ///statement
    fprintf(p2, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", p2);
    fclose(p2);
}
