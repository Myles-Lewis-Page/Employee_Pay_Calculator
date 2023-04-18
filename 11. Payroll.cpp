#include <iostream>

/*for input & output stream */

#include <iomanip>

/* for using precision and fixed */

using namespace std;

/* PayRoll Class*/

class payRoll1

{

     /* attributes and methods */

     private:

          int workedHours;

          double rateOfPay;

     public:

          payRoll1();

          payRoll1(int, double);

          void setmyHours(int);

          void setRateOfPay(double);

          int getmyHours() const;

          double getRateOfPay() const;

          double getmyGross()const;

};

/* constructor with no arguments */

payRoll1::payRoll1()

{

     workedHours = 0;

    rateOfPay = 0.0;

}

/* constructor */

payRoll1::payRoll1(int hrs, double rop)

{

    rateOfPay = rop;

    workedHours = hrs;

}

/* set method for hours worked */

void payRoll1::setmyHours(int hrs)

{

    workedHours = hrs;

}

/* set method for rate of pay */

void payRoll1::setRateOfPay(double srop)

{

    rateOfPay = srop;

}

/* get method for hours worked */

int payRoll1::getmyHours() const

{

    return workedHours;

}

/* get method for rate of pay */

double payRoll1::getRateOfPay() const

{

    return rateOfPay;

}

/* get method for grossPay */

double payRoll1::getmyGross() const

{

    double myGross = static_cast<double>(workedHours) * rateOfPay;

    return myGross;

}

/* main method */

int main()

{

    /* variable declarations */

     const int NoOfEmployee = 7;

    payRoll1 emp[NoOfEmployee];

    double myrop;

    int myhrs;

    int a;

    double mygrossPay;

     cout<<"Creating 7 Payroll objects."<<endl;

     /* loop to get the employees details */

    for (a = 0; a < NoOfEmployee; a++)

    {

          cout << "Enter the # " << (a) << " employee's rate of pay per hour:";

        cin >> myrop;

        cout << "Enter the # " << (a) << " employee's hours worked for the week:";

        cin >> myhrs;

        emp[a].setRateOfPay(myrop);

        emp[a].setmyHours(myhrs);       

    }

    /* output */

     cout << "\n\nGrossPay for every employee:\n";

    cout << fixed << showpoint << setprecision(2);

    /* loop to print all employees details */

     for (int a = 0; a < NoOfEmployee; a++)

    {

          mygrossPay = emp[a].getmyGross();

        cout<<"Employee # "<<(a)<<" worked "<<emp[a].getmyHours() <<".00"

          <<" hours at $"<< emp[a].getRateOfPay()<<" for a gross pay of $"<< mygrossPay <<endl;

    }        

     system("pause");

    return 0;

}