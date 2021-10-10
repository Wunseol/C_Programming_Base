//本题目要求一元二次方程ax^2＋bx＋c＝0的根，结果保留2位小数
# include <stdio.h>
# include <stdlib.h>
# include <math.h>

int main() {
    double a,b,c,value,value1,complex;
    scanf("%lf %lf %lf",&a,&b,&c);
    double de_ta = b * b - 4 * a * c;
    if (a == 0 && b == 0) {
        if (c == 0) printf("Zero Equation");
        else printf("Not An Equation");
    }else {
        if (de_ta == 0) {
            value = (-1 * b) / (2 * a);
            printf("%.2lf",value);
        }else if (de_ta > 0) {
            if (a == 0) {
                value = (-1) * (c / b);
                printf("%.2lf",value);
            }else {
                value = (-1 * b - sqrt(de_ta)) / (2 * a);
                value1 = (-1 * b + sqrt(de_ta)) / (2 * a);
                printf("%.2lf\n%.2lf",value1,value);
            }
        }else {
            value1 = sqrt(-1 * de_ta) / (2 * a);
            value = (-1) * (b / (2 * a));
            if (b == 0) {
                printf("0.00+%.2lfi\n0.00%.2lfi",value1,-1*value1);
            }else {
                complex = (value1 > 0) ? value1:(-1)*value1;
                printf("%.2lf+%.2lfi\n%.2lf%.2lfi",value,complex,value,-1*complex);
            }
        }
    }
    return 0;
}