//
//  main.c
//  File Processing
//
//  Created by Lim Si Eian on 08/04/2019.
//  Copyright © 2019 Lim Si Eian. All rights reserved.
//

#include <stdio.h>

struct clientData
{
    unsigned int acctNum;
    char lastName[15];
    char firstName[10];
    double balance;
    
};




int main(void)
{
//Random
    FILE * cfPtr;
    
    // Open the file
    if((cfPtr = fopen("accounts.dat", "wb")) == NULL)
    {
        puts("File could not be opened");
    }
    else
    {
        //Create clientData with default information
        struct clientData bankClient = {0, "", "", 0.0};
        
        //Output 100 blank records to file
        for(int i = 1; i <= 100; i++)
        {
            fwrite(&bankClient, sizeof(struct clientData), 1, cfPtr);
            
        }
        
        fclose(cfPtr);
    }
    
    puts("Done");
    
    //fopen opens and reads file
    if((cfPtr = fopen("accounts.dat", "rb+")) == NULL)
    {
        puts("File could not be opened");
    }
    else
    {
        struct clientData bankClient = {0, "", "", 0.0};
        //Require user to specify account number
        printf("%s", "Enter account number ( 1 to 100, 0 to end input):" );
        scanf("%d", &bankClient.acctNum);
        
        //user enters information which is copied into file
        while (bankClient.acctNum != 0)
        {
            //user enters last name, first name and balance
            printf("%s", "\n Enter lastName, firstName, balance: ");
        
            //set record lastName, firstName and balance value
            fscanf(stdin, "%14s%9s%lf", bankClient.lastName, bankClient.firstName, &bankClient.balance);
            
            //seek position in file to user specified record
            fseek(cfPtr, (bankClient.acctNum - 1) * sizeof(struct clientData), SEEK_SET);
            
            //write user-specified information in file
            fwrite(&bankClient, sizeof(struct clientData), 1, cfPtr);
            
            //enable user to input another account number
            printf("%s", "\n Enter account Number: ");
            scanf("%d", &bankClient.acctNum);
            
        }
        
        fclose(cfPtr); //fclose closes the file

    }

    
    
    
    
    
    
    
    
    
    
    //stream - sequence of bytes
    
    //fgetc = getchar but for files
    //anything starting with f is usually for files
    
    //fputc = putchar
    
//Sequential
    fputc('a', stdout);
    
//    FILE * cfPtr;
    
    //open the file
//    if((cfPtr = fopen("clients.txt", "w")) == NULL)
//    {
//        puts("File could not be opened");
//    }
//    else
//    {
//        puts("Enter the account, name, and balance:");
//        puts("Enter EOF to end input.");
//        printf("%s", "? ");
//        //        fprintf(cfPtr, "%d %s %.2f\n", 100, "Account1", 5.42);
//        
//        unsigned int account; //account number
//        char name[30]; //account number
//        double balance; //account balance
//        scanf("%d %29s %lf", &account, name, &balance);
//        
//        //write account, name and balance into file with fprintf
//        while(!feof(stdin) )
//        {
//            fprintf(cfPtr, "%d %s %.2f\n", account, name, balance);
//            printf("%s", "? ");
//            scanf("%d%29s%lf", &account, name, &balance);
//            
//        }
//        
//        fclose(cfPtr);
//        
//        
//        //open the file
//        if((cfPtr = fopen("clients.txt", "r")) == NULL)
//        {
//            puts("File could not be opened");
//        }
//        else
//        {
//            int account; //account number
//            char name[30]; //account number
//            double balance; //account balance
//            fscanf(cfPtr, "%d %29s %lf", &account, name, &balance);
//            printf("%-10d%-13s%7.2f\n", account, name, balance);
//            
//            //while not end of file
//            while (!feof(cfPtr))
//            {
//                printf("%-10d%-13s%7.2f\n", account, name, balance);
//                fscanf(cfPtr, "%d %29s %lf", &account, name, &balance);
//                
//            }
//            
//            fclose(cfPtr);
//            
//        }
//        
//        printf("Done");
//        
//        
//        
//    }
    
    
}

