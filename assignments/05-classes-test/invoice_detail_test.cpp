#define CATCH_CONFIG_MAIN  // This tells Catch to provide a main() - only do this in one cpp file
#include "catch.hpp"
#include "invoice_detail.h"

TEST_CASE("Test InvoiceDetail class")
{
	InvoiceDetail invoicedetail(10, 10);
	REQUIRE(invoicedetail.get_extended_cost() == 100);

}