#include <stdio.h>
#include <stdlib.h>

int main()
{
    number4();
    return 0;
}

void number1(void)
{
    char studName[50] = "Jet Angelo Pagaduan";
    int studDOB = 8042004;
    int studAge = 20;
    int studContact = "09560931538";
    char studAddress[50] = "42-A I.Fernando.St., Malanday Valenzuela City";
    char motherName[50]  = "Cristina Pagaduan";
    char fatherName[50] = "Jessie Pagaduan";
    char studEmail[50] = "jetangelo04.jp@gmail.com";

    printf("Name: %s\n", studName);
    printf("Date of Birth: %d\n", studDOB);
    printf("Age: %d\n", studAge);
    printf("Contact: %s\n", studContact);
    printf("Address: %s\n", studAddress);
    printf("Name of Mother:%s\n", motherName);
    printf("Name of Father:%s\n", fatherName);
    printf("Email Address:%s\n", studEmail);

}

void number2(void)
{
    int num1, num2;
    printf("Enter First Number: ");
    scanf("%d", &num1);
    printf("Enter Second Number: ");
    scanf("%d", &num2);

    printf("\nFirst Number: %d\n", num1);
    printf("Second Number: %d\n", num2);
    printf("Sum of 2 Numbers: %d\n", num1+num2);
    printf("Product of 2 Number: %d\n", num1*num2);
    printf("Difference of 2 Number: %d\n", num1-num2);
    printf("Average of 2 Number: %d\n", (num1+num2)/2);

}

void number3(void)
{

    printf("%c - %d\n", 'J', 'J');
    printf("%c - %d\n", 'E', 'E');
    printf("%c - %d\n", 'T', 'T');
    printf("%c - %d\n", 'A', 'A');
    printf("%c - %d\n", 'N', 'N');
    printf("%c - %d\n", 'G', 'G');
    printf("%c - %d\n", 'E', 'E');
    printf("%c - %d\n", 'L', 'L');
    printf("%c - %d\n", 'O', 'O');
    printf("%c - %d\n", 'C', 'C');
    printf("%c - %d\n", 'P', 'P');
    printf("%c - %d\n", 'A', 'A');
    printf("%c - %d\n", 'G', 'G');
    printf("%c - %d\n", 'A', 'A');
    printf("%c - %d\n", 'D', 'D');
    printf("%c - %d\n", 'U', 'U');
    printf("%c - %d\n", 'A', 'A');
    printf("%c - %d\n", 'N', 'N');
    printf("\nSum of Decimal Name: %d\n", 'J'+'E'+'T'+'A'+'N'+'G'+'E'+'L'+'O'+'C'+'P'+'A'+'G'+'A'+'D'+'U'+'A'+'N');
}

void number4()
{

    char name1 = 'j';
    char name2 = 'e';
    char name3 = 't';
    char name4 = 'a';
    char name5 = 'n';
    char name6 = 'g';
    char name7 = 'e';
    char name8 = 'l';
    char name9 = 'o';
    char name10 = 'c';
    char name11 = 'p';
    char name12 = 'a';
    char name13 = 'g';
    char name14 = 'a';
    char name15 = 'd';
    char name16 = 'u';
    char name17 = 'a';
    char name18 = 'n';

    int sumofDecimals = name1+name2+name3+name4+name5+name6+name7+
                name8+name9+name10+name11+name12+name13+name14+
                name15+name16+name17+name18;

    printf("%c - %d\n", name1, name1);
    printf("%c - %d\n", name2, name2);
    printf("%c - %d\n", name3, name3);
    printf("%c - %d\n", name4, name4);
    printf("%c - %d\n", name5, name5);
    printf("%c - %d\n", name6, name6);
    printf("%c - %d\n", name7, name7);
    printf("%c - %d\n", name8, name8);
    printf("%c - %d\n", name9, name9);
    printf("%c - %d\n", name10, name10);
    printf("%c - %d\n", name11, name11);
    printf("%c - %d\n", name12, name12);
    printf("%c - %d\n", name13, name13);
    printf("%c - %d\n", name14, name14);
    printf("%c - %d\n", name15, name15);
    printf("%c - %d\n", name16, name16);
    printf("%c - %d\n", name17, name17);
    printf("%c - %d\n", name18, name18);
    printf("\nSum of Decimal Name: %d\n", sumofDecimals);
}

void number5(void)
{
    int name1 = 74;
    int name2 = 69;
    int name3 = 84;
    int name4 = 65;
    int name5 = 78;
    int name6 = 71;
    int name7 = 69;
    int name8 = 76;
    int name9 = 79;
    int name10 = 67;
    int name11 = 80;
    int name12 = 65;
    int name13 = 71;
    int name14 = 65;
    int name15 = 68;
    int name16 = 85;
    int name17 = 65;
    int name18 = 78;

    printf("%d is %c\n", name1, name1);
    printf("%d is %c\n", name2, name2);
    printf("%d is %c\n", name3, name3);
    printf("%d is %c\n", name4, name4);
    printf("%d is %c\n", name5, name5);
    printf("%d is %c\n", name6, name6);
    printf("%d is %c\n", name7, name7);
    printf("%d is %c\n", name8, name8);
    printf("%d is %c\n", name9, name9);
    printf("%d is %c\n", name10, name10);
    printf("%d is %c\n", name11, name11);
    printf("%d is %c\n", name12, name12);
    printf("%d is %c\n", name13, name13);
    printf("%d is %c\n", name14, name14);
    printf("%d is %c\n", name15, name15);
    printf("%d is %c\n", name16, name16);
    printf("%d is %c\n", name17, name17);
    printf("%d is %c\n", name18, name18);
}
