package com.rev;

interface Googleai{
	
	public String GoogleGPT();
}

interface Openai{
	
	public String OPenGPT();
}
public class interfaceai implements Googleai,Openai{
	

	public static void main(String[] args) {
		Googleai g = new interfaceai();
		g.GoogleGPT();
		Openai o = new interfaceai();
		o.OPenGPT();
}

	@Override
	public String OPenGPT() {
		// TODO Auto-generated method stub
		return null;
	}

	@Override
	public String GoogleGPT() {
		// TODO Auto-generated method stub
		return null;
	}
	
	
}	
