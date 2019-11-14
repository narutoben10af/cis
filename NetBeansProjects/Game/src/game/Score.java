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
public class Score
{     
    int m_x = 500;
    int m_y = 0;
    int m_nWidth = 150;
    int m_nHeight = 30;


        public void paint(Graphics2D g)
        {
            g.fillRect(m_x, m_y, m_nWidth, m_nHeight);
        }
        

    
}
