#include "invoice_progress.h"

double InvoiceProgress::get_total()
{
	return fixed_price - Invoice::get_total();
}
