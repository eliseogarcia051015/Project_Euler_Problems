package Project_Euler.problem_002;
import java.util.HashMap;

public class solution2{
    public static void main(String[] args){
        HashMap<Integer, Integer> fibMap = new HashMap<>();
        //base cases
        fibMap.put(1,1);
        fibMap.put(2,2);
        
        int limit = 4_000_000;
        int sum = 0;
        int i = 1;

        while (true) {
            int fib;

            if (i <= 2) {
                fib = fibMap.get(i);
            } else {
                fib = fibMap.get(i - 1) + fibMap.get(i - 2);
                fibMap.put(i, fib);
            }

            if (fib > limit) {
                break;
            }

            if (fib % 2 == 0) {
                sum += fib;
            }

            i++;
        }

        System.out.println("Sum of even Fibonacci numbers ≤ 4,000,000: " + sum);
    }
}