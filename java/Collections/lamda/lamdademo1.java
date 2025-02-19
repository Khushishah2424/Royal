// package Collections.lamda;

@FunctionalInterface
interface Mappbale{
    public void map();
}

@FunctionalInterface
interface Chargeble{
    public int  charge(int power);
}
public class lamdademo1 {
        public static void main(String[] args) {
            Mappbale m = ()->{
                System.err.println("map method called");
            };
            m.map();

            Chargeble c = (power)->{
                return power * 1000;
            };
            System.out.println(c.charge(100));
        }

}
