package com.Google.Controller;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/NumberServlet")
public class NumberServlet extends HttpServlet{	
	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		System.out.println("Random");
		int num1 = Integer.parseInt(req.getParameter("num1"));
        int num2 = Integer.parseInt(req.getParameter("num2"));
        int num3 = Integer.parseInt(req.getParameter("num3"));
        
        int randomNumber = (int) (Math.random() * 10);
        System.out.println(randomNumber);
        
        String msg = "";
        if(num1 == randomNumber || num2 == randomNumber || num3 == randomNumber) {
        		msg = "Won the game";
        }else {
        	msg = "Loss ! Try Again ";
        }
        
        //set send 
        req.setAttribute("msg", msg);
        RequestDispatcher rd = req.getRequestDispatcher("Result.jsp");
    	rd.forward(req, resp);
        
         
	}
}
