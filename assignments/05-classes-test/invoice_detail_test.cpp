#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "invoice.h" //also included invoice_detail

TEST_CASE("Test InvoiceDetail class")
{
	InvoiceDetail invoicedetail(10, 10);
	REQUIRE(invoicedetail.get_extended_cost() == 100);

}

TEST_CASE("Test Invoice class")
{
	Invoice invoice;
	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	InvoiceDetail d1(10, 10);
	InvoiceDetail d2(5, 5);
	InvoiceDetail d3(100, 2);
	REQUIRE(invoice.get_total() == 325);
	REQUIRE(d1.get_extended_cost() == 100);
	REQUIRE(d2.get_extended_cost() == 25);
	REQUIRE(d3.get_extended_cost() == 200);
}

TEST_CASE("Test invoice operator overloading")
{

	Invoice invoice;
	invoice.add_invoice_detail(InvoiceDetail(10, 10));
	invoice.add_invoice_detail(InvoiceDetail(5, 5));
	invoice.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice invoice1;
	invoice1.add_invoice_detail(InvoiceDetail(100, 2));

	Invoice result = invoice + invoice1;
	REQUIRE(result.get_total() == 525);

}
