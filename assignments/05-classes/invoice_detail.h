#ifndef INVOICEDETAIL_H
#define INVOICEDETAIL_H
#include<iostream>

class InvoiceDetail
{
public:
	InvoiceDetail() = default;
	InvoiceDetail(double c, int u) : cost(c), unit(u) {}
	double get_extended_cost() const;
	friend std::istream & operator>>(std::istream& in, InvoiceDetail& d);

private:
	double cost;
	int unit;

};

#endif // INVOICEDETAIL_H
