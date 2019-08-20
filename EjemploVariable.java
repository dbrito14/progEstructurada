
package ejemplovariable;

import java.util.Scanner;


public class EjemploVariable {

    public static void main(String[] args) {
        
        String nombre[] = new String[5];
        
        Scanner s = new Scanner(System.in);
        
        for(int i=0;i<5;i++)
        {
            System.out.println("Ingrese un nombre");
            nombre[i]= s.nextLine();
        }
        System.out.println("Los nombres ingresados son: ");
        for(int i=0;i<5;i++)
        {
            System.out.println(nombre[i]);
        }
    }
    
}
