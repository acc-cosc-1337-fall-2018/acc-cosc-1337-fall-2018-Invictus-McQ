#include "invoice_detail.h"
#include<iostream>

int main()
{	
	InvoiceDetail invoicedetail(10,10);
	std::cout << invoicedetail.get_extended_cost()  << std::endl;
	return 0;
}