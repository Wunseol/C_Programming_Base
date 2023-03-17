// 输入2个正整数lower和upper（lower≤upper≤100），请输出一张取值范围为[lower，upper]、且每次增加2华氏度的华氏-摄氏温度转换表。
// 温度转换的计算公式：C=5×(F−32)/9，其中：C表示摄氏温度，F表示华氏温度。
#include <stdio.h>
int main()
{
    int lower,upper,fahr;
    double celsius;
    scanf("%d %d",&lower,&upper);
    fahr=lower;
    if(lower>100||upper>100||lower>upper){printf("Invalid.");}
    else{printf("fahr celsius\n");
  
    while(lower<=upper){
    
    celsius=5*(fahr-32.0)/9;

    printf("%d%6.1f\n",fahr,celsius);
    
    fahr=fahr+2;
    lower=fahr;

    }
    }
    return 0;
      
}