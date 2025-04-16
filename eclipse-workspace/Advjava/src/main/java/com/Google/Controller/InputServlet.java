package com.Google.Controller;

import java.io.IOException;

import javax.servlet.RequestDispatcher;
import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/InputServlet")
public class InputServlet extends HttpServlet{
	@Override
	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		System.out.println("Input");
		String firstname = req.getParameter("firstname");
		String birthyear = req.getParameter("birthyear");
		boolean isError = false;
		String error = "";
		String regex = "[a-zA-z]+";
		String alphaInt = "[0-9,/]+";

		if(firstname == null || firstname.trim().length() == 0) {
			req.setAttribute("firstname", "please enter firstname");
			isError = true;
				
		}
		if(birthyear == null || birthyear.isBlank()) {
			req.setAttribute("firstNameError","Please Enter birthday");
			isError = true;
		}

		
		else {
			if(firstname.matches(regex) == false) {
				req.setAttribute("firstname", "please enter valid firstname");
				isError = true;
			}
			else if(birthyear.matches(alphaInt)==false) {
				req.setAttribute("firstNameError","Please Enter Valid birthday");
				isError = true;
			}

		}
			
		if(isError == true) {
			RequestDispatcher rd = req.getRequestDispatcher("InputName.jsp");
			rd.forward(req, resp);
		}
		else {
			RequestDispatcher rd = req.getRequestDispatcher("output.jsp");
			rd.forward(req, resp);
		}
	}
}
