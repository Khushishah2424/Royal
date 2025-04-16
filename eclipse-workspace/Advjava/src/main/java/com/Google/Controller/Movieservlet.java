package com.Google.Controller;

import java.io.IOException;
import java.io.PrintWriter;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/Movieservlet")
public class Movieservlet extends HttpServlet {
	
	protected void service(HttpServletRequest req, HttpServletResponse response) throws ServletException, IOException {
		System.out.println("Enter the Movie Name : ");
		String Moviename = req.getParameter("Moviename");
		
		response.setContentType("text/html");
		PrintWriter out = response.getWriter();
		
		boolean isError = false;
		String error = "";
		if(Moviename == null || Moviename.trim().length() == 0) {
			isError = true;
			error = "Please Enter moviename<br>";
				
		}
		if(isError == true) {
			RequestDispatcher rd = req.getRequestDispatcher("Inputmovie.jsp");
			rd.forward(req, response);
		}
		else {
			char mn = Moviename.charAt(0);
			//omg
			if (Character.isLowerCase(mn)) {
				mn = Character.toUpperCase(mn);
				Moviename=mn+ Moviename.substring(1);
			}
			req.setAttribute("Moviename", Moviename);
			RequestDispatcher rd = req.getRequestDispatcher("nextmovie.jsp");
			rd.forward(req, response);
		}
	}
}

