
public class Product {
    String name;
    float price;
    int quantity;

    public Product(String inputName, float inputPrice, int inputQuantity)
    {
        this.name = inputName;
        this.price = inputPrice;
        this.quantity = inputQuantity;
    }

    public void displayProduct()
    {
        System.out.println(name + "\t" + price + "\t" + quantity + "\t" + (quantity*price));
    }
}
