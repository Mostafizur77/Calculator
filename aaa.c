#include<math.h>
#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

float result;
FILE *fp;

void sub(float p, float q)
{
    fp = fopen("Text.txt", "ab+");
    result = p - q;
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: %.2f - %.2f  \tResult:%.2f \t%s  %s\n", p, q, result, __DATE__, __TIME__);
    fclose(fp);
}

void mul(float p, float q)
{
    fp = fopen("Text.txt", "ab+");
    result = p * q;
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: %.2f x %.2f  \tResult:%.2f \t%s  %s\n", p, q, result,  __DATE__, __TIME__);
    fclose(fp);
}

void divi(float p, float q)
{
    fp = fopen("Text.txt", "ab+");
    result = p / q;
    if(q==0)
    {
        printf("  _______( Math ERROR )_______    \n");
    }
    else
        printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: %.2f / %.2f    \tResult:%.2f \t%s  %s\n", p, q, result, __DATE__, __TIME__);
    fclose(fp);
}

void per(float p)
{
    fp = fopen("Text.txt", "ab+");
    result = p/100;
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: %.2f (%%)     \tResult:%.2f \t%s  %s\n", p, result,  __DATE__, __TIME__);
    fclose(fp);
}

void logg(float p)
{
    fp = fopen("Text.txt", "ab+");
    result = log10(p);
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: Log(10) %.2f    \tResult:%.2f\t%s  %s\n", p, result, __DATE__, __TIME__);
    fclose(fp);
}
void square(float p)
{
    fp = fopen("Text.txt", "ab+");
    result = pow(p, 2);
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: (Square) %.2f    \tResult:%.2f\t%s  %s\n", p, result, __DATE__, __TIME__);
    fclose(fp);
}
void cube(float p)
{
    fp = fopen("Text.txt", "ab+");
    result = pow(p, 3);
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: (Cube) %.2f    \tResult:%.2f\t%s  %s\n", p, result, __DATE__, __TIME__);
    fclose(fp);
}
void power(float p, float q)
{
    fp = fopen("Text.txt", "ab+");
    result = pow(p, q);
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: %.2f  ^  %.2f   \tResult:%.2f\t%s  %s\n", p, q, result, __DATE__, __TIME__);
    fclose(fp);
}
void sqroot(float p)
{
    fp = fopen("Text.txt", "ab+");
    result = sqrt(p);
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: (Square Root) %.2f   \tResult:%.2f\t%s  %s\n", p, result, __DATE__, __TIME__);
    fclose(fp);
}
void fact(float p)
{

    fp = fopen("Text.txt", "ab+");
    result = 1;
    int i;
    for(i = 1; i <= p; i++)
    {
        result = result * i;
    }
    printf("\n\tResult: %.2f", result);

    fprintf(fp, "Operation: (Factorial) %.2f    \tResult:%.2f\t%s  %s\n", p, result, __DATE__, __TIME__);
    fclose(fp);
}
void sinn(float p)
{
    fp = fopen("Text.txt", "ab+");
    result = sin(p * 3.14159 / 180);
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: (Sin) %.2f    \tResult:%.2f\t%s  %s\n", p, result, __DATE__, __TIME__);
    fclose(fp);
}
void coss(float p)
{
    fp = fopen("Text.txt", "ab+");
    result = cos(p * 3.14159 / 180);
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: (Cos) %.2f   \tResult:%.2f\t%s  %s\n", p, result, __DATE__, __TIME__);
    fclose(fp);
}
void tann(float p)
{
    fp = fopen("Text.txt", "ab+");
    result = tan(p * 3.14159 / 180);
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: (Tan) %.2f    \tResult:%.2f\t%s  %s\n", p, result, __DATE__, __TIME__);
    fclose(fp);
}

void cosecc(float p)
{
    fp = fopen("Text.txt", "ab+");
    result = 1/(sin(p * 3.14159 / 180));
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: (Cosec) %.2f    \tResult:%.2f\t%s  %s\n", p, result, __DATE__, __TIME__);
    fclose(fp);
}
void cott(float p)
{
    fp = fopen("Text.txt", "ab+");
    result = 1/(tan(p * 3.14159 / 180));
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: (Cot) %.2f    \tResult:%.2f\t%s  %s\n", p, result, __DATE__, __TIME__);
    fclose(fp);
}
void secc(float p)
{
    fp = fopen("Text.txt", "ab+");
    result = 1/(cos(p * 3.14159 / 180));
    printf("\n\tResult: %.2f", result);
    fprintf(fp, "Operation: (Sec) %.2f    \tResult:%.2f\t%s  %s\n", p, result, __DATE__, __TIME__);
    fclose(fp);
}

int main()
{
    system("COLOR 0B");
    FILE *fp;
    int choice, i;
    float  a, b,c,d,e,f,x, y, result,discriminant, root1, root2, real, imag;

    {
        printf("\n\n\n\n\n\n\n\n\n\t\t\t   w e l c o m e !");
        printf("\n\t\t_____________________________________");
        printf("\n\n\t\t  Press any key to open this System\n");
        printf("\n\n\n\n\n\n\n\t\t\t   Time:%s\n",__TIME__);
        printf("\t\t\t Date: %s",__DATE__);
        printf("\n\n\n\n\n\t\t\t Version-211.15.01");
        getch();
        system("cls");  //Clearrrrrrrrr

        while(1)
        {
            printf("\n\n\n\n\n\n\t\t1. Basic Calculator");
            printf("\n\n\t\t2. Scientific Calculator");
            printf("\n\n\t\t3. History\n");
            printf("\n\t\tSelect (0 to exit)\n");
            printf("\t\t_______________________________");
            printf("\n\n\n  \t\tChoice: ");
            scanf("%d", &choice);
            system("cls");  //clearrrrrrrrr

            switch(choice)
            {
            case 0:
                if(choice == 0) exit(0);
            case 1:      //main1
                printf("\n\n\n\n\n\t\t_______________________________");
                printf("\n\n\t\t 1. Addition\n\t\t 2. Subtraction\n\t\t 3. Multiplication\n\t\t 4. Division\n\t\t 5. Percentage\n\n\t\t Select (0 to Back)\n");
                printf("\t\t_______________________________\n");
                printf("\n\t\tChoice: ");
                scanf("%d", &choice);
                system("cls");
                switch(choice)
                {
                case 1:

                {
                    printf("\n\n\t\t\t     Addition\n");
                    printf("\n\t\tSelect '0'(Zero) for showing Result\n");
                    printf("\t\t-----------------------------------\n");

                    result=0;
                    for (i = 0; i <= 100; i++)
                    {
                        printf("\n\t\t Enter Number: ");
                        scanf("%f",&x);
                        if(x==0)
                            break;
                        result=result+x;
                        printf("\t\t\t\t          = %.2f", result);
                    }
                    printf("\t\t-----------------------------------\n");
                    printf("\t\t\tTotal Result = %.2f", result);
                }
                break;

                case 2:

                    printf("\n\t\tSubtraction\n\n");
                    printf("\tEnter First Digit: ");
                    scanf("%f", &x);
                    printf("\n\tEnter Second Digit: ");
                    scanf("%f", &y);
                    sub(x, y);
                    break;

                case 3:
                    printf("\n\t\tMultiplication\n\n");
                    printf("\tEnter X: ");
                    scanf("%f", &x);
                    printf("\n\tEnter Y: ");
                    scanf("%f", &y);
                    mul(x, y);
                    break;

                case 4:
                    printf("\n\t\tDivision\n\n");
                    printf("\tEnter X: ");
                    scanf("%f", &x);
                    printf("\n\tEnter Y: ");
                    scanf("%f", &y);
                    divi(x, y);
                    break;

                case 5:
                    printf("\n\t\tPercentage\n\n");
                    printf("Enter Digit ( %% ): ");
                    scanf("%f", &x);
                    per(x);
                    break;
                }
                break;

            case 2:
            {
                printf("\n\n\n\n\t\t_______________________________");
                printf("\n\n\t\t 1. log10(x)\n");
                printf("\t\t 2. X ^ 2\n\t\t 3. X ^ 3\n\t\t 4. X ^ n\n\t\t 5. Square root\n\t\t 6. X!\n");
                printf("\t\t 7. Sin(X)\n\t\t 8. Cos(X)\n\t\t 9. Tan(X)\n\t\t10. Cosec(X)\n");
                printf("\t\t11. Cot(X)\n\t\t12. Sec(X)\n");
                printf("\t\t13. Equation Solve\n");
                printf("\n\t\tSelect (0 to Back)\n");  //nhujbd
                printf("\t\t_______________________________");
                printf("\n\n\t\tChoice: ");
                scanf("%d", &choice);
                system("cls");  //clearrrrrrrrr
                switch(choice)
                {
                case 1:
                    printf("\n\t\tLog10\n\n");
                    printf("\tEnter X: ");
                    scanf("%f", &x);
                    logg(x);
                    break;

                case 2:
                    printf("\n\t\tSquare\n\n");
                    printf("\tEnter X: ");
                    scanf("%f", &x);
                    square(x);
                    break;

                case 3:
                    printf("\n\t\tCube\n\n");
                    printf("\tEnter X: ");
                    scanf("%f", &x);
                    cube(x);
                    break;

                case 4:
                    printf("\n\t\tPower\n\n");
                    printf("\tEnter X: ");
                    scanf("%f", &x);
                    printf("\n\tEnter n: ");
                    scanf("%f", &y);
                    power(x,y);
                    break;

                case 5:
                    printf("\n\t\tSquare Root\n\n");
                    printf("\tEnter X: ");
                    scanf("%f", &x);
                    sqroot(x);
                    break;

                case 6:
                    printf("\n\t\tFactorial(X!)\n\n");
                    printf("\tEnter X: ");
                    scanf("%f", &x);
                    fact(x);
                    break;

                case 7:
                    printf("\n\t\tSin(X)\n\n");
                    printf("\tEnter X: ");
                    scanf("%f", &x);
                    sinn(x);
                    break;

                case 8:
                    printf("\n\t\tCos(X)\n\n");
                    printf("\tEnter X: ");
                    scanf("%f", &x);
                    coss(x);
                    break;

                case 9:
                    printf("\n\t\tTan(X)\n\n");
                    printf("\tEnter X: ");
                    scanf("%f", &x);
                    tann(x);
                    break;

                case 10:
                    printf("\n\t\tCosec(X)\n\n");
                    printf("\tEnter X: ");
                    scanf("%f", &x);
                    cosecc(x);
                    break;

                case 11:
                    printf("\n\t\tCot(X)\n\n");
                    printf("Enter X: ");
                    scanf("%f", &x);
                    cott(x);
                    break;

                case 12:
                    printf("\n\t\tSec(X)\n\n");
                    printf("Enter X: ");
                    scanf("%f", &x);
                    secc(x);
                    break;

                case 13:
                    printf("\n\t\tEquation Solve\n\n");
                    printf("\n         1: Ax+By=C\n            Dx+Ey=F");
                    printf("\n         2: Ax^2+Bx+C=0");
                    printf("\n         3: Ax^3+Bx^2+Cx+D=0\n");
                    printf("\n       Choice: ");
                    scanf("%d", &choice);

                    switch(choice)
                    {
                    case 1:
                        fp = fopen("Text.txt", "ab+");
                        printf("Enter coefficients A, B, C, D, E and F: ");
                        scanf("%f%f%f%f%f%f",&a,&b,&c,&d,&e,&f);
                        x=(c*e-b*f)/(a*e-b*d);
                        y=(a*f-c*d)/(a*e-b*d);
                        printf("        x = %.2f  y = %.2f",x,y);
                        fprintf(fp, "Operation: (Equation) %.2f %.2f %.2f %.2f %.2f %.2f \tResult:x=%.2f  y=%.2f\t%s\n", a,b,c,d,e,f,x,y,__TIME__);
                        fclose(fp);
                        break;

                    case 2:
                        fp = fopen("Text.txt", "ab+");
                        printf("Enter coefficients A, B and C: ");
                        scanf("%f %f %f", &a, &b, &c);
                        discriminant = b * b - 4 * a * c;
                        if (discriminant > 0)
                        {
                            root1 = (-b + sqrt(discriminant)) / (2 * a);
                            root2 = (-b - sqrt(discriminant)) / (2 * a);
                            printf("x1 = %.2f and x2 = %.2f", root1, root2);
                        }
                        else if (discriminant == 0)
                        {
                            root1 = root2 = -b / (2 * a);
                            printf("x1 = x2 = %.2f;", root1);
                        }
                        else
                        {
                            real = -b / (2 * a);
                            imag = sqrt(-discriminant) / (2 * a);
                            printf("x1 = %.2f+%.2fi and x2 = %.2f-%.2fi", real, imag, real, imag);
                        }
                        fprintf(fp, "Operation: (Equation) %.2f %.2f %.2f \tResult:x1=%.2f x2=%.2f  \t%s\n", a, b, c, root1, root2,__TIME__);
                        fclose(fp);
                        break;

                    case 3:
                        printf("\n\n\t\tAx^3+Bx^2+Cx+D=0");
                        printf("\n\n\tEnter coefficients A, B, C and D: ");
                        printf("\n\n\n\t\t\t\t   Sorry!\n");
                        printf("\t\t   This problem will fix in the next update");






                       break;

                    default:
                        printf("\nInvalid Choice!");
                    }
                }
                break;
                case 3:
                {
                    FILE *fp ;
                    fp= fopen("Text.txt", "r");
                    char line[500];
                    printf("\n\n\t\t\t\t  Your History\n");
                    printf("       _______________________________________________________________________\n\n");
                    while (fgets(line, sizeof(line), fp))
                    {
                        printf("\t%s", line);
                    }
                    fclose(fp);
                }
                break;
            }
            }
        }

        getch();
    }
}


