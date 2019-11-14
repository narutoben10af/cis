#include<stdio.h>
#include<stdlib.h>
#include <math.h>
#pragma warning (disable: 4996)
int setAnswer(char * c);
void setDiscount(double nSubTotal, double *nDiscount);
void convertPercentage(double *nValue, int *nOutput);

int main(void)
{
    char menu, order, response;
    int count = 0;
    int qtyLoveLetter = 0, totalqtyLoveLetter = 0, qtyNutCookie = 0, totalqtyNutCookie = 0, qtyAsstCookie = 0, totalqtyAsstCookie = 0, percDiscount =0;
    double pLoveLetter = 0.0, pNutCookie = 0.0, pAsstCookie = 0.0, totalSale = 0.0, totalDiscount = 0.0, totalpLoveLetter = 0.0, totalpNutCookie = 0.0, totalpAsstCookie = 0.0;
    double subtotal = 0.0, subtotalD = 0.0, netSales = 0.0, balance = 0.0, discount = 0.0, decdiscount, deposit = 0.0, totalDeposits = 0.0, grand_total = 0.0;
    const double LoveLetters = 25.0;
    const double NutCookies = 20.0;
    const double AssortedCookies = 15.0;
    
    printf("+-+-+-+-+-+ +-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+ +-+-+-+ +-+-+-+\n");
    printf("|T|A|R|U|C| |F|E|S|T|I|V|E| |C|O|O|K|I|E|S| |S|D|N| |B|H|D|\n");
    printf("+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+-+ +-+-+-+\n");
    printf("|C|O|O|K|I|E|S| |O|R|D|E|R|I|N|G| |S|Y|S|T|E|M|\n");
    printf("+-+-+-+-+-+-+-+ +-+-+-+-+-+-+-+-+ +-+-+-+-+-+-+\n");
    printf("**********************************************************\n");
    printf("Start Ordering? (Y=yes|N=no)\n");
    scanf("%c", &menu);
    printf("\n");
    
    if (menu == 'Y' || menu == 'y')
    {
        response = 'Y';
        while(response != 'N')
        {
            system("cls");
            count++;
            printf("Order No: %d", count);
            printf("\n");
            printf("Item Quantity Required\n");
            printf("LOVE LETTERS @ RM 25.00 per tin : ");
            scanf("%d", &qtyLoveLetter);
            pLoveLetter = qtyLoveLetter * LoveLetters;
            printf("Lover Letters Order = RM%.2lf\n", pLoveLetter);
            subtotal = pLoveLetter;
            printf("Order SubTotal = RM%.2lf\n", subtotal);
            
            printf("\n");
            
            printf("NUT COOKIES @ RM 20.00 per jar : ");
            scanf("%d", &qtyNutCookie);
            pNutCookie = qtyNutCookie * NutCookies;
            printf("Nut Cookies Order = RM%.2lf\n", pNutCookie);
            subtotal += pNutCookie;
            printf("Order SubTotal = RM%.2lf\n", subtotal);
            
            printf("\n");
            
            printf("ASST COOKIES @ RM 25.00 per tin : ");
            scanf("%d", &qtyAsstCookie);
            pAsstCookie = qtyAsstCookie * AssortedCookies;
            printf("Asst Cookies Order = RM%.2lf\n", pAsstCookie);
            subtotal += pAsstCookie;
            
            setDiscount(subtotal, &decdiscount);
            convertPercentage(&decdiscount, &percDiscount);
            
            printf("--------------------------------------------\n");
            printf("ORDER TOTAL = RM%.2lf\n", subtotal);
            printf("Confirm / Cancel Order (Y = confirm)?\n");
            scanf(" %c", &order);
            printf(" %c", order);
            
            if (order == 'Y' || order == 'y')
            {
                system("cls");
                printf("Input Deposit Amount: ");
                scanf("%lf", &deposit);
                discount = decdiscount * subtotal;
                totalSale += subtotal;
                subtotalD = subtotal - discount;
                balance = subtotal - deposit;
                printf("Discount (%d%%) : RM%.2lf\n",percDiscount,discount);
                printf("AMOUNT TO PAY : RM%.2lf\n", subtotalD);
                printf("DEPOSIT : RM%.2lf\n", deposit);
                printf("BALANCE : RM%.2lf\n", balance);
            }
            else
            {
                printf("Order cancelled");
                count--;
                continue;
            }
            printf("\n");
            printf("=======================================================================================\n");
            printf("TARUC FESTIVE COOKIES SDN BHD Phone : 0123456789\n");
            printf("ORDER NOTE Order Date: 12 July 2019\n");
            printf("Your Order No is: %d, Ready in 4 days.\n", count);
            printf("\n");
            printf("%d LOVE LETTERS @ RM 25.00 per tin : RM %.2lf\n", qtyLoveLetter, pLoveLetter);
            printf("%d NUT COOKIES @ RM 20.00 per tin : RM %.2lf\n", qtyNutCookie, pNutCookie);
            printf("%d ASST COOKIES @ RM 15.00 per tin : RM %.2lf\n", qtyAsstCookie, pAsstCookie);
            printf("\n");
            printf("ORDER TOTAL : RM %.2lf\n", subtotal);
            printf("DISCOUNT (%d%%) : RM %.2lf\n", percDiscount,discount);
            printf("AMOUNT TO PAY : RM %.2lf\n", subtotalD);
            printf("DEPOSIT PAID : RM %.2lf\n", deposit);
            printf("BALANCE : RM %.2lf\n", balance);
            printf("\n");
            printf("Thank You For Your Order.\n");
            printf("Please bring this Order Note when collecting your cookies. :-) \n");
            printf("Have a nice day.\n");
            printf("=======================================================================================\n");
            printf("\n");
            printf("Do you want to continue your order (Y = yes | N = no)?\n");
            setAnswer(&response);
            
            totalqtyLoveLetter += qtyLoveLetter;
            totalqtyNutCookie += qtyNutCookie;
            totalqtyAsstCookie += qtyAsstCookie;
            totalpLoveLetter += pLoveLetter;
            totalpNutCookie += pNutCookie;
            totalpAsstCookie += pAsstCookie;
            totalDiscount += discount;
            totalDeposits += deposit;
        }
        
        netSales = totalSale - totalDiscount;
        grand_total = netSales - totalDeposits;
        system("cls");
        printf("ORDER SUMMARY FOR TODAY (12 July 2019)\n");
        printf("======================================\n");
        printf("Total Number of Customer Orders: %d\n", count);
        printf("Total Orders Unit Price Amount\n");
        printf("%d LOVE LETTERS @ RM 25.00 per tin: RM%.2lf\n", totalqtyLoveLetter, totalpLoveLetter);
        printf("%d NUT COOKIES @ RM 20.00 per tin: RM%.2lf\n", totalqtyNutCookie, totalpNutCookie);
        printf("%d ASST COOKIES @ RM 15.00 per tin: RM%.2lf\n", totalqtyAsstCookie, totalpAsstCookie);
        printf("--------------------\n");
        printf("TOTAL SALES : RM %.2lf\n", totalSale);
        printf("TOTAL DISCOUNTS : RM %.2lf\n", totalDiscount);
        printf("--------------------\n");
        printf("TOTAL NET SALES : RM %.2lf\n", netSales);
        printf("====================\n");
        printf("TOTAL DEPOSITS : RM%.2lf\n", totalDeposits);
        printf("TOTAL BALANCE : RM%.2lf\n", grand_total);
        
    }
    
    else
    {
        printf("Thank you and have a nice day.\n");
    }
    
    
    system("pause");
}

int setAnswer(char * c)
{
    char d = 0;
    scanf(" %c", &d);
    if(d == 'n')
    {
        d = 'N';
    }
    if(d == 'y')
    {
        d = 'Y';
    }
    
    *c = d;
    return *c;

};





void setDiscount(double nSubTotal, double *nDiscount)
{
    if (nSubTotal > 1000)
    {
        *nDiscount = 0.10;
    }
    else if (nSubTotal >= 500)
    {
        *nDiscount = 0.05;
        
    }
    else
    {
        *nDiscount = 0.00;
    }
    
    
};


void convertPercentage(double *fInput, int *nOutput)
{
    *nOutput = *fInput * 100;
};
