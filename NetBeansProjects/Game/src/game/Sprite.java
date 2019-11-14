/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

import java.util.*;
import javax.swing.*;
import java.awt.*;
import java.awt.event.*;

/**
 *
 * @author eian
 */
public class Sprite 
{
    protected int m_x = 0;
    protected int m_y = 0;
    protected int m_xSpeed = 0;
    protected int m_ySpeed = 0;
    protected int m_nWidth = 60;
    protected int m_nHeight = 10;
//    protected Color m_color = BLACK;
    protected Game m_game;
    
    public Sprite(Game a_game)
    {
        m_game = a_game;
    }
    public Sprite(Game a_game, int a_x, int a_y, int a_nWidth, int a_nHeight, int a_xSpeed, int a_ySpeed)
    {
        m_game = a_game;
        setSprite(a_x, a_y, a_nWidth, a_nHeight, a_xSpeed, a_ySpeed);
    }
    
    public Sprite(Game a_game, int a_x, int a_y, int a_nWidth, int a_nHeight)
    {
        m_game = a_game;
        setSprite(a_x, a_y, a_nWidth, a_nHeight);
    }
    
    public void move()
    {
        m_x = m_x + m_xSpeed;
        m_y = m_y + m_ySpeed;
    }
    
    public void setSprite(int a_x, int a_y, int a_nWidth, int a_nHeight, int a_xSpeed, int a_ySpeed)
    {
            m_x = a_x;
            m_y = a_y;
            m_nWidth = a_nWidth;
            m_nHeight = a_nHeight;
            m_xSpeed = a_xSpeed;
            m_ySpeed = a_ySpeed;
    }
    
       public void setSprite(int a_x, int a_y, int a_nWidth, int a_nHeight)
    {
            m_x = a_x;
            m_y = a_y;
            m_nWidth = a_nWidth;
            m_nHeight = a_nHeight;
    }
    
    public int getX()
    {
        return m_x;
    }
    public int getY()
    {
        return m_y;
    }

    public int getWidth()
    {
        return m_nWidth;
    }

    public int getHeight()
    {
        return m_nHeight;
    }
    
    public int getXSpeed()
    {
        return m_xSpeed;
    }
    
    public int getYSpeed()
    {
        return m_ySpeed;
    }

    
    public void paint(Graphics2D g)
    {
       g.setColor(Color.BLACK);
       g.fillRect(m_x, m_y, m_nWidth, m_nHeight);        
    }
    
    public Rectangle getBounds()
    {
        return new Rectangle(m_x, m_y, m_nWidth, m_nHeight);
    }        
    
    public void keyReleased(KeyEvent e)
    {
    }
        
    public void keyPressed(KeyEvent e)
    {
        
    }
    
    
    protected int randomGenerator(int a_nMin, int a_nMax)
    {
        int nRan = 0;
        Random randomGenerator = new Random();
        
        nRan = randomGenerator.nextInt((a_nMax - a_nMin) + 1) + a_nMin;
        
        return nRan;
    }
    
    public void generateSpeed(int a_nMin, int a_nMax)
    {
        m_xSpeed = randomGenerator(a_nMin, a_nMax);
        m_ySpeed = randomGenerator(a_nMin, a_nMax);        
    }
    
    public void kill()
    {
        
    }
    
//    public void setColor(Graphics2D g, Color a_color)
//    {
//        m_color = a_color;
//        g.setColor(Color.m_color);
//    }


}
