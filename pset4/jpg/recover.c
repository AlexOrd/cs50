/**
 * recover.c
 *
 * Computer Science 50
 * Problem Set 4
 *
 * Recovers JPEGs from a forensic image.
 */
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

typedef uint8_t  BYTE;
typedef int  BOOL;

BOOL isjpeg(BYTE* buffer);

int main(int argc, char* argv[])
{
    BYTE* buffer = malloc(512 * sizeof(BYTE));
    FILE* openFile = fopen("card.raw", "r");
    FILE* outfile = NULL;
    
    int i = 0;
    
    while (fread(buffer, 1, 512, openFile)) {
        
        if (isjpeg(buffer)) {
            
            if (outfile != NULL) {
                fclose(outfile);
            }
            
            char* filename = malloc(8 * sizeof(char));
            
            sprintf(filename, "%03d.jpg", i);
            i++;
           // printf("%s\n", filename);
            outfile = fopen(filename, "w");
            
            free(filename);
        }
        
        if (outfile != NULL) {
        fwrite(buffer, 1, 512, outfile);
        }
    }
    
    fclose(outfile);
    fclose(openFile);
    free(buffer);
}

BOOL isjpeg(BYTE* buffer)
{
    return (
        buffer[0] == 0xff &&
        buffer[1] == 0xd8 &&
        buffer[2] == 0xff &&
        (buffer[3] & 0xe0) == 0xe0);
}