package indextree;

import java.util.List;
import java.util.*;

public class IndexNode  
{

	// The word for this entry
	String word;
	// The number of occurrences for this word
	int occurences;
	// A list of line numbers for this word.
	List<Integer> list = new ArrayList<Integer>(); 
	
	
	IndexNode left;
	IndexNode right;
	
	
	// Constructors
        public IndexNode()
        {
            word = null;
            list = null;
            left = right = null;
            occurences = 0;
        }
	// Constructor should take in a word and a line number
        public IndexNode(String a_word, int a_line)
        {
            word = a_word;
            list.add(a_line);
            left = right = null;
            occurences = 1;      
            
        }
	// it should initialize the list and set occurrences to 1
	
	
	
	
	// Complete This
	// return the word, the number of occurrences, and the lines it appears on.
	// string must be one line
	
	public String toString()
        {
             String nString = word + "\tNumber of Occurences: " + occurences + "\tNumber of Lines: " + list;
            
            return nString;
	}
	
	
	
}
