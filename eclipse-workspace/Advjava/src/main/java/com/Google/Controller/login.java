package com.Google.Controller;

import java.io.IOException;
import java.io.PrintWriter;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/login")
public class login extends HttpServlet{
	protected void service(HttpServletRequest req, HttpServletResponse response) throws ServletException, IOException {
		System.out.println("login Servlet");
		String userName = req.getParameter("userName");
		String Email = req.getParameter("email");
		String password = req.getParameter("password");
		
		System.out.println("USername = "+userName);
		System.out.println("con-pass"+Email);
		System.out.println("PAss ="+password);
		
		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		
		boolean isError = false;
		String error = "";
		if(userName == null || userName.trim().length() == 0) {
			isError = true;
			error = "Please Enter USername<br>";
				
		}
		if(isError == true) {
			out.print(error);
			
			
			
		}
		else {
		
		out.println("<br>USername = "+userName);
		out.println("<br>Email = "+Email);
		out.println("<br>PAss = "+password);

		}
		
	}
	
}
