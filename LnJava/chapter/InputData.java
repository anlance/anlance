package chapter;

import java.util.Scanner;

public class InputData {

 
    public static void main(String[] args) {
        
        Scanner reader = new Scanner(System.in);
        int amount = 0;
        float price = 0;
        float sum = 0;
        System.out.println("�����Ʒ����(�س�ȷ��)");
        amount = reader.nextInt();
        System.out.println("�����Ʒ����(�س�ȷ��)");
        price = reader.nextFloat();
        
        sum = price * amount;
        
        System.out.printf("����:%d, ����:%5.2f, �ܼ�ֵ:%5.2f", amount, price, sum);
    }
    
}
