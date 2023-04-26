#include <stdio.h>

#define Mile_to_meter 1609          // 1 英里 = 1609 米
#define Foot_to_centimeter 30.48    // 1 英尺 = 30.48 厘米
#define Inch_to_centimeter 2.54     // 1 英寸 = 2.54 厘米



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