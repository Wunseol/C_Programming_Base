extern int Count;

void modify(struct student *p)
{
    int num, course, score;
    int i;
    int pos;
    printf("Input the number of the student to be update:");
    scanf("%d",&num);
    printf("Choice the course:1.math 2.english 3.computer:");
    scanf("%d",&course);
    printf("Input the new score:");
    scanf("%d",&score);
    for(i = 1; i <= Count; i++, p++){
        if(p->num==num)break;
    }
    if(i-1 <= Count){
        switch(course){
            case 1:p->math=score;break;
            case 2:p->english=score;break;
            case 3:p->computer=score;break;
        }
        pos=i;
        printf("After update:\n");
        printf("num\tmath\tenglish\tcomputer\n");
        printf("%d\t%d\t%d\t%d\t%lf\n",p->num,p->math,p->english,p->computer,p->average=(p->math+p->english+p->computer)/3);
    }else{
        printf("Not fount!\n");
    }     
        
}

void sort(struct student students[])
{
    int i, j;
    int index;
    struct student temp;
    printf("sort:");
    for(i = 1; i <= Count; i++){
        index=i;
        for(j=i+1;j <= Count; j++){
            if(students[j].average>students[index].average){
                index=j;
            }
        }
        temp=students[index];
        students[index]=students[i];
        students[i]=temp;
    }
    printf("num\t name\t average\n");
    for(i = 1; i <= Count; i++){
        printf("%d\t%s\t%.2lf\n",students[i].num,students[i].name,students[i].average);
    }

}
