#include<stdio.h>
 #include<string.h>
 #include<math.h>
 #include<stdlib.h>
 #define BLANK ' '
 #define TAB '\t'
 #define MAX 50
 void push(long int element);
 long int pop();
 void infix_to_postfix();
 long int postfixEval();
 int precedence(char element);
 int isEmpty();
 int whiteSpace( char );
 char infix[ MAX ], postfix[ MAX ];
 long int stack[MAX];
 int top;
 int main()
 {
         long int value;
         top = -1;
         printf("Enter infix : ");
         gets( infix );
         infix_to_postfix();
         printf("Postfix : %s\n",postfix);
         value = postfixEval();
         printf("Value of expression : %ld\n",value);
         return 0;
 }/*End of main()*/
 void infix_to_postfix()
 {
         unsigned int i, p = 0;
         char next;
         char element;
         for(i = 0; i<strlen(infix); i++)
         {
                 element = infix[i];
                 if(!whiteSpace(element))
                 {
                         switch(element)
                         {
                         case '(':
                                 push(element);
                                 break;
                         case ')':
                                 while((next = pop()) != '(' )
                                         postfix[p++]  =  next;
                                 break;
                         case '+':
                         case '-':
                         case '*':
                         case '/':
                         case '%':
                         case '^':
                                 while( !isEmpty( ) &&  precedence(stack[top] ) >= precedence( element ) )
                                         postfix[p++] = pop();
                                 push( element );
                                 break;
                         default:  /* if an operand comes */
                              postfix[p++] = element;
                         }
                 }
         }
         while( !isEmpty( ) )
                 postfix[p++] = pop();
         postfix[p] = '\0'; /* End postfix with'\0' to make it a string  */
 }/*End of infix_to_postfix()*/
 /* This function returns the precedence of the operator */
 int precedence(char element)
 {
         switch(element)
         {
         case '(':
                 return 0;
         case '+':
         case '-':
                 return 1;
         case '*':
         case '/':
         case '%':
                 return 2;
         case '^':
                 return 3;
         default :
                 return 0;
         }
 }
 /* End of precedence() */
 void push(long int element)
 {
         if( top > MAX )
         {
                 printf("Stack overflow\n");
                 exit(1);
         }
         stack[ ++top ] = element;
 }
 /* End of push() */
 long int pop()
 {
         if( isEmpty() )
         {
                 printf(" Stack underflow\n ");
                 exit(1);
         }
         return (stack[ top-- ]);
 }
 /* End of pop() */
 int isEmpty()
 {
         if(top == -1)
                 return 1;
         else
                 return 0;
 }
 /* End of isEmpty() */
 int whiteSpace(char element)
 {
         if( element == BLANK || element == TAB )
                 return 1;
         else
                 return 0;
 }
 /* End of whiteSpace() */
 long int postfixEval()
 {
         long int a, b, temp, result;
         unsigned int i;
         for( i = 0; i<strlen(postfix); i++ )
         {
                 if( postfix[i] <= '9' && postfix[i] >= '0' )
                         push( postfix[i]-'0' );
                 else
                 {
                         a = pop();
                         b = pop();
                         switch( postfix[i] )
                         {
                         case '+':
                                 temp = b+a;
                      break;
                         case '-':
                                 temp = b-a;
                                 break;
                         case '*':
                                 temp = b*a;
                                 break;
                         case '/':
                                 temp = b/a;
                                 break;
                         case '%':
                                 temp = b%a;
                                 break;
                         case '^':
                                 temp = pow( b, a );
                         }
                         push( temp );
                 }
         }
         result = pop();
         return result;
 } 

