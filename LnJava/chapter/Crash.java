package chapter;

public class Crash {
public static void main(String[] args) {
        
        int startPos = 0;
        int endPos = 0;
        char cStart = '��';
        char cEnd = '��';
        startPos = cStart;
        endPos = cEnd;
        System.out.println("ϣ����ĸ\'��\'��unicode���е�˳��λ��:" + startPos);
        System.out.println("ϣ����ĸ��:");
        for (int i = startPos; i <= endPos; i++) {
            char c = '\0';
            c = (char)i;
                    
            System.out.print(" " + c);
            
            if((i - startPos + 1) % 10 == 0)
                System.out.println(" ");
            
        }
        
    }

}
