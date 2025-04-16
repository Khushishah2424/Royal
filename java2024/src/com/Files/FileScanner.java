package com.Files;
import java.io.File;

import java.io.FileNotFoundException;
import java.util.Scanner;

public class FileScanner {

	
    public static void main(String[] args) {
        try (Scanner sc = new Scanner(new File("demo1.txt"))) { 
            int count = 0;
            while (sc.hasNext()) {
                System.out.println(sc.next());

                count++;
            }
            System.out.println("count = " + count);
            
        } catch (FileNotFoundException e) {
            e.printStackTrace();
            
        }
    }
}


