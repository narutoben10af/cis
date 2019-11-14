/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

import java.awt.Graphics;
import java.awt.Graphics2D;
import java.awt.Rectangle;
import java.awt.event.KeyEvent;

/**
 *
 * @author eian
 */
public class Kill extends Sprite
{

    public Kill(Game a_game) 
    {
        super(a_game);
    }
    
    public Kill(Game a_game, int a_x, int a_y, int a_nWidth, int a_nHeight, int a_xSpeed, int a_ySpeed) 
    {
        super(a_game, a_x, a_y, a_nWidth, a_nHeight, a_xSpeed, a_ySpeed);
    }
    
    public void setKill(int a_x, int a_y, int a_nWidth, int a_nHeight, int a_xSpeed, int a_ySpeed)
    {
        super.setSprite(a_x, a_y, a_nWidth, a_nHeight, a_xSpeed, a_ySpeed);
    }
    
    public void paint(Graphics2D g)
    {
       g.fillRect(m_x, m_y, m_nWidth, m_nHeight);        
    }
    
//    public void move()
//    {
//       g.fillRect(m_x, m_y, m_nWidth, m_nHeight);        
//    }

    

    public void keyReleased(KeyEvent e)
    {
//            m_xSpeed = 0;
    }
        
    public void keyPressed(KeyEvent e)
    {
       if (e.getKeyCode() == KeyEvent.VK_SPACE)
       {
           
       }
    }
   


}
