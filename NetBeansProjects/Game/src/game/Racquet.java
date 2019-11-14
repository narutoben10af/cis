/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;
import java.awt.*;
import java.awt.event.*;
/**
 *
 * @author eian
 */
public class Racquet 
{
     int m_x = 250;
     int m_y = 450;
     int m_xSpeed = 0;
     int m_nWidth = 60;
     int m_nHeight = 10;
     private Game m_game;
        
        public Racquet(Game a_game)
        {
            m_game = a_game;
        }
        
//        public Balls(Game a_game, int a_x, int a_y, int a_nRadius, int a_xSpeed, int a_ySpeed)
//        {
//            m_game = a_game;
//            setBall(a_x, a_y, a_nRadius, a_xSpeed, a_ySpeed);
//        }
        
//        public void setBall(int a_x, int a_y, int a_nRadius, int a_xSpeed, int a_ySpeed)
//        {
//            m_x = a_x;
//            m_y = a_y;
//            m_nRadius = a_nRadius;
//            m_xSpeed = a_xSpeed;
//            m_ySpeed = a_ySpeed;
//        }
//        
        public void move()
        {
            if((m_x + m_xSpeed > 0) && (m_x + m_xSpeed < m_game.getWidth() - m_nWidth))
            {
                m_x = m_x + m_xSpeed;
            }
            
        }
        
        public void paint(Graphics2D g)
        {
            g.fillRect(m_x, m_y, m_nWidth, m_nHeight);
        }
        
        public void keyReleased(KeyEvent e)
        {
            m_xSpeed = 0;
        }
        
        public void keyPressed(KeyEvent e)
        {
            if (e.getKeyCode() == KeyEvent.VK_LEFT)
            {
                m_xSpeed = -2;                
            }
            if (e.getKeyCode() == KeyEvent.VK_RIGHT)
            {
                m_xSpeed = 2;                
            }
        }

    public Rectangle getBounds()
    {
        return new Rectangle(m_x, m_y, m_nWidth, m_nHeight);
    }        

    public int getTopY()
    {
        return m_y;
    }
}
