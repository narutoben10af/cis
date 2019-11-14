/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */
package game;

import java.util.LinkedList;
import java.util.ListIterator;
import javax.swing.*;
import java.awt.*;
import java.util.Random;


/**
 *
 * @author eian
 */
public class TargetList
{
    private LinkedList<Target> m_listTarget = new LinkedList<>();
    private Game m_game;
    
    public TargetList(Game a_game)
    {
        m_game = a_game;
    }
    
    public void fillList(int a_nSize)
    {   
        for(int i = 0; i < a_nSize; i++)
        {
            Target target = new Target(m_game);
            m_listTarget.add(target);
        }
        
    }
    
    public void move()
    {
        ListIterator<Target> it = m_listTarget.listIterator();
            while(it.hasNext())
            {
                it.next().move();
            }
    }
    
    public void paint(Graphics2D g)
    {
        ListIterator<Target> it = m_listTarget.listIterator();
            while(it.hasNext())
            {
                it.next().paint(g);
            }
    }
    
    public void randomize()
    {
        ListIterator<Target> it = m_listTarget.listIterator();
        while(it.hasNext())
        {
            it.next().randomize();
        }
            
    }
        
    private void collision()
    {
            ListIterator<Target> it = m_listTarget.listIterator();
            Rectangle kill = m_game.m_kill.getBounds();
            Rectangle target = m_game.m_target.getBounds();
            
            boolean bCollision = m_game.m_target.intersects(kill);
            while(bCollision == true)
            {
                m_listTarget.remove();
            }

    }
    
    public void remove()
    {
            
    }
    
    public void stop()
    {
        
    }
}
