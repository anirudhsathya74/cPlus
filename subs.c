#include<stdio.h>
int main() {
    float kan,eng,maths,hindi,science,sst,avmar;
    printf("Letter grading\n");
    printf("SSLC Marks Grading\n");
    printf("Enter the marks for Kannada:");
    scanf("%f",&kan);
    printf("Enter the marks for English:");
    scanf("%f",&eng);
    printf("Enter the marks for Hindi:");
    scanf("%f",&hindi);
    printf("Enter the marks for Maths:");
    scanf("%f",&maths);
    printf("Enter the marks for Science:");
    scanf("%f",&science);
    printf("Enter the marks for Social Science:");
    scanf("%f",&sst);
    avmar=(kan+eng+hindi+maths+science+sst)/6.25;
    printf("The average marks are = %f\n",avmar);
    if((avmar<35)&&(avmar>0))
    printf("Fail");
    if((avmar<=40)&&(avmar>35))
    printf("Grade C");
    if((avmar<=50)&&(avmar>40))
    printf("Grade C+");
    if((avmar<=60)&&(avmar>50))
    printf("Grade B");
    if((avmar<=70)&&(avmar>60))
    printf("Grade B+");
    if((avmar<=80)&&(avmar>70))
    printf("Grade A");
    if((avmar<=100)&&(avmar>80))
    printf("Grade A+");
}