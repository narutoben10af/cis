/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

import java.awt.*;
import javax.swing.*;

/**
 *
 * @author eian
 */
public class Target extends Sprite
{
    public int m_nCount = 3;
    
    public Target(Game a_game, int a_x, int a_y, int a_nWidth) 
    {
        super(a_game, a_x, a_y, a_nWidth, a_nWidth);
    }

    public Target(Game a_game) 
    {
        super(a_game);
    }

    
    public void randomize()
    {
        m_x = randomGenerator(0, m_game.getWidth());
        m_y = randomGenerator(0, m_game.getHeight());
        m_xSpeed = randomGenerator(-3, 3);
        m_ySpeed = randomGenerator(-3, 3);
        while (m_xSpeed == 0)
        {
            m_xSpeed = randomGenerator(-3, 3);
        }
        while (m_ySpeed == 0)
        {
            m_ySpeed = randomGenerator(-3, 3);            
        }
        m_nWidth = 30;
        m_nHeight = 30;
    }
    
    public void move()
    {
            if(m_x + m_xSpeed < 0)
            {
//                m_xSpeed = Math.abs(m_xSpeed);
                m_x = m_game.getWidth() - 30;

            }
            
            if(m_x + m_xSpeed > m_game.getWidth() - m_nWidth)
            {
//                m_xSpeed = -m_xSpeed;
                m_x = 30;
            }
            
            if(m_y + m_ySpeed < 0)
            {
//                m_ySpeed = Math.abs(m_ySpeed);
                m_y = m_game.getHeight() - 30;
            }
            
            if(m_y + m_ySpeed > m_game.getHeight() - m_nHeight)
            {
//                m_ySpeed = -m_ySpeed;
                 m_nCount--;
                 m_y = 30;
//                 m_game.gameOver();
            }
            
            if(collision() == true)
            {
//                m_ySpeed = -m_ySpeed;
//                m_y = m_game.m_racquet.getY() - m_nWidth;
//                m_nHeight = 0;
//                m_nWidth = 0;
                  
            }
            
            super.move();         
    }
            
     public void paint(Graphics2D g)
        {
            g.setColor(Color.red);
            g.fillRect(m_x, m_y, m_nWidth, m_nWidth);
        }
     
    private boolean collision()
    {
            Rectangle kill = m_game.m_kill.getBounds();
            Rectangle ballRect = this.getBounds();
            
            boolean bCollision = ballRect.intersects(kill);
            return bCollision;
    }

    boolean intersects(Rectangle kill) 
    {
        throw new UnsupportedOperationException("Not supported yet."); //To change body of generated methods, choose Tools | Templates.
    }
    
}
