/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

import java.awt.*;
/**
 *
 * @author eian
 */
public class Balls 
{
        protected int m_x = 0;
        protected int m_y = 0;
        protected int m_nDiameter = 30;
        protected int m_xSpeed = 1;
        protected int m_ySpeed = 1;
        public int m_nCount = 3;
        public int m_nScore = 0;        
        private Game m_game;
        
        public Balls(Game a_game)
        {
            m_game = a_game;
        }
        
        public Balls(Game a_game, int a_x, int a_y, int a_nDiameter, int a_xSpeed, int a_ySpeed)
        {
            m_game = a_game;
            setBall(a_x, a_y, a_nDiameter, a_xSpeed, a_ySpeed);
        }
        
        public void setBall(int a_x, int a_y, int a_nDiameter, int a_xSpeed, int a_ySpeed)
        {
            m_x = a_x;
            m_y = a_y;
            m_nDiameter = a_nDiameter;
            m_xSpeed = a_xSpeed;
            m_ySpeed = a_ySpeed;
        }
        
        public void move()
        {
            if(m_x + m_xSpeed < 0)
            {
                m_xSpeed = Math.abs(m_xSpeed);
            }
            
            if(m_x + m_xSpeed > m_game.getWidth() - m_nDiameter)
            {
                m_xSpeed = -m_xSpeed;
            }
            
            if(m_y + m_ySpeed < 0)
            {
                m_ySpeed = Math.abs(m_ySpeed);
            }
            
            if(m_y + m_ySpeed > m_game.getHeight() - m_nDiameter)
            {
//                m_ySpeed = -m_ySpeed;
                 m_nCount--;
                 m_game.gameOver();
            }
            
            if(collision() == true)
            {
                m_ySpeed = -m_ySpeed;
                m_y = m_game.m_racquet.getY() - m_nDiameter;
                m_nScore++;  
                System.out.println(m_nScore);
            }
            
            m_x = m_x + m_xSpeed;
            m_y = m_y + m_ySpeed;
            
            
        }
        
        public void paint(Graphics2D g)
        {
            g.fillOval(m_x, m_y, m_nDiameter, m_nDiameter);
        }
        
        public Rectangle getBounds()
        {
        return new Rectangle(m_x, m_y, m_nDiameter, m_nDiameter);
        }        
    
        private boolean collision()
        {
            Rectangle racquetRect = m_game.m_racquet.getBounds();
            Rectangle ballRect = this.getBounds();
            
            boolean bCollision = ballRect.intersects(racquetRect);
            return bCollision;
        }
        
        public int score()
        {
            if(collision() == true)
            {
            }
        return m_nScore;
        }
        


}
