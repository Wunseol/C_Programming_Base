#include<stdio.h>

int main()
{
    int x,y,z,min;
    scanf("%d %d %d",&x,&y,&z);
    if(x>y){//将x位置存放xy中最小的那个 
  	    min = x;
  	    x = y;
  	    y = min;  	
    }
    if(x>z){//将x位置存放xz中最小的那个
  	    min = x;
  	    x = z;
  	    z = min;
    }
    if(y>z) {//经过以上两步，x位置已经是三个数中最小的了，现在仅需将yz中小的那个放到y位置即可 
  	    min = y;
  	    y = z;
  	    z = min;
    }
    printf("%d->%d->%d",x,y,z);
    return 0;
}

//如果第一个if判断不成立，则直接进行下面x与z的比较 
//如果二个if判断仍不成立，则直接进行下面y与z的比较 
//如果三个if判断仍不成立，则直接输出