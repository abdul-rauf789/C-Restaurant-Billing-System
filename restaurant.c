#include <stdio.h>
#include <time.h>

/* Global Variables */
int code, quant;
int price = 0;
int total = 0;
int ser = 1;

/* Function Declarations */
void displayMenu();
void printHeader();
void printTime();
int processItem();
void printBill();

int main()
{
    displayMenu();
    printHeader();

    while (1)
    {
        printf("\nEnter Item Code and Quantity (0 0 to finish): ");
        scanf("%d %d", &code, &quant);

        if (code == 0)
            break;

        if (quant <= 0)
        {
            printf("Invalid Quantity!\n");
            continue;
        }

        if (processItem())
            ser++;
    }

    printBill();
    return 0;
}

/* ================= FUNCTIONS ================= */

void displayMenu()
{
    printf("=========== MENU ===========\n");
    printf("1  Roti            Rs.15\n");
    printf("2  Fruit Salad     Rs.450\n");
    printf("3  Biryani         Rs.490\n");
    printf("4  Soup            Rs.940\n");
    printf("5  Fish            Rs.1140\n");
    printf("6  Chicken Handi   Rs.1370\n");
    printf("7  Chicken Kalmi   Rs.1080\n");
    printf("8  Chicken Podina  Rs.1350\n");
    printf("9  Podina Karahi   Rs.1280\n");
    printf("10 Bottle          Rs.70\n");
    printf("11 Lemonade        Rs.70\n");
    printf("12 Custard         Rs.480\n");
    printf("13 Lab-e-Shirin    Rs.630\n");
    printf("============================\n");
}

void printHeader()
{
    printf("\n************ INVOICE ************\n");
    printf("CANTEEN\nPOS: SRV\tMOP: CASH\n");
    printTime();
    printf("--------------------------------\n");
    printf("Ser  Item            Price Qty Total\n");
    printf("--------------------------------\n");
}

int processItem()
{
    int itemTotal;

    switch (code)
    {
    case 1: price = 15;   printf("%d   Roti            ", ser); break;
    case 2: price = 450;  printf("%d   Fruit Salad     ", ser); break;
    case 3: price = 490;  printf("%d   Biryani         ", ser); break;
    case 4: price = 940;  printf("%d   Soup            ", ser); break;
    case 5: price = 1140; printf("%d   Fish            ", ser); break;
    case 6: price = 1370; printf("%d   Chicken Handi   ", ser); break;
    case 7: price = 1080; printf("%d   Chicken Kalmi   ", ser); break;
    case 8: price = 1350; printf("%d   Chicken Podina  ", ser); break;
    case 9: price = 1280; printf("%d   Podina Karahi   ", ser); break;
    case 10:price = 70;   printf("%d   Bottle          ", ser); break;
    case 11:price = 70;   printf("%d   Lemonade        ", ser); break;
    case 12:price = 480;  printf("%d   Custard         ", ser); break;
    case 13:price = 630;  printf("%d   Lab-e-Shirin    ", ser); break;

    default:
        printf("Invalid Item Code!\n");
        return 0;
    }

    itemTotal = price * quant;
    total += itemTotal;

    printf("%5d %4d %6d\n", price, quant, itemTotal);
    return 1;
}

void printBill()
{
    printf("--------------------------------\n");
    printf("TOTAL BILL: Rs.%d\n", total);
    printf("--------------------------------\n");
    printf("Jazak ALLAH for visiting out Store!\n");
    printf("Contact: +92 XXX XX XXX for more details.\n");
}

void printTime()
{
    time_t t;
    struct tm *tm;

    time(&t);
    tm = localtime(&t);

    printf("Date: %02d-%02d-%04d\n",
           tm->tm_mday,
           tm->tm_mon + 1,
           tm->tm_year + 1900);

    printf("Time: %02d:%02d\n",
           tm->tm_hour,
           tm->tm_min);
}
