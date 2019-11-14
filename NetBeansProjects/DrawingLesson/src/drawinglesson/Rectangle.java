/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package drawinglesson;

import java.awt.Graphics;
import java.awt.Color;


/**
 *
 * @author eian
 */
public class Rectangle extends Quadrilateral
{
    
    
    
    public Rectangle(int x,int y,int w,int h)
    {
        setPoints(x, y, x + w, y, x + w, y + h, x, y + h);
    }
   

    public void drawRectangle(Graphics g)
    {
        drawQuadrilateral(g);
    }
    
}
