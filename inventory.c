#include <stdio.h>
#include <string.h>

// Defining the blueprint for a "Product"
// In Full Stack terms, this is your "Model" or "Schema"
typedef struct {
    int id;             // Barcode / ID
    char name[50];      // Product Name
    double price;       // Price in USD
    int stockQty;       // Quantity in stock
} Product;

int main() {
    // Create a single product instance
    Product item1;

    // Fill the data
    item1.id = 1001;
    strcpy(item1.name, "Wireless Gaming Mouse");
    item1.price = 49.99;
    item1.stockQty = 150;

    // Display the product details (Backend response simulation)
    printf("--- PRODUCT DETAILS ---\n");
    printf("ID: %d\n", item1.id);
    printf("Name: %s\n", item1.name);
    printf("Price: $%.2f\n", item1.price);
    printf("Stock: %d units\n", item1.stockQty);

    // Simple Logic: Calculate total value of this item in warehouse
    double totalValue = item1.price * item1.stockQty;
    printf("Total Asset Value: $%.2f\n", totalValue);

    return 0;
}