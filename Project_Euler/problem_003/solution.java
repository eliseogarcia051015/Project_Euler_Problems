package Project_Euler.problem_003;
// A palindromic number reads the same both ways. The largest palindrome made from the product of 
// two 2-digit numbers is 9009 = 91 × 99.
// Find the largest palindrome made from the product of two 3-digit numbers.

public class solution{
    public static void main(String[] args){
        int max = -1; int loop_bounds = 999; int a=0;int b=0;
        for (int i = loop_bounds; i>0; i--){
            for (int j = loop_bounds; j>0; j --){
                //System.out.println("I:"+i+"\t\tJ:"+j+"\t\t\t\tProduct: "+ i*j);
                int num = i*j; String convretednum = makeString(num);
                if(isPali(convretednum)){
                    if (num > max){ max = num;a=i;b=j;}
                    //System.out.println("I:"+i+"\t\tJ:"+j+"\t\t\t\tProduct: "+ i*j);
                    continue;
                }
            }
                System.out.println("");
        }
        System.out.println("Max " + max + " is made from "+ a + " * " + b);
    }


    public static boolean isPali(String s){
        for (int i=0; i<s.length(); i++){
            if (s.charAt(i) == s.charAt(s.length()-1-i)){
                continue;
            }
            else{
                return false;
            }
        }
        return true; 
    }

    public static String makeString(int N){
        try {
            String str = Integer.toString(N);
            return str;
        } catch (NumberFormatException e) {
            return "Error: The string is not a valid integer.";
        }
    }

}