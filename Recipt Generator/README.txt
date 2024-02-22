						** Receipt Generator **

* Description:
	This program is a simple receipt generator that allows users to input details of products purchased and generates a payment 	receipt in a text file format. It prompts the user to enter product names, prices, and quantities, calculates the total price for 	each product, and then generates a receipt with a breakdown of the purchased items and their total prices.

* Files:
	- receipt_generator.cpp: The main C++ source code file containing the implementation of the receipt generator program.
	- README.txt: This file. Provides a brief overview of the receipt generator program and instructions for usage.

* Usage:
	1. Compilation:
   	- Compile the source code using a C++ compiler (e.g., g++).
   	- Example: g++ receipt_generator.cpp -o receipt_generator

	2. Execution:
   	- Run the compiled executable.

	3. Input:
   	- Follow the prompts to enter product details (name, price, quantity).
   	- Enter '0' as the product name to exit and generate the receipt.

	4. Output:
   	- The program will generate a text file named "Receipt.txt" containing the payment receipt with a breakdown of the purchased items 	and their total prices.

* Dependencies:
	The program uses standard C++ libraries (fstream[ for file handling ], vector[ as storage container ], iomanip [ Beautification 	of Receipt and User Interface a little ] ) and does not require any external dependencies.



	** Contributions to the codebase are welcome. Fork the repository, make your changes, and submit a pull request. **
