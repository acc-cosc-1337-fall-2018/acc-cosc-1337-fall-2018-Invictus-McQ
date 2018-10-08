#include "invoice_detail.h"
#include<iostream>


double InvoiceDetail::get_extended_cost() const
{
	return cost * unit;

}

std::istream & operator>>(std::istream & in, InvoiceDetail & d)
{
	std::cout << "Enter cost: ";
	in >> d.cost;
	std::cout << "Enter units: ";
	in >> d.unit;

	return in;
}
