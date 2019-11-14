/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package drawinglesson;

/**
 *
 * @author eian
 */
public class Point 
{
    private int m_x;
    private int m_y;
    
    public Point()
    {
        setCoordinates(0, 0);
    }
    
    public Point(int a_x, int a_y)
    {
        m_x = a_x;
        m_y = a_y;
    }
    
    public int getX()
    {
        return m_x;     // we are inside class Point, therefore . is not needed (member variables are always accessible inside the class itself)
    }
    
    public int getY()
    {
        return m_y;
    }
    
    public void setX(int a_x)
    {
        m_x = a_x;
    }
    
    public void setY(int a_y)
    {
        m_y = a_y;
    }
    
    public void setCoordinates(int a_x, int a_y)
    {
        m_x = a_x;
        m_y = a_y;
    }
    
    public double computDistance(Point a_point)
    {
        // Computes the distance between the current point and a_point
        double fDistance = 0.0;
	double fDistanceSquare = Math.pow(a_point.m_x - m_x, 2) + Math.pow(a_point.m_y - m_y, 2);
	fDistance = Math.sqrt(fDistanceSquare);
	
	return fDistance;
    }
    
    public void print()
    {
        System.out.print("x = " + m_x);
        System.out.println(", y = " + m_y);
    }
}
