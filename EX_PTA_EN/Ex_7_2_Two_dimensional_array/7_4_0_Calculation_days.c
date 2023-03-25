#include <stdio.h>
int main()
{
    int n,y,m,d,i,j,flag=0,sum=0;
    scanf("%d/%d/%d",&y,&m,&d);
		if(y%4==0&&y%100!=0||y%400==0){
            flag=1;
		}
    if(flag==0){
        for(i=1;i<m;i++){
            switch (i)
            {
            case 1:sum+=31;break;
            case 2:sum+=28;break;
            case 3:sum+=31;break;
            case 4:sum+=30;break;
            case 5:sum+=31;break;
            case 6:sum+=30;break;
            case 7:sum+=31;break;
            case 8:sum+=31;break;
            case 9:sum+=30;break;
            case 10:sum+=31;break;
            case 11:sum+=30;break;
            case 12:sum+=31;break;
            default:
                break;
            }
        }
        printf("%d",sum+d);
    }
    if(flag==1){
        for(i=1;i<m;i++){
            switch (i)
            {
            case 1:sum+=31;break;
            case 2:sum+=29;break;
            case 3:sum+=31;break;
            case 4:sum+=30;break;
            case 5:sum+=31;break;
            case 6:sum+=30;break;
            case 7:sum+=31;break;
            case 8:sum+=31;break;
            case 9:sum+=30;break;
            case 10:sum+=31;break;
            case 11:sum+=30;break;
            case 12:sum+=31;break;
            default:
                break;
            }
        }
        printf("%d",sum+d);
    }
    return 0;
}
