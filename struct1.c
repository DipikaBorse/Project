#include<stdio.h>

struct student{
char Name[100];
char sub[100];
int rollno;
float marks;
}P[6];
int main(){
int i;
printf("Enter Information of students:\n");

for (i=0; i<5; ++i){
P[i].rollno =i+1;
printf("\nFor Roll Number %d,\n",P[i].rollno);
printf("Enter Name of first Student");
scanf("%s",&P[i].Name);
printf("Enter Name of  sub ");
scanf("%s",&P[i].sub);
printf("Enter marks");
scanf("%f",&P[i].marks);
}
printf("Displaying Information:\n\n");
//Displaying informatiom
for (i=0; i<5; ++i){
    printf("\nRollNumber:%d\n", i+1);
    printf("Name:");
    puts(P[i].Name);
    printf("Sub:");
    puts(P[i].sub);
    printf("Marks:%f",P[i].marks);
    printf("\n");


}

    return 0;
}
