public class ClamPizza extends Pizza {

    PizzaIngredientFactory ingredientFactory;

    public ClamPizza(PizzaIngredientFactory ingredientFactory) {
        this.ingredientFactory = ingredientFactory;
    }

    void prepare() {
        System.out.println("Preparing " + Pizza.this.name);
        Pizza.this.dough = ingredientFactory.createDough();
        Pizza.this.sauce = ingredientFactory.createSauce();
        Pizza.this.cheese = ingredientFactory.createCheese();
        Pizza.this.clam = ingredientFactory.createClam();
    }
}
