package com.Controller;

import java.io.IOException;
import java.io.Serial;

import javax.servlet.ServletException;
import javax.servlet.annotation.WebServlet;
import javax.servlet.http.HttpServlet;
import javax.servlet.http.HttpServletRequest;
import javax.servlet.http.HttpServletResponse;

@WebServlet("/AddExpenseServlet")
public class AddExpenseServlet extends HttpServlet {
	@Override
	protected void service(HttpServletRequest req, HttpServletResponse resp) throws ServletException, IOException {
		String vendor = req.getParameter("vendor");
		int amount = Integer.parseInt(req.getParameter("amount"));
		String category = req.getParameter("category");
		String expenseDate = req.getParameter("expenseDate");
		
		System.out.println(vendor);
		System.out.println(amount);
		System.out.println(category);
		System.out.println(expenseDate);
	}
}
