//Structure is a composite data type
// It is used to implement linked list, stack, queue, graph, tree

#include<stdio.h>
#include<string.h>
int main(){
struct student {
    int id;
    int mobile;
};
struct student s1,s2,s3;

printf("Input name id mobile\n");
scanf("%d %d", &s1.id,&s1.mobile);
printf("Input name id mobile\n");
scanf("%d %d", &s2.id,&s2.mobile);
printf("Input name id mobile\n");
scanf("%d %d", &s3.id,&s3.mobile);

printf("\n%d %d\n", s1.id, s1.mobile);
printf("%d  %d\n", s2.id, s2.mobile);
printf("%d  %d\n", s3.id, s3.mobile);

}
