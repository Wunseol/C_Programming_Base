#include <stdio.h>
#include <string.h>
#define MaxSize 50

int Count = 0;

struct student
{
    int num;
    char name[10];
    int computer, english, math;
    double average;
};


#include "C:\VS Code\C_Programming\C_Language\C_Programming_Base\EX_TB_EN\CPT_10_Functions_and_Program_Structure\10_10_1_input_output.c"
#include "C:\VS Code\C_Programming\C_Language\C_Programming_Base\EX_TB_EN\CPT_10_Functions_and_Program_Structure\10_10_2_computing.c"
#include "C:\VS Code\C_Programming\C_Language\C_Programming_Base\EX_TB_EN\CPT_10_Functions_and_Program_Structure\10_10_3_update.c"
#include "C:\VS Code\C_Programming\C_Language\C_Programming_Base\EX_TB_EN\CPT_10_Functions_and_Program_Structure\10_10_4_search.c"



int main()
{
    
    struct student students[MaxSize];
    new_student(students);
    output_student(students);
    average(students);
    sort(students);
    modify(students);
    output_student(students);
    search_student(students);

    return 0;
    
}
