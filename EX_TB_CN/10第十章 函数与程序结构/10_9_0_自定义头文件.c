#include <stdio.h>
#include "C:\VS Code\C_Programming\C_Language\C_Programming_Base\EX_TB_CN\10��ʮ�� ���������ṹ\Custom_header_file\length.h"
// #include "" ��ʾ�ڵ�ǰ�ļ��в��ң��Ҳ����Ļ���ֱ��д��·��

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