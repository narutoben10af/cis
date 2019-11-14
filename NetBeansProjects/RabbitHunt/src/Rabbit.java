public class Rabbit extends Animal 
{

private boolean canSeeFoxNow; // when it can see the fox
private boolean haveSeenFox; // has seen the fox for sure
private int directionToFox; // 
private int distanceToFox;
private int countFox; // number of times it has seen the fox
private int currentDirection; // current position in the model


public Rabbit(Model model, int row, int column) 
{
		super(model, row, column);
}

public int decideMove() 
{
		int possibleDirection = 4;
		int openSurroundings = 0;// to look for open areas
		int initialPos;// starting position 
		int maxTurn; // the maximum range it can turn 

		// looking everywhere for the fox
		for(int i = Model.MIN_DIRECTION; i <= Model.MAX_DIRECTION; i++)
		{
			if(look(i) == Model.FOX)
			{
				canSeeFoxNow = haveSeenFox = true;
				countFox++;// number of times fox seen increases by one if rabbit has seen  fox 
				directionToFox = i;
				distanceToFox = distance(i);//the distance between fox and rabbit has the value of i

			}
		}

	
// rabbit can see the fox and if he sees the fox more than once
        if (canSeeFoxNow && (countFox >= 1)) 
        {
            if (distanceToFox < 2)  //if distance to fox is less than 2
            {
                initialPos = 3;
                maxTurn = 2; //can only turn two angles to escape
            }
            else //if not he can escape other places
            {
                initialPos = 2;
                maxTurn = 4;
            }

            currentDirection = possibleDirection = Model.turn(directionToFox, initialPos);
            //turn away from fox for any posible directions
            
            openSurroundings = distance(possibleDirection);
            //space that is open for Rabbit to go to
            
            for (int i = 0; i < maxTurn; i++) 
            {
                possibleDirection = Model.turn(possibleDirection, 1);                    
                if (distance(possibleDirection) > openSurroundings) 
                {
                   currentDirection = possibleDirection;
                }
                
            }
            
            countFox--; 
            
            return currentDirection;
        }

                 return Model.STAY;// if it does not see the fox it stays at its current position
    }

}
