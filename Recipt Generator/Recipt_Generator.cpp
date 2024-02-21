#include <iostream>
#include <fstream> // Header file for File I/O operations
#include <vector>  // Header file for Vector containers
#include <iomanip> // Header file for Manipulating input/output formatting

// Class representing a shop
class Shop
{
protected:
    std::vector<std::string> product;     // Vector to store product names
    std::vector<int> quantity;            // Vector to store product quantities
    std::vector<float> price, totalprice; // Vectors to store product prices and total prices
    float grandtotal = 0.0;               // variable to calculate final sum user has to pay

public:
    // Function to set data for products
    void setdata(const std::string &p, float &cost, int &q)
    {
        product.push_back(p);  // Set product names
        price.push_back(cost); // Set product prices
        quantity.push_back(q); // Set product quantities
        totalprice.push_back(cost * q);
    }

    // Function to generate payment receipt
    void makereceipt()
    {
        // Open a file named "Receipt.txt" for writing
        std::ofstream write("Receipt.txt");

        // Write header for the receipt
        write << std::setw(40) << " Payment receipt" << std::endl
              << std::endl
              << std::setw(15) << "Product" << std::setw(15) << "Price" << std::setw(15) << "Quantity" << std::setw(15) << "Total Price" << std::endl
              << std::setfill('-') << std::setw(60) << "-" << std::setfill(' ') << std::endl;

        // Write product details to the receipt
        for (size_t i = 0; i < product.size(); ++i)
        {
            write << std::setw(15) << product[i]
                  << std::setw(15) << std::fixed << std::setprecision(2) << price[i]
                  << std::setw(15) << quantity[i]
                  << std::setw(15) << totalprice[i] << std::endl;

            grandtotal += totalprice[i]; // calculating grandtotal 
        }

        write << std::setfill('-') << std::setw(60) << "-" << std::setfill(' ') << std::endl
              << std::setw(45)
              << "Grand Total -> " << grandtotal;

        // Close the file
        write.close();
    }
};

// Main function
int main()
{
    std::cout << "---------------------- Receipt Generator ------------------------" << std::endl
              << std::endl;
    // Temporary variables to store product details
    std::string product;
    float price;
    int quantity;
    // Create an object of Shop class
    Shop Customer;

    // Prompt the user to enter product details
    std::cout << "Enter product details (name price quantity)" << std::endl;
    // Loop to input product details
    while (true)
    {
        // Prompt user to enter product name
        std::cout << "Enter Product Name (press '0' to exit): ";
        std::cin >> product;

        // Check if user wants to exit
        if (product == "0")
            break;

        // Prompt user to enter product quantity
        std::cout << "Enter Quantity : " << std::endl;
        std::cin >> quantity;

        // Prompt user to enter product price
        std::cout << "Enter Price : " << std::endl;
        std::cin >> price;

        // Set data for products
        Customer.setdata(product, price, quantity);
    }

    // Generate payment receipt
    Customer.makereceipt();

    // Display message indicating successful generation of receipt
    std::cout << "Receipt generated successfully." << std::endl;

    // Return from main function
    return 0;
}
