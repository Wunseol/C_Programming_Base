extern int Count;

void average(struct student students[])
{
    printf("average:\n");
    for(int i=1; i <= Count; i++){
        printf("%d %s %d %d %d %lf\n",students[i].num,students[i].name,students[i].math,students[i].english,students[i].computer,students[i].average);
    }
    
}