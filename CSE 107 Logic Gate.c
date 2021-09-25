#include <stdio.h>

int main(void) {

    printf("\n\n********************************************\n\n");
  int A,B;
  int AND,OR,NAND,NOR,EXOR,EXNOR;
  int X;

  printf("Enter the value of A:\n");
  scanf("%d",&A);
  printf("Enter the value of B:\n");
  scanf("%d",&B);
  printf("The value of A, B: %d %d\n\n\n",A,B);
        // AND Gate
  if (A==1 && B==1)
  {
    AND = A*B;
    printf("The value of AND : %d\n",AND);
  }
  else if(A==1 && B==0 || A==0 && B==1)
  {
    AND = A*B;
    printf("The Value of AND : %d\n",AND);
  }
  else if(A==0 && B==0)
  {
      AND = A*B;
      printf("The Value of AND : %d\n",AND);
  }

        // OR Gate
    if(A==0 && B==0 || A==1 && B==0)
    {
        OR= A+B;
        printf("The value of OR: %d\n",OR);
    }
        else if(A==0 && B==1 || A==1 && B==1){
                OR = A+B;
                if(OR==2)
                {
                   printf("The Value of OR : 1\n");
                }
                else{
                    printf("The Value of OR : %d\n",OR);
                }

        }

        // NAND Gate
    if(A==0 && B==0 || A==0 && B==1)
    {
        NAND=A+B;
        printf("The value of NAND : %d\n",NAND);

    }
    else if(A==1 && B==0 || A==1 && B==1)
        {
            NAND=A+B;
            if(NAND==2)
            {
                NAND = 0;
                printf("The Value of NAND : %d\n",NAND);
            }
            else if(NAND==1 || NAND==0)
            {
                NAND=A+B;
                printf("The Value of NAND : %d\n",NAND);
            }

        }
    //  NOR Gate
 if(A==1 || B==1)
 {
     NOR=0;
     printf("The Value of NOR : %d\n",NOR);
 }
 else if(A==0 && B==0)
 {
     NOR=1;
     printf("The Value of NOR : %d\n",NOR);
 }
    // Ex-OR Gate

    if(A==0 && B==1 || A==1 && B==0)
    {
        EXOR=A+B;
        printf("The Value of EXOR : %d\n",EXOR);
    }
    else if(A==0 && B==0 || A==1 && B==1)
    {
        EXOR=0;
        printf("The Value of EXOR : %d\n",EXOR);
    }
        // EX-NOR Gate
    if(A==0 && B==0 || A==1 && B==1)
    {
        EXNOR=1;
        printf("The Value of EXNOR : %d\n",EXNOR);
    }
    else if(A==1 && B==0 || A==0 && B==1)
    {
        EXNOR=0;
        printf("The Value of EXNOR : %d\n",EXNOR);
    }

    printf("\n\n****************jabedkhanjb****************\n\n");

  return 0;
}

