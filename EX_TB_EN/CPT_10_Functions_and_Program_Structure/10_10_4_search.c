extern int Count;

void search_student(struct student students[])
{
    int num;
    printf("Enter the position:");
    scanf("%d",&num);
    for(int i=num; i <= Count; i++){
        printf("%d %s %d %d %d %lf\n",students[i].num,students[i].name,students[i].math,students[i].english,students[i].computer,students[i].average);
    }

}