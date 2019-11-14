package indextree;

import java.io.File;
import java.io.FileNotFoundException;
import java.util.Scanner;



// Your class. Notice how it has no generics.
// This is because we use generics when we have no idea what kind of data we are getting
// Here we know we are getting two pieces of data: a string and a line number
public class IndexTree 
{

	// This is your root 
	// again, your root does not use generics because you know your nodes
	// hold strings, an int, and a list of integers
	private IndexNode root;
	
	// Make your constructor
	// It doesn't need to do anything
	
	// complete the methods below
	
	// this is your wrapper method
	// it takes in two pieces of data rather than one
	// call your recursive add method
	public void add(String word, int lineNumber)
        {
            add(root, word, lineNumber);
           
            
	}
	
	
	
	// your recursive method for add
	// Think about how this is slightly different the the regular add method
	// When you add the word to the index, if it already exists, 
	// you want to  add it to the IndexNode that already exists
	// otherwise make a new indexNode
	private IndexNode add(IndexNode root, String word, int lineNumber)
        {
            IndexNode newNode;
            if(this.root == null)
            {
                this.root = new IndexNode(word, lineNumber);
            }
            else if(root == null)
            {
                root = new IndexNode(word, lineNumber);
                return root;
            }
            else if(root.word.contains(word))
            {
                root.occurences++;
                root.list.add(lineNumber);
                return root;
            }
            else if(root.word.compareTo(word) > 0)
            {
                newNode = add(root.left, word, lineNumber);
                root.left = newNode;
                return root;
            }
            else
            {
                newNode = add(root.right, word, lineNumber);
                root.right = newNode;
                return root;
            }
            
            return null;
        
	}
	
	
	
	
	// returns true if the word is in the index
	public boolean contains(String word)
        {
//            if(root == null)
//            {
//                return false;
//            }
            if(root.word.equals(word))
            {
               return true;
            }
//            else if(root.left.word.equals(word))
//            {
//                return true;
//            }
//            else if(root.right.word.equals(word))
//            {
//                return true;
//            }
//            else
//            {
//                return contains(word);
//            }
           
            return false;
	}
	
	// call your recursive method
	// use book as guide
	public void delete(String word)
        {
            delete(root, word);            
	}
	
    private String findLargestChild(IndexNode parent)
    {
        if(parent.right.right == null)
        {
            String returnValue = parent.right.word;
            parent.right = parent.right.left;
            return returnValue;
        }
        else
        {
            return findLargestChild(parent.right);
        }
        
    }
	// your recursive case
	// remove the word and all the entries for the word
	// This should be no different than the regular technique.
    private IndexNode delete(IndexNode root, String word)
    {
            String strDeletedReturn;
            if(root == null)
            {
                strDeletedReturn = null;
                return root;
            }
            int nResult = word.compareTo(root.word);
            if(nResult < 0)
            {
                root.left = delete(root.left, word);
                return root;
            }
            else if(nResult > 0)
            {
                root.right = delete(root.right, word);
                return root;
            }
            else
            {
                strDeletedReturn = root.word;
                if(root.left == null && root.right == null)
                {
                    root = null;
                }
                else if(root.left == null)
                {
                    return root.right;
                }
                else if(root.right == null)
                {
                    return root.left;
                }
                else
                {
                    if(root.left.right == null)
                    {
                        root.word = root.left.word;
                        root.left = root.left.left;
                        return root;
                    }
                    else
                    {
                       root.word = findLargestChild(root.left);
                       return root;
                    }
                }

            }   
            
            
            return null;
	}
	
	
	// prints all the words in the index in inorder order
	// To successfully print it out
	// this should print out each word followed by the number of occurrences and the list of all occurrences
	// each word and its data gets its own line
        public void printIndex()
        {
            printIndex(root);
            
	}

	public void printIndex(IndexNode root)
        {
            if(root==null)
            {
                return;
            }
  
            printIndex(root.left);
//            System.out.println(root.word);
            System.out.println(root.toString());
            printIndex(root.right);                

	}
	
        private static int size(IndexNode root)
        {
            if(root == null)
            {
                return 0;
            }
            int a = 1;
            
            a += size(root.left);
            a += size(root.right);
            return a;
        }
        
	public static void main(String[] args)
        {
            
                IndexTree index = new IndexTree(); 
		String fileName = "pg100.txt";
                int nLine = 0;
		try 
                {
			Scanner input = new Scanner(new File(fileName));
			while(input.hasNextLine())
                        {
                                nLine++;
				String line = input.nextLine();
//                                line.split("\n");
//                                line.split("\t");                                
//                                line.replaceAll("[^a-zA-Z]", "");
				String[] words = line.toLowerCase().split("\\s+");
//                                System.out.println(line);
//				words = line.replaceAll("\\\\s*,\\\\s*");
                                

				for(String word : words)
                                {
                                    if(word.equals("") | word.matches("[0-9]"))
                                    {
                                            continue;
                                    }
					word = word.replaceAll("[^a-z]", "");

					word = word.replace(":", "");
					word = word.replace(",", "");
 					word = word.replace("'", "");
 					word = word.replace(".", "");  
//         				System.out.println(word);
                                        index.add(word, nLine);
				}
			}
			input.close();
                         index.printIndex();                                
                       System.out.println(size(index.root));
                       index.delete("this");
                       index.delete("william");                       
                       System.out.println(size(index.root));
                       
		} 
                
                catch (FileNotFoundException e1) 
                {
                        System.out.println("File not found");
			// TODO Auto-generated catch block
			e1.printStackTrace();
		}
		
		// add all the words to the tree
		
		// print out the index
		
		// test removing a word from the index

		
	}
}
