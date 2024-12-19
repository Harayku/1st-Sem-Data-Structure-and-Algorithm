#include <stdio.h>
#include <stdlib.h>

int main()
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

    return 0;
}
