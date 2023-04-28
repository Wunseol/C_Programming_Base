#include <stdio.h>
#include "C:\VS Code\C_Programming\C_Language\C_Programming_Base\EX_TB_CN\10第十章 函数与程序结构\Custom_header_file\length.h"
// #include "" 表示在当前文件夹查找，找不到的话就直接写入路径

int main()
{
    double foot, inch, mile;
    printf("Input mile , foot and inch:");
    scanf("%lf %lf %lf", &mile ,&foot ,&inch);
    printf("%lf miles = %lf meter \n", mile, mile*Mile_to_meter);
    printf("%lf feet = %lf centimeter \n", foot, foot*Foot_to_centimeter);
    printf("%lf inches = %lf centimeter \n", inch, inch*Inch_to_centimeter);
    
    return 0;

}