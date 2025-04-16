package com.Google.Controller;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/CalcInputServlet")
public class CalcInputServlet  extends HttpServlet{
	
	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
//		System.out.println("Additon");
//		
		String num1 = req.getParameter("num1");
		String num2 = req.getParameter("num2");
//		int add = Integer.parseInt(num1) + Integer.parseInt(num2);
		String operation = req.getParameter("operation");
		
		
		resp.setContentType("text/html");
		PrintWriter out = resp.getWriter();
//		out.print("<br>num1 = "+num1);
//		out.print("<br>num2 = "+num2);
//		out.print("<br>Add  = "+add);
		switch(operation)
		{
			case "add":
				int sum = Integer.parseInt(num1) + Integer.parseInt(num2);
				out.println("<br>num1: "+num1);
				out.println("<br>num2: "+num2);
				out.println("<br>sum: "+sum);
				break;
				
			case "multiply":
				int mul = Integer.parseInt(num1) * Integer.parseInt(num2);
				out.println("<br>num1: "+num1);
				out.println("<br>num2: "+num2);
				out.println("<br>mul: "+mul);
				break;
				
			case "subtract":
				int sub = Integer.parseInt(num1) - Integer.parseInt(num2);
				out.println("<br>num1: "+num1);
				out.println("<br>num2: "+num2);
				out.println("<br>sub: "+sub);
				break;
	
				
			default :
				break;
		}

		
	}
}
