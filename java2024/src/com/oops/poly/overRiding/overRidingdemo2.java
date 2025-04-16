package com.oops.poly.overRiding;


class Shape{
	void draw() {
		System.out.println("parent class");
	}
}

class circle extends Shape {
	void draw() {
		System.out.println("Shape Circle");
	}
}

public class overRidingdemo2 {
	public static void main(String[] args) {
		circle c = new circle();
		c.draw();
//		Shape s = new Shape();
//		s.draw();
	}
}
