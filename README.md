# Task-1
C++ program
#include <iostream>
#include <string>

using namespace std;

double getSales(string);
void findHighest(double, double, double, double);

int main() 
{
    const string Ne = "North East", Nw = "North West",Se = "South East", Sw = "South West";
    double salesOfNe,salesOfNw,salesOfSe,salesOfSw;
           
    salesOfNe = getSales(Ne);
    salesOfNw = getSales(Nw);
    salesOfSe = getSales(Se);
    salesOfSw = getSales(Sw);

    findHighest(salesOfNe, salesOfNw, salesOfSe, salesOfSw);

    return 0;
}

double getSales(string division)
{
    double sales;
    cout << "What is the quarterly sales for " << division << "? $"<<endl;
    cin >> sales;

    while (sales < 0) 
    {
        cout << "What is the quarterly sales for " << division << "? $" << endl;
        cin >> sales;
    }
    cout << endl;
    return sales;
}

void findHighest(double salesOfNe, double salesOfNw, double salesOfSe, double salesOfSw)

{
    double max;
    cout << "The highest division is " ;
    max = salesOfNe;
    if (salesOfNw > max)
        max = salesOfNw;
    if (salesOfSe > max)
        max = salesOfSe;
    if (salesOfSw > max)
        max = salesOfSw;
  
    cout<< max;
}

