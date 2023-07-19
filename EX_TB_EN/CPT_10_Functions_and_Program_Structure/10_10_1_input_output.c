extern int Count;

void new_student(struct student students[])
{
    printf("input Count:");
    scanf("%d",&Count);
    printf("Input the student's number,name,and course scores\n");
    for(int i = 1; i <= Count; i++){
        printf("No.%d:",i);
        scanf("%d %s %d %d %d",&students[i].num,students[i].name,&students[i].math,&students[i].english,&students[i].computer);
        students[i].average=(students[i].math+students[i].english+students[i].computer)/3.0;
    }

}

void output_student(struct student students[])
{
    for(int i=1; i <= Count; i++){
        printf("%d %s %d %d %d %lf\n",students[i].num,students[i].name,students[i].math,students[i].english,students[i].computer,students[i].average);
    }
    
}
