import java.io.*;
import java.util.*;
import java.text.*;
import java.math.*;
import java.util.regex.*;

public class Solution {

   private static final int NO_OF_LETTERS_OF_ALPHABET = 26;
  	public static void main(String[] args) {
          Scanner in = new Scanner(System.in);

        String sentence = in.nextLine();
        if(isPangram(sentence))
		System.out.println("pangram");
        else
        System.out.println("not pangram");
            
	}

	private static boolean isPangram(String sentence) {

		if (sentence.length() < NO_OF_LETTERS_OF_ALPHABET) {
			return false;
		}

		for (char ch = 'A'; ch <= 'Z'; ch++) {
			if (sentence.indexOf(ch) < 0
					&& sentence.indexOf((char) (ch + 32)) < 0) {
				return false;
			}
		}

		return true;
	}
}