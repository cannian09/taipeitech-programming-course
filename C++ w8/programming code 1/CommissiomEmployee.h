#pragma once
#ifndef COMMISSION_H
#define COMMISSION_H

using namespace std;

#include <string>

	class CommissionEmployee
{
public:
	CommissionEmployee(const string&, const string&, const string&, double = 0.0, double = 0.0);
	void setFirstName(const string &);
	string getFirstName() const;

	void setLastName(const string&);
	string getLastName() const;

	void setSocialSercurityNumber(const string&);

	string getSocialSecurityNumber() const;

	void setGrossSales(double);
	double getGrossSales() const;

	void setCommissionRate(double);
	double getCommissionRate() const;

	double earnings() const;
	void print() const;
private:
	string FirstName, LastName, SocialSecurityNumber;
	double GrossSales, CommissionRate;
};

#endif // !COMMISSION_H
