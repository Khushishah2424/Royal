package com.date;

import java.util.Date;
import java.util.Calendar;
import java.text.DateFormat;
import java.text.SimpleDateFormat;

public class GetDay {
	public static void main(String[] args) {
		Calendar c = Calendar.getInstance();
        System.out.println(c.getTime());

        c.add(Calendar.DATE, 5);
        System.out.println(c.getTime());


        DateFormat df = new SimpleDateFormat("E");
        String strDate = df.format(c.getTime());
        System.out.println(strDate);
		
		
	}
}	
