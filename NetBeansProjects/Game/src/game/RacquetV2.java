/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

import javax.swing.*;
import java.awt.event.*;
import java.awt.*;

/**
 *
 * @author eian
 */
public class RacquetV2 extends Sprite
{
//    private int m_x = 250;
//    private int m_y = 450;
//    private int m_xSpeed = 0;
//    private int m_nWidth = 60;
//    private int m_nHeight = 10;

    public RacquetV2(Game a_game)
    {
        super(a_game);
    }
    public RacquetV2(Game a_game, int a_x, int a_y, int a_nWidth, int a_nHeight, int a_xSpeed) 
    {
        super(a_game, a_x, a_y, a_nWidth, a_nHeight, a_xSpeed, a_xSpeed);
    }
    
    public void setRacquet(int a_x, int a_y, int a_nWidth, int a_nHeight, int a_xSpeed)
    {
        super.setSprite(a_x, a_y, a_nWidth, a_nHeight, a_xSpeed, a_xSpeed);
    }
    
    public void move()
    {
        if((m_x + m_xSpeed > 0) && (m_x + m_xSpeed < m_game.getWidth() - m_nWidth))
        {
           m_x = m_x + m_xSpeed;
        }
            
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

}
