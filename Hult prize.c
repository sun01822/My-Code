#include<stdio.h>
int main()
{
    int a,b,c,n;



     printf("Enter the number: ");
     scanf("%d",&n);

     if(n == 277){



    printf("1. Food\n2. Sweet\n3. Vegetables\n5. Fast Food\n6. Fish/Meet\n7. Others\n");


    scanf("%d",&a);

    switch(a){
        case 1:
            printf("1. Chainise\n2. Haydrabadi Biriyani\n3. Pasta\n4. Snacks\n");
            scanf("%d",&b);
            switch(b){
                case 1:
                    printf("1 package Chainise cost 200 Taka only\n");
                    break;
                    case 2:
                    printf("1 package Biriyani cost 450 Taka only\n");
                    break;
                    case 3:
                     printf("1 package Pasta cost 150 Taka only\n");
                     break;
                     case 4:
                      printf("1 package snacks cost 100 Taka only\n");
                      break;
                      default:
                       printf("You enter wrong input\n");
            }

        case 2:
            printf("1. \n2. Kalojam\n3. Roshogolla\n4. Roschodom\n");
            scanf("%d",&b);
             switch(b){
                    case 1:
                    printf("1 Kg Chomchom cost 200 Taka only\n");
                    break;
                    case 2:
                    printf("1 Kg Kalojam cost 240 Taka only\n");
                    break;
                    case 3:
                     printf("1 Kg Roshogolla cost 150 Taka only\n");
                     break;
                     case 4:
                      printf("1 Kg Roschodom cost 250 Taka only\n");
                      break;
                      default:
                       printf("You enter wrong input\n");
                    }
        case 3:
            printf("1. Bangla Kodu\n2. Potato\n3. Begoon\n4. Bhindi\n5. Bandhacopy\n6. Fulkopi\n7. Tomato\n8. Masala\n");
            scanf("%d",&b);
             switch(b){
                    case 1:
                    printf("1 piece cost 20 Taka only\n");
                    break;
                    case 2:
                    printf("1 Kg Potato cost 20 Taka only\n");
                    break;
                    case 3:
                     printf("1 Kg Begoon cost 30 Taka only\n");
                     break;
                     case 4:
                      printf("1 Kg Bhindi cost 25 Taka only\n");
                      break;
                      case 5:
                       printf("1 piece Bandhacopy cost 20 Taka only\n");
                       break;
                        case 6:
                        printf("1 piece Fulkopi cost 20 Taka only\n");
                        break;
                        case 7:
                        printf("1 Kg Tomato cost 30 Taka only\n");
                        break;
                        case 8:
                        printf("1. Ada\n2. Rosun\n3. Piyaj\n4. Tezpata\n5. Holud gura\n6. Morich gura\n7. Jira\n8. Dhonia gura\n");
                        scanf("%d",&c);
                        switch(c){
                        case 1:
                    printf("1 Kg Ada cost 200 Taka only\n");
                    break;
                    case 2:
                    printf("1 Kg Rosun cost 120 Taka only\n");
                    break;
                    case 3:
                     printf("1 Kg Piyaj cost 30 Taka only\n");
                     break;
                     case 4:
                      printf("1 Kg Tezpata cost 350 Taka only\n");
                      break;
                      case 5:
                       printf("1 Kg Holud gura cost 200 Taka only\n");
                       break;
                        case 6:
                        printf("1 Kg Morich gura cost 160 Taka only\n");
                        break;
                        case 7:
                        printf("1 Kg Jira cost 200 Taka only\n");
                        break;
                        case 8:
                        printf("1 Kg Dhonia gura cost 200 Taka only\n");
                        break;

                         default:
                        printf("Please try again\n");
                        }
                    }
          default:
                printf("Please visit again\n");
    }
     }

    else{
         printf("You enter wrong input\n");
     }

    return 0;
}
