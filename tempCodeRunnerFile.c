#include<stdio.h>
#include<string.h>
int main()
{
 static int totalcost;
 int i,j,choice,c=1,a[9],cost[9];
 for(i=0;i<9;i++)
 a[i]=0;
 
 char str[100];
 char items[9][100]={"Sandisk 16 GB",
 "Logitech Mouse",
 "Pendrve 16 GB",
 "Adidas",
 "Nike",
 "Leecooper",
 "Mi Note 3",
 "Nokia 3",
 "Samsung"  
 };
 printf("Please Enter Your Name\n");
 gets(str);
 printf("Hello %s, Welcome to our Online Shopping.\n",str);
 do{
  //C is 1 by default
  if(c==1){
  printf("Enter\n1 - Computer Accessories\n2 - Shoes\n3 - Mobiles\nAny other number to exit\n");
  scanf("%d",&choice);
  switch(choice)
  {
   case 1:
   {
    int accessoriesChoice;
    printf("Enter\n1 - Sandisk 16 GB - Rs.355\n2 - Logitech Mouse- Rs.500\n3 - Pendrive 16 GB - Rs.550\nAny other number to exit\n");
    scanf("%d",&accessoriesChoice);
    cost[0]=355;
    cost[1]=500;
    cost[2]=550;
    switch(accessoriesChoice)
    {
     case 1:
     {
      int num;
      printf("You chose Sandisk 16GB with Rs.355.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[0]++;
       totalcost+=355;
      }
      printf("Your Cost in Cart is %d\n",totalcost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose Logitech Mouse with Rs.500.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[1]++;
       totalcost+=500;
      }
      printf("Your Cost in Cart is %d\n",totalcost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose Pendrive 16GB with Rs.550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[2]++;
       totalcost+=550;
      }
      printf("Your Cost in Cart is %d\n",totalcost);
      break;
     }
     default:{
      printf("Exit from Computer Accesories\n");
      break;
     }
    }
    break;
   }
   case 2:
   {
    int shoesChoice;
    printf("Enter\n1 - Adidas - Rs.3550\n2 - Nike - Rs.5000\n3 - Leecooper - Rs.2800\nAny other number to exit\n");
    scanf("%d",&shoesChoice);
    cost[3]=3550;
    cost[4]=5000;
    cost[5]=2800;
    switch(shoesChoice)
    {
     case 1:
     {
      int num;
      printf("You chose Adidas Shoes for Rs.3550.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[3]++;
       totalcost+=3550;
      }
      printf("Your Cost in Cart is %d\n",totalcost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose Nike Shoes for Rs.5000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[4]++;
       totalcost+=5000;
      }
      printf("Your Cost in Cart is %d\n",totalcost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose Leecooper Shoes for Rs.2800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[5]++;
       totalcost+=2800;
      }
      printf("Your Cost in Cart is %d\n",totalcost);
      break;
     }
     default:{
      printf("Exit from Shoes Category\n");
      break;
     }
    }
    break;
   }
   case 3:
   {
    int mobileChoice;
    printf("Enter\n1 - Mi Note 3 - Rs.11000\n2 - Nokia 3 - Rs.9866\n3 - Samsung - Rs.12800\nAny other number to exit\n");
    scanf("%d",&mobileChoice);
    cost[6]=11000;
    cost[7]=9866;
    cost[8]=12800;
    switch(mobileChoice)
    {
     case 1:
     {
      int num;
      printf("You chose to buy Mi Note 3 for Rs.11000.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[6]++;
       totalcost+=11000;
      }
      printf("Your Cost in Cart is %d\n",totalcost);
      break;
     }
     case 2:
     {
      int num;
      printf("You chose to buy Nokia 3 for Rs.9866.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[7]++;
       totalcost+=9866;
      }
      printf("Your Cost in Cart is %d\n",totalcost);
      break;
     }
     case 3:
     {
      int num;
      printf("You chose to buy Samsung for Rs.12800.Are you sure to buy.If 'Yes' Enter 1 else any number\n");
      scanf("%d",&num);
      if(num==1)
      {
       a[8]++;
       totalcost+=12800;
      }
      printf("Your Cost in Cart is %d\n",totalcost);
      break;
     }
     default:{
      printf("Exit from Mobile Category\n");
      break;
     }
    }
    break;
   }
   default:
   {
    printf("Enter Valid Categories Choice\n");
    break;
   }
  }
  printf("%s's cart\n",str);
  printf("Id\tItems\t\t\tQuantity\t\t\tCost\n");
  for(i=0;i<9;i++)
  {
   if(a[i]!=0)
   {
    printf("%d\t%s\t\t%d\t\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
   }
  }
  printf("Total Cost\t\t\t\t\t%d\n",totalcost);
  printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
  scanf("%d",&c);
 }
  if(c==2)
  {
   int id;
   printf("Enter id to delete item\n");
   scanf("%d",&id);
   if(id<9&&id>0){
   totalcost=totalcost-(cost[id]*a[id]);
   a[id]=0;
   }
   else{
    printf("Enter Valid id\n");
   }
       printf("Revised Items \n");
       printf("Id\tItems\t\t\tQuantity\t\tCost\n");
            for(i=0;i<9;i++)
      {
     if(a[i]!=0)
      {
    printf("%d\t%s\t\t%d\t\t%d\n",i,items[i],a[i],(cost[i]*a[i]));
      }
     }
        printf("Total Cost\t\t\t\t\t%d\n",totalcost);
        printf("If you wish to buy anything more Enter\n1 to Add Item\n2 to Delete Items \nAny other number to Exit\n");
     scanf("%d",&c);
  }
  
 }while(c==1 || c==2);
 printf("Your Final Cost is %d\n\n\n",totalcost);
 
int pm;
 printf("Enter\n1 - online payment\n2 - cash payment\n Any other number to exit\n");
  scanf("%d",&choice);
  int note2000, note500, note100, note50, note20, note10, note5, note2, note1;
  
  switch(choice)
 {
    int upi,pass;
  case 1:
  printf("enter your UPI id\n");
  scanf("%d" , &upi);
  printf("enter you password\n");
  scanf("%d",&pass);
  break;
  case 2:
  
    
    // in starting , all notes = 0
    note2000 = note500 = note100 = note50 = note20 = note10 = note5 = note2 = note1 = 0;


    printf("your denomination amount of  %d is :\n" , totalcost);
    

    if(totalcost >= 2000)
    {
        note2000 = totalcost/2000;
        totalcost -= note2000 * 2000;
    }
    if(totalcost >=500)
    {
        note500 = totalcost/500;
        totalcost -= note500 * 500;
    }
    if(totalcost >= 100)
    {
        note100 = totalcost/100;
        totalcost -= note100 * 100;
    }
    if(totalcost >= 50)
    {
        note50 = totalcost/50;
        totalcost -= note50 * 50;
    }
    if(totalcost >= 20)
    {
        note20 = totalcost/20;
        totalcost -= note20 * 20;
    }
    if(totalcost >= 10)
    {
        note10 = totalcost/10;
        totalcost -= note10 * 10;
    }
    if(totalcost >= 5)
    {
        note5 = totalcost/5;
        totalcost -= note5 * 5;
    }
    if(totalcost >= 2)
    {
        note2 = totalcost /2;
        totalcost -= note2 * 2;
    }
    if(totalcost >= 1)
    {
        note1 = totalcost;
    }
     printf("2000 = %d\n", note2000);
    printf("500 = %d\n", note500);
    printf("100 = %d\n", note100);
    printf("50 = %d\n", note50);
    printf("20 = %d\n", note20);
    printf("10 = %d\n", note10);
    printf("5 = %d\n", note5);
    printf("2 = %d\n", note2);
    printf("1 = %d\n", note1);
 }
 printf("       payment successful\n");
 printf("Thanks for shopping with us 😊\n");
 printf("VISIT US AGAIN\n");
 printf("~~TEAM BRAINAICS~~\n");
}