#include<stdio.h>


 // //Creating the structure for the Team Player

struct Player{
    char name[20];    // 1 bytes for each char * 20 = 20 bytes.
    int age;          // 4 bytes 
    float runrate;    // 4 bytes                  
                //total size of this structure is = 28
};



int main(){
        // how we store the values  in structure

       struct Player P1 = {"Ms Dhoni",43,200};
       struct Player P2 = {"Virat Kholi",37,180};
       struct Player P3 = {"Rohit Sharma",38,190};
       struct Player P4 = {"Yashavi J",26,150};

    //accesing the information of Player 1
    printf("Name Of the Player: %s\n",P1.name);
    printf("Age of the Player: %d\n",P1.age);
    printf("Runrate of Player: %f\n",P1.runrate);

    //accessing the information of Player 2
    printf("Name Of the Player: %s\n",P2.name);
    printf("Age of the Player: %d\n",P2.age);
    printf("Runrate of Player: %f\n",P2.runrate);

    //accessing the information of Player 3
    printf("Name Of the Player: %s\n",P3.name);
    printf("Age of the Player: %d\n",P3.age);
    printf("Runrate of Player: %f\n",P3.runrate);

    //accessing the information of player 4
    printf("Name Of the Player: %s\n",P4.name);
    printf("Age of the Player: %d\n",P4.age);
    printf("Runrate of Player: %f\n",P4.runrate);


    // Size of the struct player in computer Memory
    printf("Size of Player Datatype  in Computer memory: %d\n",sizeof(P1));

return 0;
}












// struct Bike{
//     char name[20]; //20 bytes used
//     int model;//4 bytes
//     float milage;//8 bytes

//     //the toatal is given in every block is 20+4+8=32 bytes;
// };

//    struct Bike B1;

//     //taking input from user for bike details

//     printf("Enter about Your Bike: ");
//     printf("Bike name ");
//     scanf("%s",&B1.name);
//     printf("Model Of Your Bike");
//     scanf("%d",&B1.model);
//     printf("What is the milage of your bike: ");
//     scanf("%f",&B1.milage);
//     printf("Your Enter Data is:");
 
//     //providing output to the user
//     printf("Your Bike Name: %s\n",B1.name);
//     printf("Your Bike Model: %d\n",B1.model);
//     printf("Your Bike Milage: %f\n",B1.milage);

//     //size of Bike in Computer Memory
//     printf("Size of Bike in computer Memory: %d\n",sizeof(B1));




