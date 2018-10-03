#ifndef INVOICEDETAIL_H
#define INVOICEDETAIL_H

class InvoiceDetail
{
public:
	InvoiceDetail() = default;
	InvoiceDetail(double c, int u): cost(c), unit(u) {}
	double get_extended_cost() const;

private:
	double cost;
	int unit;

};

#endif // INVOICEDETAIL_H
