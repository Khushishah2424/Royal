package com.Google.Util;

import java.sql.Connection;

import java.sql.DriverManager;

public class DbConnection {
	public static Connection getConnection() {
		Connection con = null;
		
		String drivename = "com.mysql.cj.jdbc.Driver";
		String url = "jdbc:mysql://localhost:3306/exptracker";
		String username = "root";
		String password = "khushi24";
		
		try {
			Class.forName(drivename);
			
			con = DriverManager.getConnection(url,username,password);
			System.out.println("Db Connected");
		}
		catch(Exception e){
			e.printStackTrace();
		}
		return con;
		
	}
	
	public static void main(String[] args) {
		getConnection();
	}
}
