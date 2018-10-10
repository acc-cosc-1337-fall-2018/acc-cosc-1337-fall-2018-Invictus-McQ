project(classes_library_sub)

add_library(classes_library_sub "invoice_detail.cpp" "invoice_detail.h" 
							"invoice.h" "invoice.cpp"
							"invoice_utility.h" "invoice_utility.cpp")
add_executable(classes_exe "main.cpp")
target_link_libraries(classes_exe classes_library_sub) 