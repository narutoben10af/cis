/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package streams;
import java.util.*;
import java.util.stream.*;
/**
 *
 * @author eian
 */
public class Streams 
{

    /**
     * @param args the command line arguments
     */
    public static void main(String[] args) 
    {
        
        String[] names = {"JJohn", "Peter", "Susan", "Kim", "Jen", "George", "Alan", "Stacy", "Michelle", "john"};
        
        Stream.of(names).sorted().limit(4).forEach(e -> System.out.print(e + " "));
        Stream.of(names).limit(6).sorted().forEach(e -> System.out.print(e + " "));

        System.out.println();
        
        Stream.of(names).skip(4).sorted((e1, e2) -> e1.compareToIgnoreCase(e2))
                .forEach(e -> System.out.print(e + " "));
        
        Stream.of(names).skip(4).sorted(String::compareToIgnoreCase)
                .forEach(e -> System.out.print(e + " "));

        System.out.println("\nLargest string with > 4: " + Stream.of(names).filter(e -> e.length() > 4)
                .max(String::compareTo).get());
        
        System.out.println("Smallest string alphabetically: " + Stream.of(names).min(String::compareTo).get());
        
        
        System.out.println("Tim Apple is in names? " + Stream.of(names).anyMatch(e -> e.equals("Tim")));

        System.out.println("All names start with capital letters? : " + Stream.of(names)
                .allMatch(e -> Character.isUpperCase(e.charAt(0))));

        System.out.println("No name begins with Ko? " + Stream.of(names).noneMatch(e -> e.startsWith("Ko")));

        
        System.out.println("Number of distinct case-incensitive strings: " 
                + Stream.of(names).map(e -> e.toUpperCase()).distinct().count());

         System.out.println("First elements in this stream in lowercase : " + Stream.of(names)
                .map(String::toLowerCase).findFirst().get());
         
         System.out.println("Skip 4 and get any element in this stream: " + Stream.of(names)
                .skip(4).sorted().findAny().get());
         
         Object[] namesInLowerCase = Stream.of(names).map(String::toLowerCase).toArray();
         System.out.println(java.util.Arrays.toString(namesInLowerCase));
         
         int[] values = {3, 4, 1, 5, 20, 1, 3, 3, 4, 6};
         System.out.println("The average of the distinct even numbers > 3: " + 
                 IntStream.of(values).distinct().filter(e -> e > 3 && e % 2 == 0).average().getAsDouble());

         
         System.out.println("The sum of the first 4 numbers is " + IntStream.of(values).limit(4).sum());
         
         IntSummaryStatistics stats = IntStream.of(values).summaryStatistics();
         
         System.out.printf("The summary of the stream is" + " Count: " + 
                 stats.getCount() + "  Max: " + stats.getMax() + " Min: " + stats.getMin() + " Sum: " + stats.getSum() +
                 " Average: " + stats.getAverage());
                 
         System.out.println("Total characters count" + Stream.of(names).mapToInt(e -> e.length()).sum());
                 
         
         System.out.println("The number of digits in array values is " + IntStream.of(values).mapToObj(e-> e + "").mapToInt(e -> e.length()).sum());
    }
    
}
