
package modelos;

public class Modelos {

    public static void main(String[] args) {
     int i = 3;
        int j = 1;
        int k = 2;

        if (i > j) {
            System.out.println("La primera condiciÃ³n se cumple.");
            if (k < i) {
                System.out.println("La condiciÃ³n del if anidado se cumple.");
                if (j < k) {
                    System.out.println("La condiciÃ³n del segundo if anidado se cumple.");
                }
            }
        } else {
            System.out.println("La primera condiciÃ³n no se cumple.");
        }
}
}
