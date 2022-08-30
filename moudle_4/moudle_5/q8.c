#include <stdio.h>
#include <stdint.h>


FILE* openInputFile(char* filename)
{
    FILE* aFile;
    aFile = fopen(filename, "r");
    return aFile;
}


FILE* openOutputFile(char* filename)
{}


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


int main(void) {
    int32_t max_l=80;
    FILE* file;
    char filename[81];
    readString(filename, max_l);
    file=openInputFile(filename);
    if (file == NULL) {
        printf("Input file can't be opened\n");
    } else {
        char x = getchar();
        char i;
        int32_t num = 0;
        while (i != EOF) {
            i=getc(file);
            if (i == x) {
                num++;
            }
        }
        printf("%d\n", num);
        fclose(file);
    }
}
