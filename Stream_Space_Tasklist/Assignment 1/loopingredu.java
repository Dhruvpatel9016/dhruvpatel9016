public class loopingredu {
    public static void main(String[] args) {
        System.out.println("Sum of numbers from 1 to 5: " + loopingredu(-5));
        System.out.println("Sum of numbers from 1 to 10: " + loopingredu(10));
    }

    public static int loopingredu(int n) {
        if (n <= 1) {
            return n;
        } else {
            return n + loopingredu(n - 1);
        }
    }
}