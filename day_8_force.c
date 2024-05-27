// WRITE A PROGRAM TO CALCULATE FORCE OF ATTRACTION ON A BODY OF MASS M TAKE G = 9.8

#include <stdio.h>

float force(float mass);

int main()
{
    float mass;
    printf("**************\tHi Welcome. This program will help you to calculate force of an body \t************\n");
    printf("THIS PROGRAM WILL CALCULATE FORCE OF ATTRACTION ON A BODY OF MASS M (ACCLERATION TAKEN TAKEN -> G = 9.8)\n");
    printf("FORMULA TO CALCULATE FORCE IS [FORCE = MASS X ACCLERATION] \n");
    printf("SO LETS GET STARTED !!\n");
    printf("Enter the mass of the body: ");
    scanf("%f", &mass);
    printf("the force applied on the body = %f\n", force(mass));
    // printf("To exit the program please press y: ");
    char input[100]; // Assuming the maximum length of input is 100 characters
    char quitCommand[] = "quit";

    printf("To quit this program please type 'quit' to to quit the program.\n");
    printf("IF THE PROGRAM IS NOT QUITING PLEASE PRESS CTRL+C TO EXIT THE PROGRAM!!!!\n");

    // Loop indefinitely until the user types 'quit'
    while (1)
    {
        printf("Enter a command: \n");
        fgets(input, sizeof(input), stdin);

        // Remove newline character if present
        if (input[strlen(input) - 1] == '\n')
            input[strlen(input) - 1] = '\0';

        // Check if the user wants to quit
        if (strcmp(input, quitCommand) == 0)
        {
            printf("Exiting program.\n");
            break; // Exit the loop
        }

        // Add your program logic here based on user input
        // printf("You entered: %s\n", input);
    }

    return 0;
}

float force(float mass)
{
    float _force = mass * 9.8;
    return _force;
}

// THIS PROGRAM STILL NEEDS SOME CHANGE THAT WILL BE DONE FOR EXAMPLE WHEN USER INPUT NO THEN THE SAME PROGRAM SHOULD RUN AGAIN.