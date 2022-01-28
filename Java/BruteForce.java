package Java;

import java.util.*;

public class BruteForce 
{
    public static int find_fac(int num1,int num2)
  {
    int ans = 1;
    int num = 0;
    if(num1 > num2)
      num = num2;
    else {
        num = num1;
    }
    for(int i = num; i > 0; i--)
    {
      if(num1 % i == 0 && num2 % i == 0) {
        ans = i;
        break;
        }
    }
    return ans;
  }
  public static void main(String args[])
  {
    int gcd = find_fac(12, 28);
    System.out.println(gcd);
  }
}
