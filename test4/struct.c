#include <stdio.h>
#include <cs50.h>
#include <stdlib.h>
#include <string.h>
#include <math.h>
#include "struct.h"

#define STUDENTS 3

int main(void)
{
    student students[STUDENTS];
    
    for (int i = 0; i < STUDENTS; i++) { 
        printf("Student name: ");
        students[i].name = GetString();
        
        printf("Student city: ");
        students[i].city = GetString();
    }
    
    FILE* file = fopen("students.csv", "w");
    if (file != 0) {
        for (int i = 0; i < STUDENTS; i++) {
            fprintf(file, "%s,%s\n", students[i].name, students[i].city);
        }
        fclose(file);
    }
    for (int i = 0; i < STUDENTS; i ++) {
        free(students[i].name);
        free(students[i].city);
    }
}