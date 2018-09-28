#ifndef INVOICEDETAIL_H
#define INVOICEDETAIL_H

class InvoiceDetail
{
public:
	InvoiceDetail(double c, int u): cost(c), unit(u) {}
	double get_extended_cost();

private:
	double cost;
	int unit;

};

#endif // INVOICEDETAIL_H
