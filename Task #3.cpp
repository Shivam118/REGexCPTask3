// TASK 3
// Referral Code : CPRSS1135
// Name : SHIVAM SHARMA

/* 
AIM: WAP to calculate tax deduction as follow-
    1. Up to 2.5L no tax.
    2. More than 2.5 L but up to 5L 10%.
    3. More than 5L but up to 10L 20%.
    4. More than 10L 30%.
        i. If senior citizen (age >= 60) then relaxation of 5%.
        ii. if woman candidate (age >= 60) then relaxation of 3%.
*/



#include <iostream>
using namespace std;

int main()
{
    double salary=0,tax_amount;
    int age, gender, tax=0;
    cout<<"Enter your Salary: ";
    cin>>salary;
    cout<<"Enter your AGE: ";
    cin>>age;
    cout<<"Enter your Gender (0-M or 1-F): ";
    cin>>gender;
    if (salary>0 && salary<=250000){
        cout<<"No Tax"<<endl;
    }
    else if (salary>250000 && salary<=500000){
        tax = 10;
        cout<<tax<<"% Tax"<<endl;
    }
    else if (salary>500000 && salary<=1000000){
        tax = 20;
        cout<<tax<<"% Tax"<<endl;
    }
    else if (salary>1000000){
        tax = 30;
        if(age>=60)
            tax-=5;
        if(gender==1)
            tax-=3;
        cout<<tax<<"% Tax"<<endl;
    }
    tax_amount =(salary*((float)tax/100));
    cout<<"You Have to Pay: Rs"<<tax_amount<<endl;
    return 0;
}