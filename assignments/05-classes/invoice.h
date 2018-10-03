#ifndef INVOICE_H
#define INVOICE_H

#include<string>
#include<vector>
#include "invoice_detail.h"

using std::vector; using std::string;
class Invoice
{

public:
	void add_invoice_detail(InvoiceDetail detail);
	double get_total() const;

private:
	vector <InvoiceDetail> invoice_details;


};
#endif // INVOICE_H


