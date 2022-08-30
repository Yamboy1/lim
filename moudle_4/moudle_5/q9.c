#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <ctype.h>

FILE* openOutputFile(char* filename)
{
    FILE* aFile;
    aFile = fopen(filename, "w");
    if (aFile == NULL) {
        printf("Output file can't be opened\n");
    }
    return aFile;
}


FILE* openInputFile(char* filename)
{
    FILE* aFile;
    aFile = fopen(filename, "r");
    if (aFile == NULL) {
        printf("Input file can't be opened\n");
    }
    return aFile;
}


size_t readString(char* string, size_t maxStringLength)
{
    size_t k=0;
    int32_t x=0;
    for (size_t i=0; i < maxStringLength; i++) {
        x=getchar();
        string[i]=x;
        if (string[i]==-1 || string[i] == '\n') {
            i=maxStringLength;
        } else {
            k++;
        }
    }
    string[k] = '\0';
    return k;
}


int main(void) 
{
    int32_t max_l=80;
    FILE* infile;
    FILE* outfile;
    char infilename[81];
    char outfilename[81];
    readString(infilename, max_l);
    infile=openInputFile(infilename);
    readString(outfilename, max_l);
    outfile=openOutputFile(outfilename);
    if (infile != NULL && outfile != NULL) {
        char i;
        char k;
        int32_t j=0;
        while ((i=fgetc(infile)) != EOF) {
            bool space=isspace(k);
            if (j==0 || space) {
            i=toupper(i);
            } else {
                i=tolower(i);
            }
            fputc(i, outfile);
            k=i;
            j++;
        }
    }
    if (infile != NULL) {
        fclose(infile);
    }
    if(outfile != NULL) {
        fclose(outfile);
    }
}
