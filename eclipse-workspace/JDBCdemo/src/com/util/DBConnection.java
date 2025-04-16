package com.util;

import java.sql.Connection;
import java.sql.DriverManager;
import java.sql.SQLException;

public class DBConnection {
	private static String connectionURL = "jdbc:mysql://localhost:3306/demo_jdbc";
	private static String USerName = "root";
	private static String password = "khushi24";
	private static String driverclass = "com.mysql.cj.jdbc.Driver";
	
	public static Connection getConnection() {
		Connection conn =null;
		try {
			Class.forName(driverclass);
			
			try {
//				Connection conn = DriverManager.getConnection(connectionURL, USerName, password);
				conn  = DriverManager.getConnection(connectionURL, USerName, password);
				if (conn != null) {
					System.out.println("Connected to database..");
				} else {
					System.out.println("not connected to database..");
				}
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		} catch (ClassNotFoundException e) {
			// TODO Auto-generated catch block
			e.printStackTrace();
		}
		return conn;
		
	}
	public static void main(String[] args) {
		getConnection();
	}
}
 