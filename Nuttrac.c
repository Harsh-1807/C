#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#include<string.h>
void login();
void bmi ();
void fat();
void muscle();
void fruit();
void vegetable();
void health();
void report();
void female();
void male();
int main()
{
    int num;
    login();
    do{
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    CALORIFY");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  MAIN MENU  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   [1] BMI CALCULATOR\n\n");
    printf("   [2] BODY FAT CALCULATOR\n\n");
    printf("   [3] MUSCLE MASS PERCENTAGE\n\n");
    printf("   [4] FRUITS\n\n");
    printf("   [5] VEGETABLES\n\n");
    printf("   [6] HEALTH ISSUES\n\n");
    printf("   [7] REFERENCE\n\n");
    printf("   [8] EXIT\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   ENTER YOUR CHOICE: ");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        bmi();//for bmi
        break;
    case 2:
        fat();//for body fat
        break;
    case 3:
         muscle();
        break;
    case 4:
         fruit();
        break;
    case 5:
        vegetable();
        break;
    case 6:
        health();
        break;
    case 7:
        report();
        break;
    }
     getch();
    }
while(num != 5);
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   THANK YOU FOR USING CALORIFY");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    getch();
    return 0;
}
void login()
{
	int a=0,i=0;
    char uname[10],c=' ';
    char pword[10],code[10];
    char user[10]="user";
    char pass[10]="vit";
 do
{
	system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    CALORIFY");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  LOGIN FORM  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ");
    printf("\n\n   ENTER USERNAME: ");
	scanf("%s", &uname);
	printf(" \n   ENTER PASSWORD: ");
	while(i<10)
	{
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13) break;
	    else printf("*");
	    i++;
	}
	pword[i]='\0';
	//char code=pword;
	i=0;
	//scanf("%s",&pword);
		if(strcmp(uname,"user")==0 && strcmp(pword,"vit")==0)
	{
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
	printf("  \n\n   WELCOME USER !!!!");
	printf("\n\n\n   Press any key to continue...");
	getch();//holds the screen
	break;
	}
	else
	{
	    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd");
		printf("\n\n   LOGIN IS UNSUCESSFUL...PLEASE TRY AGAIN...");
		a++;

		getch();//holds the screen

	}
}
while(a<=2);
	if (a>2)
	{
		printf("\nSORRY YOU HAVE ENTERED WRONG PASSWORD TOO MANY TIMES !!!");

		getch();

		}
		system("cls");
}
void bmi()
{
    float h,w;
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    CALORIFY");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  BMI CALCULATOR \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ");
     printf("\n\n   ENTER USERS HEIGHT IN METERS : ");
     scanf("%f",&h);
    printf("\n\n   ENTER USERS WEIGHT IN KILOGRAMS : ");
    scanf(" %f",&w);
    float bmi=w/(h*h);

    printf("\nTHE BMI IS : %f\n\n",bmi);
    printf("\nIF YOUR BMI IS:BELOW 18.5  YOU ARE IN THE UNDERWEIGHT RANGE \n \n BETWEEN 18.5 AND 24.9 YOU ARE IN THE HEALTHY RANGE\n BETWEEN 25 AND 29.9  YOU ARE IN THE OVERWEIGHT RANGE\n \n 30 or OBOVE YOU ARE OBESE ");
printf("\n \xcd\xcd\xcd\xcd\xcd PRESS ANY KEY TO CONTINUE\xcd\xcd\xcd\xcd\xcd");
}
void fat()
{
    int age;
    float bmi,percent;
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    CALORIFY");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  BODY FAT CALCULATOR \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ");
    printf("\n\n   ENTER USERS BMI : \n");
    scanf("%f",&bmi);
    printf("\n\n   ENTER USERS AGE: \n");
   scanf("%f",&age);
    percent = (1.20*bmi)+(0.23*age)-5.4;
    percent=percent/10000000;
    printf("\n\n YOUR BODY FAT PERCENTAGE IS %0.2f",percent);
    printf("\n\n\nBODY FAT PERCENT ACCORDING TO FEMALE Essential FAT 10-13");
 printf("\nATHLETES-20");
 printf("\nFITNESS-21-24");
 printf("\nACCEPTABLE-25-31");
 printf("\nOBESITY>32");
printf("\n\n BODY FAT PERCENT ACCORDING TO MEN \n");
printf("ESSENTIAL FAT-2-5\n");
printf("ATHLETES-6-13 \n");
printf("FITNESS-14-17 \n");
printf("ACCEPTABLE-18-24\n");
printf("OBESITY	>25\n");
}
void muscle()
{   int num,age;
float h,r;
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    CALORIFY");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  MUSCLE MASS  \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd \n \n");
    printf("ENTER YOUR HEIGHT:\n");
    scanf("%f",&h);
    printf("ENTER R(WRIST RADII):\n");
    scanf("%f",&r);
    printf("ENTER YOUR AGE:\n");
    scanf(" %d",&age);
    printf("PRESS 1 IF YOU ARE MALE \n PRESS 2 IF YOU ARE A WOMEN\n\n");
    scanf("%d",&num);
    switch(num) {
    case 1:
      male();
      printf("AGES 20-39: 75-89 PERCENT FOR MEN, 63-75.5  \nAGES 40-59: 73-86 PERCENT FOR MEN, 62-73.5  \nAGES60-79: 70-84 PERCENT FOR MEN, 60-72.5\n");
    break;
    case 2:{
    float k=0;
    int l=0,j=0;
    female(k,j,l);
    printf("63-75.5 PERCENT FOR WOMEN\n62-73.5 PERCENT FOR WOMEN\n60-72.5 PERCENT FOR WOMEN\n");
    break;
    }
    default:
    printf("\nINVALID ENTRY");
    }

}
void male()
{
    float h,r;
    int age;
    printf("ENTER HEIGHT \n");
    scanf("%f",&h);
    printf("ENTER YOUR RADIOF WAIST CIRCUMFERENCE \n");
    scanf("%f",&r);
    printf("ENTER YOUR AGE\n");
    scanf("%d",&age);
    float sm;
    sm =(((((h*h)/r)*0.401)+(1*3.825)+(age*-0.071))+5.102 );
    sm=sm/10;
    printf("THE MUSCLE MASS IS %0.2f \n",sm);
}

void female()
{
    float h,r;
    int age;
    printf(" ENTER HEIGHT ,R AND AGE");
    scanf("%f%f",&h,&r);
    scanf("%d",&age);
    float sm;
    sm =(((((h*h)/r)*0.401)+(0*3.825)+(age*-0.071))+5.102);
    printf("THE MUSCLE MASS IS %0.2f",sm);

}
void fruit()
{
    int num;
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    CALORIFY");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd HEALTHY FRUITS \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ");
    printf("\n ");
    printf("   [1] MANGO\n\n");
    printf("   [2] APPLE\n\n");
    printf("   [3] BANANA\n\n");
    printf("   [4] GRAPES\n\n");
    printf("   [5] PINEAPPLE\n\n");
    printf("   [6] CUSTARD APPLE\n\n");
    printf("ENTER YOUR CHOICE:\n\n");
    scanf("%d",&num);
    switch (num)
    {
    case 1:
 printf("Amount Per 100 grams \nCalories 60 \n% Daily Value* \nTotal Fat 0.4 g	0% \nSaturated fat 0.1 g 0% \nCholesterol 0 mg	0% \nSodium 1 mg	0% \nPotassium 168 mg	4% \nTotal Carbohydrate 15 g	5% \nDietary fiber 1.6 g	6% \nSugar 14 g	\nProtein 0.8 g	1% \n""Vitamin C	60%	Calcium	1% \nIron	1%	Vitamin D	0%  \nVitamin B6	5%	Cobalamin	0% \nMagnesium	2%");

        break;
case 2:
printf("Amount Per 100 grams\nCalories 52\n% Daily Value*\nTotal Fat 0.2 g	0%\nSaturated fat 0 g	0%\nCholesterol 0 mg	0%\nSodium 1 mg	0%\nPotassium 107 mg	3%\nTotal Carbohydrate 14 g	4%\nDietary fiber 2.4 g	9%\nSugar 10 g	\nProtein 0.3 g	0% Vitamin C	7%	Calcium	0%\nIron	0%	Vitamin D	0%\nVitamin B6	0%	Cobalamin	0%\nMagnesium	1%	");
     break;
    case 3:
         {
        printf("Amount Per 1 medium (7 to 7-7/8 inch) (118 g)\nCalories 105 \n% Daily Value*\nTotal Fat 0.4 g	0% \nSaturated fat 0.1 g	0%\nCholesterol 0 mg	0% \nSodium 1.2 mg	0% \nPotassium 422.4 mg	12%\nTotal Carbohydrate 27 g	9%\nDietary fiber 3.1 g	12%\nSugar 14 g	\nProtein 1.3 g	2%\nVitamin C	17%	Calcium	0%\nIron	1%	Vitamin D	0%\nVitamin B6	20%	Cobalamin	0%\nMagnesium	7%	");

        break;
    case 4:
         {
        printf("Amount Per 100 grams\nCalories 67\n% Daily Value*\nTotal Fat 0.4 g	0%\nSaturated fat 0.1 g	0%\nCholesterol 0 mg	0%\nSodium 2 mg	0%\nPotassium 191 mg	5%\nTotal Carbohydrate 17 g	5%\nDietary fiber 0.9 g	3%\nSugar 16 g	\nProtein 0.6 g	1%\nVitamin C	6%	Calcium	1%\nIron	1%	Vitamin D	0%\nVitamin B6	5%	Cobalamin	0%\nMagnesium	1%	");
    }
        break;
    case 5:
      {
        printf("Amount Per 100 grams\nCalories 50\n% Daily Value*\nTotal Fat 0.1 g	0%\nSaturated fat 0 g	0%\nCholesterol 0 mg	0%\nSodium 1 mg	0%\nPotassium 109 mg	3%\nTotal Carbohydrate 13 g	4%\nDietary fiber 1.4 g	5%\nSugar 10 g	\nProtein 0.5 g	1%\nVitamin C	79%	Calcium	1%\nIron	1%	Vitamin D	0%\nVitamin B6	5%	Cobalamin	0%\nMagnesium	3%	");
    }
        break;
    case 6:
       {
        printf("Amount per 100 grams\n100 grams\nCalories 94\n% Daily Value*\nTotal Fat 0.3 g	0%\nSaturated fat 0 g	0%\nCholesterol 0 mg	0%\nSodium 9 mg	0%\nPotassium 247 mg	7%\nTotal Carbohydrate 24 g	8%\nDietary fiber 4.4 g	17%\nProtein 2.1 g	4%\nVitamin C	60%	Calcium	2%\nIron	3%	Vitamin B6	10%\nCobalamin	0%	Magnesium	5%");
        break;

    default:
    printf("ENTER VALID OPTION");
        break;
    }
}
}
}
void vegetable()
{
 int num;
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    CALORIFY");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd HEALTHY VEGETABLES \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ");
    printf("\n ");
    printf("   [1] CUCUMBER\n\n");
    printf("   [2] OKRA\n\n");
    printf("   [3] CARROT\n\n");
    printf("   [4] BROCCOLI\n\n");
    printf("   [5] LETTUCE\n\n");
    printf("   [6] CAULIFLOWER\n\n");
    printf("ENTER YOUR CHOICE:\n\n");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
        printf("Nutritional value per 100 g (3.5 oz)\nEnergy	65 kJ (16 kcal)\nCarbohydrates\n3.63 g\nSugars	1.67\nDietary fiber	0.5 g\nFat\n0.11 g\nProtein\n0.65 g\nVitamins	Quantity%DV†\nThiamine (B1)	2%0.027 mg\nRiboflavin (B2)	3%0.033 mg\nNiacin (B3)	1%0.098 mg\nPantothenic acid (B5)	5%0.259 mg\nVitamin B6	3%0.04 mg\nFolate (B9)	2%7 μg\nVitamin C	3%2.8 mg\nVitamin K	16%16.4 μg\nMinerals	Quantity%DV†\nCalcium	2%16 mg\nIron	2%0.28 mg\nMagnesium	4%13 mg\nManganese	4%0.079 mg\nPhosphorus	3%24 mg\nPotassium	3%147 mg\nSodium	0%2 mg\nZinc	2%0.2 mg\nOther constituents Quantity\nWater	95.23 g\nFluoride	1.3 µg");
        break;
    case 2:
       printf("Okra\n33 Calories\n- 100 grams\nNutrient	Amount(g)	DV(%)\nTotal Fat	0.2 g	0%\nCholesterol	0 mg	0%\nSodium	7 mg	0%\nPotassium	299 mg	8%\nTotal Carbohydrate	7 g	2%\nProtein	1.9 g	3%");
       break;
    case 3:
        printf("Amount Per \n100 grams\n100 grams\nCalories 41\n% Daily Value*\nTotal Fat 0.2 g	0%\nSaturated fat 0 g	0%\nTrans fat regulation 0 g	\nCholesterol 0 mg	0%\nSodium 69 mg	2%\nPotassium 320 mg	9%\nTotal Carbohydrate 10 g	3%\nDietary fiber 2.8 g	11%\nSugar 4.7 g	\nProtein 0.9 g	1%\nVitamin C	9%	Calcium	3%\nIron	1%	Vitamin D	0%\nVitamin B6	5%	Cobalamin	0%\nMagnesium	3%	");
        break;
    case 4:
       printf("Nutritional value per 100 g (3.5 oz)\nEnergy	141 kJ (34 kcal)\nCarbohydrates\n6.64 g\nSugars	1.7 g\nDietary fiber	2.6 g\nFat\n0.37 g\nProtein\n2.82 g\nVitamins	Quantity%D\nVitamin A equiv.\nbeta-Carotene\nlutein zeaxanthin\n4%31 μg\n3%361 μg\n1403 μg\nThiamine (B1)	6%0.071 mg\nRiboflavin (B2)	10%0.117 mg\nNiacin (B3)	4%0.639 mg\nPantothenic acid (B5)	11%0.573 mg\nVitamin B6	13%0.175 mg\nFolate (B9)	16%63 μg\nCholine	4%19 mg\nVitamin C	107%89.2 mg\nVitamin E	5%0.78 mg\nVitamin K	97%101.6 μg\nMinerals	Quantity%DV†\nCalcium	5%47 mg\nIron	6%0.73 mg\nMagnesium	6%21 mg\nManganese	10%0.21 mg\nPhosphorus	9%66 mg\nPotassium	7%316 mg\nSodium	2%33 mg\nZinc	4%0.41 mg\nOther constituents	Quantity\nWater	89.3 g");
       break;
    case 5:
        printf("Lettuce, green leaf\n15 Calories\n - 100 grams\nNutrient	Amount(g)	DV(%)\nTotal Fat	0.2 g	0%\nCholesterol	0 mg	0%\nSodium	28 mg	1%\nPotassium	194 mg	5%\nTotal Carbohydrate	2.9 g	0%\nProtein	1.4 g	2%");
        break;
    case 6:
        printf("Nutritional value per 100 g (3.5 oz)\nEnergy	104 kJ (25 kcal)\nCarbohydrates\n5 g\nSugars	1.9 g\nDietary fiber	2 g\nFat\n0.3 g\nProtein\n1.9 g\nVitamins	Quantity%DV†\nThiamine (B1)	4%0.05 mg\nRiboflavin (B2)	5%0.06 mg\nNiacin (B3)	3%0.507 mg\nPantothenic acid (B5)	13%0.667 mg\nVitamin B6	14%0.184 mg\nFolate (B9)	14%57 μg\nVitamin C	58%48.2 mg\nVitamin E	1%0.08 mg\nVitamin K	15%15.5 μg\nMinerals	Quantity%DV†\nCalcium	2%22 mg\nIron	3%0.42 mg\nMagnesium	4%15 mg\nManganese	7%0.155 mg\nPhosphorus	6%44 mg\nPotassium	6%299 mg\nSodium	2%30 mg\nZinc	3%0.27 mg\nOther constituents	Quantity\nWater	92 g");
        break;

    }
}

void health()
{
int num;
    system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    CALORIFY");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd HEALTH ISSUES\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ");
    printf("\n ");
    printf("   [1] DIABETES\n\n");
    printf("   [2] HIGH CHOLESTEROL\n\n");
    printf("   [3] HIGH BLOOD PRESSURE\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("   ENTER YOUR CHOICE: \n\n");
    scanf("%d",&num);
    switch(num)
    {
    case 1:
     printf(" Diabetes \n Also called: diabetes mellitus \n A group of diseases that result in too much sugar in the blood (high blood glucose). \nMOST COMMON TYPES \nType 2 diabetes \nA chronic condition that affects the way the body processes blood sugar (glucose). \nType 1 diabetes \nA chronic condition in which the pancreas produces little or no insulin.\nPrediabetes \nA condition in which blood sugar is high, but not high enough to be type 2 diabetes. \nGestational diabetes \nA form of high blood sugar affecting pregnant women.");
        break;
    case 2:
        printf("High cholesterol \nAlso called: hypercholesterolemia \nOVERVIEW: \nHigh amounts of cholesterol in the blood.\nHigh cholesterol can limit blood flow, increasing the risk of a heart attack or stroke. It's detected by a blood test.\nHigh cholesterol has no symptoms.\nTreatments include medication, a healthy diet and exercise.\nVery common\nMore than 10 million cases per year (India)\nTreatable by a medical professional\nRequires a medical diagnosis\nLab tests or imaging always required\nChronic: can last for years or be lifelong\nSYMPTOMS:\nRequires a medical diagnosis\nHigh cholesterol has no symptoms.\nCan have no symptoms, but people may experience:\nCommon symptoms: heart attack, peripheral artery disease, or stroke\nSPECIALIST:\nCardiologist\nSpecialises in heart disorders.\nGeriatrician\nFocuses on the health care of elderly people.\nNutritionist\nSpecialises in food and diet.\nPrimary Care Provider (PCP)\nPrevents, diagnoses and treats diseases.\nolesterolemia\nTREATMENTS:\nTreatment consists of self care and statins\nTreatments include medication, a healthy diet and exercise.\nSelf-care\nPhysical exercise and Low fat diet\nMedications\nStatin and Cholesterol medication");
        break;
    case 3:
        printf("High blood pressure\nAlso called: HBP, hypertension\nOVERVIEW:\nA condition in which the force of the blood against the artery walls is too high.\nUsually hypertension is defined as blood pressure above 140/90, and is considered severe if the pressure is above 180/120.\nHigh blood pressure often has no symptoms. Over time, if untreated, it can cause health conditions, such as heart disease and stroke.\nEating a healthier diet with less salt, exercising regularly and taking medication can help lower blood pressure.\nSYMPTOMS:\nRequires a medical diagnosis\nHigh blood pressure often has no symptoms. Over time, if untreated, it can cause health conditions, such as heart disease and stroke.\nTREATMENTS:\nTreatment consists of self care and diuretics\nEating a healthier diet with less salt, exercising regularly and taking medication can help lower blood pressure.\nSelf-care\nPhysical exercise, Stress management, Quitting smoking, Home blood pressure monitors and Low sodium diet\nMedications\nACE inhibitor, Diuretic, Beta blocker, Antihypertensive drug, Calcium channel blocker and Vasodilator\nSPECIALISTS:\nPrimary Care Provider (PCP)\nPrevents, diagnoses and treats diseases.\nCardiologist\nSpecialises in heart disorders.\n Nephrologist \nFocuses on kidney disorders. ");
        break;
}
}
void report()
{
 system("cls");
    printf("\n\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n");
    printf("\t    CALORIFY");
    printf("\n   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\n\n");
    printf("   \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd REFERENCE \xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd\xcd  ");
    printf("\n\n\n ");
    printf("*PERCENT DAILY VALUE IS BASED ON A 2,000 CALORIE DIET.\n YOUR DAILY VALUE MAY BE HIGHER OR LOWER DEPENDING UPON YOUR CALORIE NEEDS");
    printf("SOURCES INCLUDE: \n [1]USDA \n [2]ESTIMATION OF DAILY BODY FAT - GlobalRPHhttps://globalrph.com › medcalcs › \n [3] https://www.omnicalculator.com/health/lean-body-mass \n [4]https://ourworldindata.org/calorie-supply-sources");
getch();
}
