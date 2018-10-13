#include "invoice.h"
#include "invoice_utility.h"
#include "invoice_progress.h"
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

	std::cout << result.get_total() << "\n";

	//InvoiceUtility Assignment
	InvoiceUtility inv_u(25);
	inv_u.add_invoice_detail(InvoiceDetail(100, 1));
	std::cout << inv_u.get_total() << "\n";

	InvoiceProgress inv_p(250);
	inv_p.add_invoice_detail(InvoiceDetail(100, 1));

	std::cout << inv_u.get_total() << "\n";
	std::cout << inv_p.get_total() << "\n";

	Invoice& u = inv_u;
	Invoice& p = inv_p;

	std::cout << u.get_total() << "\n";
	std::cout << p.get_total() << "\n";

	return 0;


}
