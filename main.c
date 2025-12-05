/******************************************************************************

Welcome to GDB Online.
  GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
  C#, OCaml, VB, Perl, Swift, Prolog, Javascript, Pascal, COBOL, HTML, CSS, JS
  Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int main() {
    char name[10];
    int age;
    int distance;
    int price;
    printf("Enter passenger name: ");
    scanf("%s", name);   
    printf("Enter age: ");
    scanf("%d", &age);
    printf("Enter travel distance (km): ");
    scanf("%d", &distance);
    price = distance * 3;
     if (age < 0) {
    printf("Ticket price: Error \n");
    return 0;
    }

    if (age < 5) {
        price = 0;          
    }
    if (age > 60) {
        price = price / 2;      
    }
    printf("BUS TICKET SLIP:\n");
    printf("Passenger Name : %s\n", name);
    printf("Age            : %d\n", age);
    printf("Distance (km)  : %d\n", distance);
    printf("Ticket Price   : %d\n", price);

    return 0;
}
