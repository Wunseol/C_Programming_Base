#include <stdio.h>

#define Mile_to_meter 1609          // 1 Ӣ�� = 1609 ��
#define Foot_to_centimeter 30.48    // 1 Ӣ�� = 30.48 ����
#define Inch_to_centimeter 2.54     // 1 Ӣ�� = 2.54 ����



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