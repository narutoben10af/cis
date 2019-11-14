/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package drawinglesson;

import java.awt.Graphics;
import java.awt.Color;
import javax.swing.JFrame;

/**
 *
 * @author eian
 */
public class DrawingLesson extends JFrame
{

    public DrawingLesson()
    {
        setTitle("Inheritance");
        setSize(800, 800);
        setVisible(true);
        setDefaultCloseOperation(EXIT_ON_CLOSE);
    }
    
    public void paint(Graphics g)
    {
        g.drawLine(100, 200, 400,100);
        g.setColor(Color.BLUE);
        g.fillRect(300, 300, 200, 100);
        g.drawRect(300, 300, 200, 100);
        g.setColor(Color.GREEN);
        Quadrilateral quad = new Quadrilateral();
        quad.setPoints(100, 100, 150, 50, 400, 300, 200, 400);
        quad.setColor(Color.LIGHT_GRAY); 
        quad.drawQuadrilateral(g);
        quad.setColor(Color.red);
        quad.moveTO(300, 200);
        quad.drawQuadrilateral(g);
        
        Rectangle r1 = new Rectangle(300, 500, 200, 400);
//        r1.setColor(Color.red);
        r1.drawRectangle(g);
        
       Rectangle r2 = new Rectangle(100, 200, 100, 150);
        r2.setColor(Color.red);
        r2.drawRectangle(g);
        r2.drawRectangle(g);

        
        Quadrilateral quad2 = new Quadrilateral();
        quad2.setPoints(100, 300, 120, 150, 30, 300, 140, 300);
        quad2.setColor(Color.yellow);
        quad2.drawQuadrilateral(g);

    }
    
    public static void main(String[] args) 
    {
        DrawingLesson lesson = new DrawingLesson();
    }
    
}
