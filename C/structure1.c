#include<stdio.h>
#include<string.h>

// struct student{
//     int roll;
//     int id;
//     char name[20];
//     float marks;
// };

// struct Bike{
//     char name[20]; //20 bytes used
//     int model;//4 bytes
//     float milage;//8 bytes

//     //the toatal is given in every block is 20+4+8=32 bytes;
// };

// // struct abc{
// //     int x;
// //     int y;
// //     int z;
// // } e,f;
// int main(){
//     //store information of two student
//     //student 1 Information 
//     // int roll_s1=01;
//     // char name_s1[20]="Ram";
//     // float marks_s1 =80.6;

//     // //student2  information
//     // int roll_s2=01;
//     // char name_s1[20]="Rani";
//     // float marks_s2 =85.6;

//     // struct student s1 ={01,52,"Ram",80.6};
//     // struct student s2 ={02,63,"Rani",85.6};

//     // //acessing element of structures 
//     // printf("Student Name: %s\n",s1.name);
//     // printf("Student Id: %d\n",s1.id);
//     // printf("Student Roll: %d\n",s1.roll);
//     // printf("Student Marks: %f\n",s1.marks);

//     // printf("Student Name: %s\n",s2.name);
//     // printf("Student Id: %d\n",s2.id);
//     // printf("Student Roll: %d\n",s2.roll);
//     // printf("Student Marks: %f\n",s2.marks);


//     // e.x=4;
//     // e.y=9;
//     // e.z=10;

//     // f.x=3;
//     // f.y=2;
//     // f.z=1;

//     // printf("Student information %s\n",s1.name);
//     // printf("%d\n",e.x);
//     // printf("%d\n",e.y);
//     // printf("%d\n",e.z);

//     struct Bike B1;
    
//     printf("Enter about Your Bike: ");
//     printf("Bike name ");
//     scanf("%s",&B1.name);
//     printf("Model Of Your Bike");
//     scanf("%d",&B1.model);
//     printf("What is the milage of your bike: ");
//     scanf("%f",&B1.milage);
//     printf("Your Enter Data is: ");

//     printf("%s\n",B1.name);
//     printf("%d\n",B1.model);
//     printf("%f\n",B1.milage);

//     return 0;

//Declaration of Structure
struct student{
    char name[20];
    int roll;
    double percentage;
};

int main(){
    //storing the information of student one by one 
    struct student s1 ={"Ram",01,85.6};
    struct student s2 ={"Rani",02,87.8};

    //accesing the information of student one by one
    printf("The Information of student 1: \n");
    printf("Student Name: %s\n",s1.name);
    printf("Student Roll - %d\n",s1.roll);
    printf("Student Percentage: %f\n",s1.percentage);

    printf("The Information of student 2: \n");
    printf("Student Name: %s\n",s2.name);
    printf("Student Roll - %d\n",s2.roll);
    printf("Student Percentage is : %f\n",s2.percentage);

    //the size of the structure 
    printf("The Memory Allocated to the Student 1: %d\n",sizeof(s1));
    
    return 0;

    
}