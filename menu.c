#include <stdio.h>

int main()
{
    int choice;
    int yousure;

   
    do
    {
        printf("\nChoose what u wanna do\n");
        printf("1.Smiley\n2.Plato\n3.Seconds\n4.EXIT\n");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1: 
                {
                    int num1, num2, num3, sum;

                    printf("\nEnter num1\n");
                    scanf("%d", &num1);
                    printf("Enter num2\n");
                    scanf("%d", &num2);
                    printf("Enter num3\n");
                    scanf("%d", &num3);

                    sum=num1+num2+num3;
                    printf("\nThe sum of %d %d %d is %d :) :) :)\n\n", num1, num2, num3, sum);

                    printf("back to menu? 0 if yes / any number if no\n");
                    scanf("%d", &yousure);
                    
                    if(yousure!=0)
                    {
                        printf("wanna exit forreal? any number if yes / 0 if no\n");
                        scanf("%d", &yousure); 
                    }
                    
                    break;
                }

            
                case 2:
                {
                    int age, IPA;
                    int gender;

                    printf("Male or female? 0 if M, 1 if F\n");
                    scanf("%d", &gender);

                    if(gender==0)
                        {
                            printf("enter age\n");
                            scanf("%d", &age);
                            IPA=age/2+7;
                            printf("your ideal partner's age is %d\n", IPA);
                        }
                    
                    else if(gender==1)
                        {
                            printf("enter age\n");
                            scanf("%d", &age);
                            IPA=(age-7)*2;
                            printf("your ideal partner's age is %d\n", IPA);
                        }
                    
                    else
                        printf("\nINVALID!!\n\n");

                    printf("back to menu? 0 if yes / any number if no\n");
                    scanf("%d", &yousure);
                    
                    if(yousure==1)
                    {
                        printf("wanna exit forreal? any number if yes / 0 if no\n");
                        scanf("%d", &yousure); 
                    }
                    break;    
                }


                case 3:
                {
                    int sec, min, hour, remaining;

                    printf("Enter seconds\n");
                    scanf("%d", &sec);

                    hour=sec/3600;
                    remaining=sec%3600;
                    min=remaining/60;
                    remaining=remaining%60;
                    sec=remaining/1;

                    printf("The time is\n");
                    printf("\t%d:%d:%d\n", hour, min, sec);

                    printf("back to menu? 0 if yes / any number if no\n");
                    scanf("%d", &yousure);
                    
                    if(yousure==1)
                    {
                        printf("\nwanna exit forreal? any number if yes / 0 if no\n");
                        scanf("%d", &yousure); 
                    }
                    break;
                }

                case 4:
                {
                    printf("\nwanna exit forreal? any number if yes / 0 if no\n");
                    scanf("%d", &yousure);
                    break;
                }


                default:
                {
                    printf("\nINVALID! going back to menu...\n\n");
                    yousure=0;
                    break;
                }

        }
    }
    while (yousure==0);

        printf("\nthanks for uusing my program\n");
       
  return 0;      
}
