package com.oops.poly.overloading;

class Olparent{
	public void shape(int b,float t) {
		System.out.println("trialngle method called....");
	}
}

public class Overloadingdemo1 extends Olparent{
	public void shape() {
		System.out.println("shape method called....");
	}
	public int shape(float r) {
		
		System.out.println("Shape of circele..." + (3.14) * (r * r));
		return 0;
	}
	public void shape(int h,int w) {
		System.out.println("Shape of Rec"+h*w);
	}
	public void shape(int h) {
		System.out.println("Shape of Square"+h*h);
	}
	
	public static void main(String arg[]) {
		Overloadingdemo1  ol = new Overloadingdemo1();
		ol.shape(10.0f);
	}
}
