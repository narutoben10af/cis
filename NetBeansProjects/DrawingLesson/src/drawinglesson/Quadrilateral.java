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
public class Quadrilateral 
{
    private int m_x1;
    private int m_y1;
    private int m_x2;
    private int m_x3;
    private int m_x4;
    private int m_y2;
    private int m_y3;
    private int m_y4;
    protected Point [] m_arrPoints = new Point[4];
    protected Color m_color = Color.BLACK;
    
    public Quadrilateral()
    {
        for(int i = 0; i < m_arrPoints.length; i++)
        {
            m_arrPoints[i] = new Point();
            m_arrPoints[i].setCoordinates(0, 0);
        }
    }
    
    public void setPoints(int x1, int y1, int x2, int y2,
            int x3, int y3, int x4, int y4)
    {
        m_x1 = x1;
        m_x2 = x2;
        m_x3 = x3;
        m_x4 = x4;
        m_y1 = y1;
        m_y1 = y2;
        m_y3 = y3;
        m_y4 = y4;       

        m_arrPoints[0].setCoordinates(x1, y1);
        m_arrPoints[1].setCoordinates(x2, y2);
        m_arrPoints[2].setCoordinates(x3, y3);
        m_arrPoints[3].setCoordinates(x4, y4);
    }
    
    public void drawQuadrilateral(Graphics g)
    {
        g.setColor(m_color);
        for(int i = 0; i < 4; i++)
        {
            int j = (i + 1) % 4;
            g.drawLine(m_arrPoints[i].getX(), m_arrPoints[i].getY(), m_arrPoints[j].getX(), m_arrPoints[j].getY());
        }
    }
    
    public void setColor(Color a_color)
    {
        m_color = a_color;
    }
    
    public void moveTO(int x, int y)
    {
        m_arrPoints[0].setCoordinates(m_x1 + x, m_y1 + y);
        m_arrPoints[1].setCoordinates(m_x2 + x, m_y2 + y);
        m_arrPoints[2].setCoordinates(m_x3 + x, m_y3 + y);
        m_arrPoints[3].setCoordinates(m_x4 + x, m_y4 + y);
    }
    
}
