package game;

import java.awt.*;
import javax.swing.*;
import java.awt.event.*;

/*
 * To change this license header, choose License Headers in Project Properties.
 * To change this template file, choose Tools | Templates
 * and open the template in the editor.
 */

/**
 *
 * @author eian
 */
public class Game extends JPanel
{   
    Balls m_ball = new Balls(this);
    Balls m_ball2 = new Balls(this, 5, 5, 30, 2, 2);
    Balls m_ball3 = new Balls(this, 3, 2, 30, 3, 2);
    BallV2 m_ball4 = new BallV2(this, 3, 2, 30, 3, 3);
    BallV2 m_ball5 = new BallV2(this, 3, 2, 30, 2, 4);
    RacquetV2 m_racquet = new RacquetV2(this, 250, 450, 60, 10, 0);
    Target m_target = new Target(this);
    TargetList m_listTarget = new TargetList(this);
//    Target m_target2 = new Target(this);
//    Target m_target3 = new Target(this);
//    Target m_target4 = new Target(this);
    Kill m_kill = new Kill(this, m_racquet.m_x, m_racquet.m_y-30, 60, 30, 0, 10);

    public Game()
    {
        KeyListener listener = new KeyListener()
        {
            public void keyTyped(KeyEvent e)
            {
                
            }
            public void keyPressed(KeyEvent e)
            {
                m_racquet.keyPressed(e);
                m_kill.keyPressed(e);
//                System.out.println("keyPressed = " + KeyEvent.getKeyText(e.getKeyCode()));
            }
            
            public void keyReleased(KeyEvent e)
            {
                m_racquet.keyReleased(e);
                m_kill.keyReleased(e);
//                System.out.println("keyReleased = " + KeyEvent.getKeyText(e.getKeyCode()));
            }
           
        };
       
        addKeyListener(listener);
        setFocusable(true);
        m_target.randomize();
        m_listTarget.fillList(3);
//        m_target2.randomize();
//        m_target3.randomize();
//        m_target4.randomize();
        m_listTarget.randomize();
       
    }
    

    private void animate()
    {
//        m_ball.move();
//        m_ball2.move();
//        m_ball3.move();
        m_ball4.move();
        m_ball5.move();
        m_racquet.move();
        m_target.move();
//        m_target2.move();
//        m_target3.move();
//        m_target4.move();
        m_listTarget.move();
//        m_kill.move();

    }
           
    public void paint(Graphics g)
    {
//        Graphics2D g2d = (Graphics2D) g;
//        g2d.setColor(Color.RED);
//        g2d.fillOval(0, 0, 30, 30);
//        g2d.drawOval(0, 50, 30, 30);
//        g2d.fillRect(50, 0, 30, 30);
//        g2d.drawRect(50, 50, 30, 30);
        super.paint(g);
        Graphics2D g2d = (Graphics2D) g;
        g2d.setRenderingHint(RenderingHints.KEY_ANTIALIASING, RenderingHints.VALUE_ANTIALIAS_ON);
//        m_ball.paint(g2d);
//        m_ball2.paint(g2d);
//        m_ball3.paint(g2d);
        m_ball4.paint(g2d);
        m_ball5.paint(g2d);
        m_racquet.paint(g2d);
//        m_target2.paint(g2d);
//        m_target3.paint(g2d);
//        m_target4.paint(g2d);
        m_target.paint(g2d);
        m_listTarget.paint(g2d);
        m_kill.paint(g2d);

    }

    public void gameOver()
    {
        if (m_ball5.m_nCount == 0)
        {
            JOptionPane.showMessageDialog(this, "Game Over", "You Died ", JOptionPane.YES_NO_OPTION);
            System.exit(ABORT);
        }
    }
    
    public static void main(String[] args) throws InterruptedException
    {
        JFrame frame = new JFrame("Game");
        Game game = new Game();
        frame.add(game);
        frame.setSize(500, 700);
        frame.setVisible(true);
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        
        while(true)
        {
            game.animate();
            game.repaint();
            Thread.sleep(10);
        }
        
    }
}