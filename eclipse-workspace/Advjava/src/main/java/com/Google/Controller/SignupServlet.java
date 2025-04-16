package com.Google.Controller;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/SignupServlet")
public class SignupServlet extends HttpServlet{

	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		System.out.println("Singup Servlet");
		String userName = req.getParameter("username");
		String password = req.getParameter("password");
		String conpass = req.getParameter("confirm-password");
		
		System.out.println("USername = "+userName);
		System.out.println("PAss ="+password);
		System.out.println("con-pass"+conpass);
		
	
		
		resp.setContentType("text/html");
		PrintWriter out = resp.getWriter();
		
		
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
		out.println("<br>PAss = "+password);
		out.println("<br>con-pass = "+conpass);
		}
		
	}
}
