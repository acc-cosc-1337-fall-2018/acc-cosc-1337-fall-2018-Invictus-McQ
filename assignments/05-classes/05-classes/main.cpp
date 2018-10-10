#include "invoice.h"
#include "invoice_utility.h"
#include <vector>
#include<iostream>

int main()
{	
	Invoice invoice;
	InvoiceDetail detail;

	std::cin >> detail;
	invoice.add_invoice_detail(detail);
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice invoice1;
	invoice1.add_invoice_detail(InvoiceDetail(100, 2));
	Invoice result = invoice + invoice1;

	std::cout << result.get_total();

	//InvoiceUtility Assignment
	InvoiceUtility inv(25);
	std::cout <<  inv.add_invoice_detail(InvoiceDetail(100, 1));

	return 0;

}
