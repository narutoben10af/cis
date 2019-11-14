/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

import javax.swing.*;
import java.awt.*;

/**
 *
 * @author eian
 */
public class BallV2 extends Sprite
{
    public int m_nCount = 3;
    
    public BallV2(Game a_game, int a_x, int a_y, int a_nWidth, int a_xSpeed, int a_ySpeed) 
    {
        super(a_game, a_x, a_y, a_nWidth, a_nWidth, a_xSpeed, a_ySpeed);
    }
    
    public void move()
    {
            if(m_x + m_xSpeed < 0)
            {
                m_xSpeed = Math.abs(m_xSpeed);
            }
            
            if(m_x + m_xSpeed > m_game.getWidth() - m_nWidth)
            {
                m_xSpeed = -m_xSpeed;
            }
            
            if(m_y + m_ySpeed < 0)
            {
                m_ySpeed = Math.abs(m_ySpeed);
            }
            
            if(m_y + m_ySpeed > m_game.getHeight() - m_nWidth)
            {
//                m_ySpeed = -m_ySpeed;
                 m_nCount--;
//                 m_game.gameOver();
            }
            
            if(collision() == true)
            {
                m_ySpeed = -m_ySpeed;
                m_y = m_game.m_racquet.getY() - m_nWidth;
            }
            
            super.move();         
    }
            
     public void paint(Graphics2D g)
        {
            g.setColor(Color.red);
            g.fillOval(m_x, m_y, m_nWidth, m_nWidth);
        }
     
    private boolean collision()
    {
            Rectangle racquetRect = m_game.m_kill.getBounds();
            Rectangle ballRect = this.getBounds();
            
            boolean bCollision = ballRect.intersects(racquetRect);
            return bCollision;
    }

}
