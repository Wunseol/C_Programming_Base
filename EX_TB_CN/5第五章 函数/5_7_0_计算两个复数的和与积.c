#include <stdio.h>
double result_real,result_imag;
int main()
{
    double imag1,imag2,real1,real2;
    void complex_prod(double real1,double imag1,double real2,double imag2);
    void complex_add(double real1,double imag1,double real2,double imag2);
    printf("Enter 1st complex number(real and imaginary):");
    scanf("%lf%lf",&real1,&imag1);
    printf("Enter 2nd complex number(real and imaginary):");
    scanf("%lf%lf",&real2,&imag2);
    complex_add(real1,imag1,real2,imag2);
    printf("addition of complex is %f + %fi\n",result_real,result_imag);
    complex_prod(real1,imag1,real2,imag2);
    printf("product of complex is %f + %fi\n",result_real,result_imag);
    return 0;
}
void complex_add(double real1,double imag1,double real2,double imag2)
{
    result_real=real1+real2;
    result_imag=imag1+imag2;
}
void complex_prod(double real1,double imag1,double real2,double imag2)
{
    result_real=real1*real2-imag1*imag2;
    result_imag=real1*imag2+real2*imag1;
}