// One-step algabraic equation solver
// this program can solve one-step algabraic equations
// Author: Peter Sanchez
// Date: 2/21/2022
// Ex
// -> enter an equation: 24/a=12
// -> a=2

#include <stdio.h>
#include <stdlib.h>
void printop(char op);



int main() {
    char equation[30]; // the equation as it is entered
    char beforeeq[30]; // the part of the equation before the equals sign
    char aftereq[30];  // the part of the equation after the equals sign
    int i = 0;
    int variablebefore = 0; // is the variable before =
    int variableafter = 0;  // is the variable after =
    int variableloc = 0;    // location of the variable in the input string
    char variable;      // the letter being used as the variable
    char buffer[] = "          ";
    char operation;     // the sign of the operation '+' '-' '*' '/'
    int oploc = 0;      // location of the operation in the equation string
    int number= 0;      // the number that is on the same side of the equation as the letter
    int j;
    
    // make sure that the arrays are cleared
    for(int r = 0;r <30; r++){
        equation[r] = ' ';
        beforeeq[r] = ' ';
        aftereq[r] = ' ';
    }

    // take in a one step algabraic equation
    printf("enter an equation:");
    scanf("%s", equation);
    printf("you entered %s\n", equation);
    
   
   // separate the input equation string into strings representing the parts of the equation before and after the = sign
    while(equation[i] != '=') {
        beforeeq[i] = equation[i];
        if (equation[i] >= 'a' && equation[i] <= 'z') {
            variablebefore = 1; 
            variableloc = i;
            variable = equation[i];
        }
        i++;
    }   
    i++; // skip over = sign
    j = i;
    while(equation[j] != ' ') {
        aftereq[j-i] = equation[j];
        if (equation[j] >= 'a' && equation[j] <= 'z') {
            variableafter = 1; 
            variableloc = j;
            variable=equation[j];
        }
        j++;
    }
    
    // if the variable is before the = sign, use before string
    if (variablebefore ==1) {
        printf("Variable is before\n");
        for(int e = 0; e < 30; e++) {  // get the operation and its location
            if(beforeeq[e] == '+' || beforeeq[e] == '-' || beforeeq[e] == '*' || beforeeq[e] == '/'){
                operation = beforeeq[e];
                oploc = e;
               
            }
        }

        // for an addition before the equal sign
        if (operation == '+') {
            if ((variableloc) < oploc) { // variable is before operation
                for(int e= 0; e< 10; e++){
                    buffer[e] = beforeeq[oploc+1 + e]; // get other numbers toisolatevar
                }
            }
            else if ((variableloc) > oploc) {
                 for(int e= 0; e< oploc; e++){
                    buffer[e] = beforeeq[ e]; // get other numbers toisolatevar
                }
            }
             number =atoi(buffer);
            int sub = atoi(aftereq) - number;
            for(int e = 0; e < 30;e++) {
                aftereq[e] = ' '; // clear
                beforeeq[e] = ' ';
            }
            sprintf(aftereq, "%d", sub);
            beforeeq[0] = variable;
            beforeeq[2] = '\0';
            
        }


        // for a subtraction before the equal sign
        else if (operation == '-') {
            printf("hi");
            if ((variableloc) < oploc) { // variable is before operation
                for(int e= 0; e< 10; e++){
                    buffer[e] = beforeeq[oploc+1 + e]; // get other numbers toisolatevar
                }
                number =atoi(buffer);
                int add = atoi(aftereq) + number;
                for(int e = 0; e < 30;e++) {
                    aftereq[e] = ' '; // clear
                    beforeeq[e] = ' ';
                }
                sprintf(aftereq, "%d", add);
                beforeeq[0] = variable;
                beforeeq[2] = '\0';
            }
            else if ((variableloc) > oploc) {
                 for(int e= 0; e< oploc; e++){
                    buffer[e] = beforeeq[ e]; // get other numbers toisolatevar
                }
                number =atoi(buffer);
                int add =  number - atoi(aftereq);
                for(int e = 0; e < 30;e++) {
                    aftereq[e] = ' '; // clear
                    beforeeq[e] = ' ';
                }
            sprintf(aftereq, "%d", add);
            beforeeq[0] = variable;
            beforeeq[2] = '\0';
            }
            
            
        }


        // for a multiplication before the equal sign
        else if (operation == '*') {
            printf("hi");
            if ((variableloc) < oploc) { // variable is before operation
                for(int e= 0; e< 10; e++){
                    buffer[e] = beforeeq[oploc+1 + e]; // get other numbers toisolatevar
                }
            }
            else if ((variableloc) > oploc) {
                 for(int e= 0; e< oploc; e++){
                    buffer[e] = beforeeq[ e]; // get other numbers toisolatevar
                }
            }
             number =atoi(buffer);
            int div = atoi(aftereq) / number;
            for(int e = 0; e < 30;e++) {
                aftereq[e] = ' '; // clear
                beforeeq[e] = ' ';
            }
            sprintf(aftereq, "%d", div);
            beforeeq[0] = variable;
            beforeeq[2] = '\0';
            
        }



        // for a division before the equal sign
        else if (operation == '/') {
            printf("hi");
            if ((variableloc) < oploc) { // variable is before operation
                for(int e= 0; e< 10; e++){
                    buffer[e] = beforeeq[oploc+1 + e]; // get other numbers toisolatevar
                }
                number =atoi(buffer);
                int mul = atoi(aftereq) * number;
                for(int e = 0; e < 30;e++) {
                    aftereq[e] = ' '; // clear
                    beforeeq[e] = ' ';
                }
                sprintf(aftereq, "%d", mul);
                beforeeq[0] = variable;
                beforeeq[2] = '\0';
            }
            else if ((variableloc) > oploc) {
                 for(int e= 0; e< oploc; e++){
                    buffer[e] = beforeeq[ e]; // get other numbers toisolatevar
                }
                number =atoi(buffer);
                int mul =  number/ atoi(aftereq);
                for(int e = 0; e < 30;e++) {
                    aftereq[e] = ' '; // clear
                    beforeeq[e] = ' ';
                }
                sprintf(aftereq, "%d", mul);
                beforeeq[0] = variable;
                beforeeq[2] = '\0';
            }
           
            
        }

        
    }
    
    else if (variableafter ==1) {
        printf("Variable is after\n");
        
        for(int e = 0; e < 30; e++) {
            if(aftereq[e] == '+' || aftereq[e] == '-' || aftereq[e] == '*' || aftereq[e] == '/'){
                operation = aftereq[e];
                oploc = e;
            }
        }
        
        // for an addition after the = sign
        if (operation == '+') {
            if (variableloc-i < oploc) { // variable is before operation
                for(int e= 0; e< 10; e++){
                    buffer[e] = aftereq[oploc+1+ e]; // get other numbers toisolatevar
                }
            }
            else if (variableloc-i > oploc) {
                 for(int e= 0; e< oploc; e++){
                    buffer[e] = aftereq[ e]; // get other numbers toisolatevar
                }
            }
            number = atoi(buffer);
            
            int sub = atoi(beforeeq) - number;
            for(int e = 0; e < 30;e++) {
                aftereq[e] = ' '; // clear
                beforeeq[e] = ' ';
            }
            sprintf(aftereq, "%d", sub);
            beforeeq[0] = variable;
            beforeeq[2] = '\0';
        }


        // for a subtraction after the = sign
        if (operation == '-') {
            if (variableloc-i < oploc) { // variable is before operation
                for(int e= 0; e< 10; e++){
                    buffer[e] = aftereq[oploc+1+ e]; // get other numbers toisolatevar
                }
                number = atoi(buffer);
                int add = atoi(beforeeq) + number;
                for(int e = 0; e < 30;e++) {
                    aftereq[e] = ' '; // clear
                    beforeeq[e] = ' ';
            }
            sprintf(aftereq, "%d", add);
            beforeeq[0] = variable;
            beforeeq[2] = '\0';
            }
            else if (variableloc-i > oploc) {
                 for(int e= 0; e< oploc; e++){
                    buffer[e] = aftereq[ e]; // get other numbers toisolatevar
                }
                number = atoi(buffer);
                int add =  number - atoi(beforeeq);
                for(int e = 0; e < 30;e++) {
                    aftereq[e] = ' '; // clear
                    beforeeq[e] = ' ';
                }
            sprintf(aftereq, "%d", add);
            beforeeq[0] = variable;
            beforeeq[2] = '\0';
            }
       
        }


        // for a multtiplication after the = sign
        if (operation == '*') {
            if (variableloc-i < oploc) { // variable is before operation
                for(int e= 0; e< 10; e++){
                    buffer[e] = aftereq[oploc+1+ e]; // get other numbers toisolatevar
                }
            }
            else if (variableloc-i > oploc) {
                 for(int e= 0; e< oploc; e++){
                    buffer[e] = aftereq[ e]; // get other numbers toisolatevar
                }
            }
            number = atoi(buffer);
            
            int div = atoi(beforeeq) / number;
            for(int e = 0; e < 30;e++) {
                aftereq[e] = ' '; // clear
                beforeeq[e] = ' ';
            }
            sprintf(aftereq, "%d", div);
            beforeeq[0] = variable;
            beforeeq[2] = '\0';
        }




        // for a division after the = sign
        if (operation == '/') {
            if (variableloc-i < oploc) { // variable is before operation
                for(int e= 0; e< 10; e++){
                    buffer[e] = aftereq[oploc+1+ e]; // get other numbers toisolatevar
                }
                number = atoi(buffer);
            
                int mul = atoi(beforeeq) * number;
                for(int e = 0; e < 30;e++) {
                    aftereq[e] = ' '; // clear
                    beforeeq[e] = ' ';
                }
                sprintf(aftereq, "%d", mul);
                beforeeq[0] = variable;
                beforeeq[2] = '\0';
            }
            else if (variableloc-i > oploc) {
                 for(int e= 0; e< oploc; e++){
                    buffer[e] = aftereq[ e]; // get other numbers toisolatevar
                }
                number = atoi(buffer);
                int mul =  number/ atoi(beforeeq);
                for(int e = 0; e < 30;e++) {
                    aftereq[e] = ' '; // clear
                    beforeeq[e] = ' ';
                }
                sprintf(aftereq, "%d", mul);
                beforeeq[0] = variable;
                beforeeq[2] = '\0';
            }
            
        }
    }
    printop(operation);
    printf("before %s\n", beforeeq);
    printf("after %s\n", aftereq);
    
    //printf("number is %s\n", buffer);
    //printf("number is %d\n", number);
    printf(" %s", beforeeq);
    printf("= %s\n", aftereq);
    return 0;
}



void printop(char op) {
    switch (op) {
        case '+':
            printf("operation is addition\n");
            break;
        case '-':
            printf("operation is subtraction\n");
            break;
        case '*':
            printf("operation is multiplication\n");
            break;
        case '/':
            printf("operation is division\n");
            break;
    }
}