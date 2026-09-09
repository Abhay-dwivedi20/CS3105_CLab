#include <stdio.h>
#include <ctype.h>

// 2.1
//  int main()
//  {
//      int n;
//      printf("Enter a number: ");
//      scanf("%d", &n);
//      if (n > 0)
//      {
//          printf("The number is positive.\n");
//      }
//      else if (n < 0)
//      {
//          printf("The number is negative.\n");
//      }
//      else
//      {
//          printf("The number is zero.\n");
//      }
//      return 0;
//  }

// 2.2
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if (n % 5 == 0 && n % 11 == 0)
//     {
//         printf("The number is divisible by both 5 and 11.\n");
//     }
//     else if (n % 5 == 0)
//     {
//         printf("The number is divisible by 5.\n");
//     }
//     else if (n % 11 == 0)
//     {
//         printf("The number is divisible by 11.\n");
//     }
//     else
//     {
//         printf("The number is not divisible by either 5 or 11.\n");
//     }
//     return 0;
// }

// 2.3
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     if (n % 2 == 0)
//     {
//         printf("The number is even.\n");
//     }
//     else
//     {
//         printf("The number is odd.\n");
//     }
//     return 0;
// }

// 2.4
// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if ((ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') || (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'))
//     {
//         printf("The character is a vowel.\n");
//     }
//     else
//     {
//         printf("The character is a consonant.\n");
//     }
//     return 0;
// }

// 2.5
// int main()
// {
//     int month;
//     printf("Enter a month number (1-12): ");
//     scanf("%d", &month);
//     switch (month)
//     {
//     case 1:
//         printf("January 31days \n");
//         break;
//     case 2:
//         printf("February 28days \n");
//         break;
//     case 3:
//         printf("March 31days \n");
//         break;
//     case 4:
//         printf("April 30days \n");
//         break;
//     case 5:
//         printf("May 31days \n");
//         break;
//     case 6:
//         printf("June 30days \n");
//         break;
//     case 7:
//         printf("July 31days \n");
//         break;
//     case 8:
//         printf("August 31days \n");
//         break;
//     case 9:
//         printf("September 30days \n");
//         break;
//     case 10:
//         printf("October 31days \n");
//         break;
//     case 11:
//         printf("November 30days \n");
//         break;
//     case 12:
//         printf("December 31days \n");
//         break;
//     default:
//         printf("Invalid month number. Please enter a number between 1 and 12.\n");
//         break;
//     }
//     return 0;
// }

// 2.6
// int main()
// {
//     int n;
//     printf("Enter a number: ");
//     scanf("%d", &n);
//     int notes_100rs = n / 100;
//     int notes_50rs = (n % 100) / 50;
//     int notes_10rs = (n % 50) / 10;
//     int notes_5rs = (n % 10) / 5;
//     int notes_2rs = (n % 5) / 2;
//     int notes_1rs = n % 2;
//     printf("Number of 100 Rs notes: %d\n", notes_100rs);
//     printf("Number of 50 Rs notes: %d\n", notes_50rs);
//     printf("Number of 10 Rs notes: %d\n", notes_10rs);
//     printf("Number of 5 Rs notes: %d\n", notes_5rs);
//     printf("Number of 2 Rs notes: %d\n", notes_2rs);
//     printf("Number of 1 Rs notes: %d\n", notes_1rs);
//     return 0;
// }

// 2.7
// int main()
// {
//     int angle1, angle2, angle3;
//     printf("Enter the three angles of the triangle: ");
//     scanf("%d %d %d", &angle1, &angle2, &angle3);
//     if (angle1 + angle2 + angle3 == 180 && angle1 > 0 && angle2 > 0 && angle3 > 0)
//     {
//         printf("The triangle is valid.\n");
//     }
//     else
//     {
//         printf("The triangle is not valid.\n");
//     }
//     return 0;
// }

// 2.8
// int main()
// {
//     int side1, side2, side3;
//     printf("Enter the three sides of the triangle: ");
//     scanf("%d %d %d", &side1, &side2, &side3);
//     if (side1 == side2 && side2 == side3)
//     {
//         printf("The triangle is equilateral.\n");
//     }
//     else if (side1 == side2 || side2 == side3 || side1 == side3)
//     {
//         printf("The triangle is isosceles.\n");
//     }
//     else
//     {
//         printf("The triangle is scalene.\n");
//     }
//     return 0;
// }

// 2.9
// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (isalpha(ch))
//     {

//         printf("The character is an alphabet.\n");
//     }
//     else if (isdigit(ch))
//     {
//         printf("The character is a digit.\n");
//     }
//     else
//     {
//         printf("The character is a special character.\n");
//     }
// return 0;
// }

// 2.10
// int main()
// {
//     char ch;
//     printf("Enter a character: ");
//     scanf("%c", &ch);
//     if (isupper(ch))
//     {
//         printf("The character is an uppercase letter.\n");
//     }
//     else if (islower(ch))
//     {
//         printf("The character is a lowercase letter.\n");
//     }
//     else
//     {
//         printf("The character is not an alphabet letter.\n");
//     }
//     return 0;
// }

// 2.11
int main()
{
    int number;
    printf("Enter a number: ");
    scanf("%d", &number);
    switch (number)
    {
    case 1:
        printf("monday\n");
        break;
    case 2:
        printf("tuesday\n");
        break;
    case 3:
        printf("wednesday\n");
        break;
    case 4:
        printf("thursday\n");
        break;
    case 5:
        printf("friday\n");
        break;
    case 6:
        printf("saturday\n");
        break;
    case 7:
        printf("sunday\n");
        break;
    default:
        printf("Invalid input. Please enter a number between 1 and 7.\n");
        break;
    }
    return 0;
}