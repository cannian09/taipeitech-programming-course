#include "CommissionEmployee.h"
#include <iostream>
#include <stdexcept>
using namespace std;

CommissionEmployee::CommissionEmployee(const string &first,const string &last,const string &ssn,double sales,double rate)
{
	FirstName = first;
	LastName = last;
	SocialSecurityNumber = ssn;
	setGrossSales(sales);
	setCommissionRate(rate);
}

void CommissionEmployee::setFirstName(const string &first)
{
	FirstName = first;
}

string CommissionEmployee::getFirstName() const
{
	return FirstName;
}

void CommissionEmployee::setLastName(const string &last)
{
	LastName = last;
}

string CommissionEmployee::getLastName() const
{
	return LastName;
}

void CommissionEmployee::setSocialSercurityNumber(const string &ssn)
{
	SocialSecurityNumber = ssn;
}

string CommissionEmployee::getSocialSecurityNumber() const
{
	return SocialSecurityNumber;
}

void CommissionEmployee::setGrossSales(double sales)
{
	if (sales >= 0.0)
		GrossSales = sales;
	else
		throw invalid_argument("Gross sales must be >=0.0");
}

double CommissionEmployee::getGrossSales() const
{
	return GrossSales;
}

void CommissionEmployee::setCommissionRate(double rate)
{
	if (rate > 0.0&&rate < 1.0)
		CommissionRate = rate;
	else
		throw invalid_argument("Commission rate must be > 0.0 and < 1.0");
}

double CommissionEmployee::getCommissionRate() const
{
	return CommissionRate;
}

double CommissionEmployee::earnings() const
{
	return CommissionRate * GrossSales;
}

void CommissionEmployee::print() const
{
	cout << "commission employee:" << FirstName << ' ' << LastName << "social security number" << SocialSecurityNumber
		<< "\ngross sales:" << GrossSales << "\ncommission rate:" << CommissionRate;
}
