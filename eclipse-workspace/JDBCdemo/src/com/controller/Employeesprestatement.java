package com.controller;

import java.sql.Connection;
import java.sql.CallableStatement; 
import java.sql.PreparedStatement;
import java.sql.ResultSet;
import java.sql.SQLException;
import java.util.Scanner;
import com.util.DBConnection;

public class Employeesprestatement {
	
	
	public void getAllemployees() {
		Connection conn = DBConnection.getConnection();		
		if(conn!=null) {
			String SelectSQL = "select * from employees where id=?";
			try {
				PreparedStatement pstmt = conn.prepareStatement(SelectSQL);
				pstmt.setInt(1, 2);
				ResultSet rs = pstmt.executeQuery();
				while(rs.next()) {
 					System.out.print(" \t\t\t"+rs.getInt("id"));
 					System.out.print(" \t\t\t"+rs.getString("name"));
 					System.out.print(" \t\t\t"+rs.getString("email"));
 					System.out.print(" \t\t\t"+rs.getInt("salary"));
 					System.out.println();
 					
 				}
				
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
	
	public void updatEmployee() {
		Connection conn = DBConnection.getConnection();		
		if(conn!= null) {
			String updatesql = "update employees set name=?,email=?,salary=? where id=?";
			try {
				PreparedStatement psmt  = conn.prepareStatement(updatesql);
				psmt.setString(1, "Mohan");
				psmt.setString(2, "Mohan@gmail.com");
				psmt.setInt(3, 25667);
				psmt.setInt(4, 1);
				int res = psmt.executeUpdate();
				if(res>0) {
					System.out.println("record updated..");
				}
				else {
					System.out.println("record not updated...");
				}
				
			} catch (SQLException e) {
				
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
			
		
	}

	
	public void addmulEmployees() {
		Connection conn = DBConnection.getConnection();
		String insertSQL = "insert into employees(name,email,salary)values(?,?,?)";
		try {
			PreparedStatement pstmt = conn.prepareStatement(insertSQL);
						pstmt.setString(1, "seeta");
			 			pstmt.setString(2, "Seeta@gmail.com");
			 			pstmt.setInt(3, 35888);
			 			
			 			pstmt.addBatch();
			 			
			 			pstmt.setString(1, "Getaaa");
			 			pstmt.setString(2, "Geeta@gmail.com");
			 			pstmt.setInt(3, 40000);
			 			
			 			pstmt.addBatch();
			 			
			 			pstmt.executeBatch();
			 			
		} catch (SQLException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
	}
	
	
	public void Addemployee() throws SQLException {
		Scanner sc = new Scanner(System.in);
		Connection conn = DBConnection.getConnection();		
		if(conn != null) {
			String insertSql = "insert into employees(name,email,salary)values(?,?,?)";
			try {
			PreparedStatement psmt = conn.prepareStatement(insertSql);
			System.out.println("Enter Your name :");
			String empname = sc.next();
			
			System.out.println("Enetr Your email :");
			String empemail = sc.next();
			
			System.out.println("Enter your Salary :");
			int salary = sc.nextInt();
			
			
			psmt.setString(1, empname);
			psmt.setString(2, empemail);
			psmt.setInt(3, salary);
			
			int res = psmt.executeUpdate();
			if(res >0) {
				System.out.println(res+"Recored inseted");
			}
			else {
				System.out.println("none");
			}
		}
			catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
		
	}

	
	
	public void callProcedure() {
		Connection conn = DBConnection.getConnection();		
		if(conn!=null) {
			try {
				CallableStatement stmt = conn.prepareCall("{CALL GetEmployeeById(?)}");
				stmt.setInt(1, 3);
				ResultSet rs = stmt.executeQuery();
				while(rs.next()) {
					System.out.print(" \t\t\t"+rs.getInt("id"));
 					System.out.print(" \t\t\t"+rs.getString("name"));
 					System.out.print(" \t\t\t"+rs.getString("email"));
 					System.out.print(" \t\t\t"+rs.getInt("salary"));
 					System.out.println();
 					
 				}
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		}
	}
	
	public void callProcedure2() {
		Connection conn = DBConnection.getConnection();		
		if(conn!=null) {
			try {
				CallableStatement stmt = conn.prepareCall("{CALL GetEmployeeBysal(?,?)}");
				stmt.setInt(1, 23000);
				stmt.setInt(2
						
						, 30000);
				ResultSet rs = stmt.executeQuery();
				while(rs.next()) {
					System.out.print(" \t\t\t"+rs.getInt("id"));
 					System.out.print(" \t\t\t"+rs.getString("name"));
 					System.out.print(" \t\t\t"+rs.getString("email"));
 					System.out.print(" \t\t\t"+rs.getInt("salary"));
 					System.out.println();
 					
 				}
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		}
	}
	
	
	public static void main(String[] args) throws SQLException {
		Employeesprestatement employeeController = new Employeesprestatement();
//		employeeController.Addemployee();
//		employeeController.updatEmployee();
//		 employeeController.addmulEmployees();
//		employeeController.getAllemployees();
//		employeeController.callProcedure();
		employeeController.callProcedure2();
	}
}
