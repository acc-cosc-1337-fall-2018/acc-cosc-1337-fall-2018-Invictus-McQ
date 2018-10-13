#ifndef INVOICE_UTIL_H
#define INVOICE_UTIL_H

#include "invoice.h"

class InvoiceUtility : public Invoice

{
public:
	InvoiceUtility(double fc) : fixed_costs(fc) {}
	double get_total() const;
private:

	double fixed_costs;

};


#endif //INVOICE_UTIL_H
