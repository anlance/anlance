package chapter;
import java.util.Scanner;
public class Computer {
	public static void main(String args[]) {
		Scanner reader = new Scanner(System.in);
		double amount = 0;  //��ŵ���
		double price = 0;	//�û���Ҫ���ɵĵ��
		System.out.println("�������:");
		amount = reader.nextDouble();
		if(amount < 90 &&amount >= 1) {
			price = amount * 0.6;
		}
		else if(amount <= 150 && amount >= 91) {
			price = (amount -90)* 1.1+90*0.6;
		}
		else if(amount > 150) {
			price = (amount-150) * 1.7+60*1.1+90*0.6;
		}
		else {
			System.out.println("���������"+amount+"������");
		}
		System.out.printf("��ѣ�%5.2f",price);
	}
}
