package com.controller;

import java.sql.Connection;
import java.sql.SQLException;
import java.sql.Statement;

import com.util.DBConnection;

public class StudentController {
	
	
	public void DeleteStudents(int id) {
		Connection conn = DBConnection.getConnection();
		if(conn!= null) {
			try {
				Statement stmt = conn.createStatement();
				String delelesql = "delete from students where id= "+id+"";
				int res = stmt.executeUpdate(delelesql);
				if(res >0) {
					System.out.println(res + " raws deleted..");
				}
				else {
					System.out.println(res + " raws are not deleted..");
				}

			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
		}
	}
	
	
	public void AddStudent() {
		Connection conn = DBConnection.getConnection();
		if(conn != null) {
			try {
				Statement stmt = conn.createStatement();
				String name = "Ajay";
				String insertSql = "insert into students(name,age,marks)values('"+name+"',23,40)";
				int res = stmt.executeUpdate(insertSql);
				if(res >0) {
					System.out.println(res + " raws inserted..");
				}
				else {
					System.out.println(res + " raws are not inserted..");
				}
			} catch (SQLException e) {
				// TODO Auto-generated catch block
				e.printStackTrace();
			}
			
		}
	}
	public static void main(String[] args) {
		StudentController studentController = new StudentController();
//		studentController.AddStudent();
//		studentController.DeleteStudents(1);
	}
}
