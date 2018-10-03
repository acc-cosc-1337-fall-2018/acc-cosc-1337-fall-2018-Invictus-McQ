#include "invoice_detail.h"


double InvoiceDetail::get_extended_cost() const
{
	return cost * unit;
}


