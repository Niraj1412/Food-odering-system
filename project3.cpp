#include <iostream>
#include <cctype>
#include <cstdlib>
#include <iomanip>


using namespace std;


int main()
{
char choice='Y';

int order = 1;

int num1=0, num2=0, num3=0, num4=0, num5=0, num6=0;
int num_customers;
int sentinel=0;
const double UnitPrice1= 2.99, UnitPrice2= 2.22,UnitPrice3= 2.50, UnitPrice4= 5.65, UnitPrice5= 8.95, UnitPrice6= 7.95;
double AmountofSale1=0, AmountofSale2=0, AmountofSale3=0, AmountofSale4=0, AmountofSale5=0, AmountofSale6=0;


cout<<"#################### ORDERING SYSTEM ####################\n\n"
     <<"\n [1] Buttered Shrimps		\t$2.99 <---\n"
     <<"\n [2] Steak  		        \t$2.22 <---\n"
	 <<"\n [3] Salmon   	        \t\t$2.50 <---\n"
	 <<"\n [4] Chicken Biryani		    \t$5.65 <---\n"
	 <<"\n [5] Lamb Meat		        \t$8.95 <---\n"
     <<"\n [6] Pork Stew		        \t$7.95 <---\n";



while (order != sentinel)
{
cout<<"\nPlease choose your order!:\n";
cin>>order;
switch(order)
			{

                case 0:
                break;

				case 1:

                cout<<"\nHow Many Buttered Shrimps?:\n";
                               cin>>num1;

                AmountofSale1 = UnitPrice1 * num1;
                break;




				case 2:
                cout<<"\nHow Many Steak?:\n";
				               cin>>num2;

                AmountofSale2= UnitPrice2 * num2;
                break;


                case 3:
                cout<<"\nHow Many Salmon?:\n";
                                  cin>>num3;

                AmountofSale3= UnitPrice3 * num3;
                break;



                case 4:
                cout<<"\nHow Many Chicken Biryani?:\n";
                                cin>>num4;

                AmountofSale4= UnitPrice4 * num4;
                break;



                case 5:
                cout<<"\nHow Many Would Lamb Meat?:\n";
                                cin>>num5;


                AmountofSale5= UnitPrice5 * num5;
                break;

                case 6:
                cout<<"\nHow Many Would Pork Stew?:\n";
                                cin>>num6;


                AmountofSale6= UnitPrice6 * num6;
                break;


                default: cout<<"Please Choose An Item From Our List\n";
                }


{

cout<<"You Have Ordered:\n\n";
cout<<"===================================================================\n";

cout<<left<<setw(15)<<"ITEM"<<right<<setw(10)<<"\tQUANTITY"<<right<<setw(15)<<"UNIT PRICE"<<right<<setw(20)<<"AMOUNT\n";

cout<<"===================================================================";

cout<<"\nButtered Shrimps:\t"<<setw(6)<<left<< num1 <<setw(16)<<right<< UnitPrice1 <<setw(20) <<right<< AmountofSale1<<endl;

cout<<"\nSteak:\t\t"<<setw(6)<<left<< num2 <<setw(16)<<right<< UnitPrice2 <<setw(20) <<right<< AmountofSale2<<endl<<endl;

cout<<"Salmon:\t\t\t"<<setw(6)<<left<< num3 <<setw(15)<<right<< UnitPrice3 <<setw(21) <<right<< AmountofSale3<<endl<<endl;

cout<<"Chicken Biryani:\t"<<setw(6)<<left<< num4 <<setw(16)<<right<< UnitPrice4 <<setw(20) <<right<< AmountofSale4<<endl<<endl;

cout<<"Lamb Meat:\t\t"<<setw(6)<<left<< num5 <<setw(16)<<right<< UnitPrice5 <<setw(20) <<right<< AmountofSale5<<endl<<endl;

cout<<"Pork Stew:\t\t"<<setw(6)<<left<< num6 <<setw(16)<<right<< UnitPrice6 <<setw(20) <<right<< AmountofSale6<<endl<<endl;

}
              }

system("PAUSE");
return 0;
}
