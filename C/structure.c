#include<stdio.h>
#include<string.h>

struct student{
    //some varialblein which u want to store the data
    int roll; //allocated the memory of of 4byets
    char name[20];//allocate 20 bytes
    int id;//allocate 4 bytes
    float Cgpa;//allocates 8 bytes 

    //the total size is = 4+20+4+8=37bytes
    
};
    
// struct {
//     char car[50];
//     int fuel_capicity;
//     float milegae;
// } c1,c2;

int main(){
    // struct car c1 ={"Suzuki",50,12.5};
    // printf("Your Car name is: %s\n",c1.car);
    // printf("Fuel capicity : %d\n",c1.fuel_capicity);
    // printf("Mileage of a Car : %f\n",c1.milegae);

    // struct car  c2 ={"Alto",30,20};
    // printf("Your Car name is: %s\n",c2.car);
    // printf("Fuel capicity : %d\n",c2.fuel_capicity);
    // printf("Mileage of a Car : %f\n",c2.milegae);

    // c1.car ="suzuki";
    // c1.fuel_capicity
//   int rollno_s1=01;
//   char name_s1[20]="Ram";
//   float marks_s1=83.2;

//   int rollno_s2=02;
//   char name_s2[20]="Rani";
//   float marks_s2 =75.6;

//   printf("Name of student is: %s\n",name_s1);
//   printf("Roll of student is: %d\n",rollno_s1);
//   printf("Marks of student is: %f\n",marks_s1);

// struct student s1 ={01,"Ram",021,83.2};
// struct student s2 ={02,"Rani",034,86.2};

// //Acessing the information of student
// printf("Roll no of stuent: %d\n",s1.roll);
// printf("Name no of stuent: %s\n",s1.name);
// printf("id no of stuent: %d\n",s1.id);
// printf("Marks no of stuent: %f\n",s1.Cgpa);

// printf("Roll no of student: %d\n",s2.roll);
// printf("Name no of student: %s\n",s2.name);
// printf("id no of student: %d\n",s2.id);
// printf("Marks no of student: %f\n",s2.Cgpa);


// take input from user and in the structure 

struct student s1;
printf("enter The information about the student: \n");
scanf("%d\n",&s1.roll);
scanf("%s\n",&s1.name);
scanf("%d\n",&s1.id);
scanf("%f",&s1.Cgpa);

printf("Roll no of stuent: %d\n",s1.roll);
printf("Name no of stuent: %s\n",s1.name);
printf("id no of stuent: %d\n",s1.id);
printf("Marks no of stuent: %f\n",s1.Cgpa);



//Declaration of structure

}