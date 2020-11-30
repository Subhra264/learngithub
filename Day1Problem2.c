/*

author:Subhradeep Chakraborty
Roll no: 19101104032
Day: 1
Problem Statement: Write a menu driven program in C language to perform the following operations:
1.	To check whether a given number is prime or not?
2.	To check whether a given number is Armstrong or not?
3.	Find out the largest among three numbers.
4.	Exit


*/

#include <stdio.h>
int cubeOf(int n){
    return n*n*n;
}

int main() {

    int option;

    printf("Choose what you want to do : \n");
    printf("Enter 1 to check whether a given number is prime or not...\n");
    printf("Enter 2 to check whether a given number is Armstrong number...\n");
    printf("Enter 3 to find the largest among three given numbers...\n");
    printf("Enter 4 to exit...\n");
    scanf("%d" , &option);

    switch(option){
        case 1:{
            int number;
            int isPrime = 1;//default value is true
            printf("\nEnter the number : ");
            scanf("%d" , &number);
            if(number == 2)
                printf("\nThis is a prime number.");
            else if(number == 3)
                printf("\nThis is a prime number");
            else{
                for(int i = 2; i <= number/2 ; i++){
                    if((number % i) == 0){
                        printf("\nIt is not a prime number");
                        isPrime = 0;
                        break;
                    }

                }
                if(isPrime)
                    printf("\nThis is a prime number");
            }
            break;
        }
        case 2:{
            int number;
            int sum = 0;
            int temp = 0;

            printf("\nEnter the number : \n");
            scanf("%d" , &number);
            int num = number;
            do{
                temp = num % 10;
                num = num / 10;
                sum += cubeOf(temp);
            }while(num != 0);
            if(sum == number)
                printf("\nThis is an Armstrong number");
            else
                printf("\nThis is not an Armstrong number");

            break;
        }
        case 3:{
            int first ,second , third;
            printf("\nEnter three numbers :\n");
            scanf("%d %d %d" , &first , &second , &third);
            int largest = first;
            if(second > largest){
                largest = second;

            }
            if(third > largest)
                largest = third;
            printf("\nThe largest among the three given number is : %d" , largest);
            break;
        }
        case 4:{
            printf("\nExited...");
            break;
        }
        default:
            printf("\nSorry, input is not valid");

    }
	return 0;
}

/*
input :1
output:
    Enter the number : 25

    It is not a prime number

input :2
output :
    Enter the number :
    371

    This is an Armstrong number

input :3
output :
    Enter three numbers :
    2 89 3

    The largest among the three given number is : 89

input : 4
output :
    Exited...

input : 6
output :
    Sorry, input is not valid
*/
