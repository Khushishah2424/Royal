Java Installation:
    1.JDK - Java Development kit
            For running java program
    2.JRE - Java Runtime Enviorment 
            Help in executing program
    3.JVM - Java Virtual Machine

    1.Compilation:
    Source Code - .java (save) --> Compiler (IN JDK) --> Covert into byte code(JRE) - .class(save)
    2.Execution:
    byte code --> JVM --> Native Language(computer lan - 0 and 1)


Static -  Without creating an object we can execute our class
          static variable will create only one memory
          

Theory:
--> Any non-Static Method can be called only with class object if we are calling from static Method , but if we
    want to call non-static method from non-static no need of object
--> Any static method can be called with class name or Without class name inside

**Instance Variable**
    class level variable
    Instance Variable need not to intilized compulsory
    If Instance Variable is not assigned , then it will give default value
    Can not use non-static Instance Variable in Static Method
    both Static and non-static Instance Variable can be use in non-static Method
    n copy will generate for non-static Instance Variable
    Only one copy will generate for static Instance Variable
    

**Local Variable**
    Local Variable need to be intilized compulsory
    Can not create Static Variable inside the main Method due to Heap and Stack concepts


**Scanner**
    Scanner is itself a class
    we can use it by Making an object
    for taking an input we use System.in  as an Argument--> Inputstream --> console
    out  = printstream
    in = inputstream
    Scanner class can not be inherited




**OOPS**
1. Encapsulation:
    1.Counstrutor:-
        Same name As class name
        Types:
        1.default
        2.parameter
    To Intialize Instance Variable

    2.Data Hiding:
        1.Accsess 
            Private 
            Default
            Protected
            Public
        2.Non-Accsess Modifier
            Static
            Final:
                Final = constant                    
                If we assigned the value using final class then it can not be reassinged
                Final CLass can not be inherited
                All final class should be inherited
                Can not be OverRideded
                can be OverLoaded
                To create a constant variable
                To prevent method overriding
                To prevent inheritance

2. Inheritance:
    A child class Can Accsess the Property of Parent class
    We can connect class with Extends Keyword.

**Construtor With Inheritance**
1.
        parent has Default Construtor
        Child has Default Construtor

    Then First parent class then child class Property will execute

2.
        parent has parameterized Construtor
        child has parameterized Construtor
    
    Then if We want Accsess the the Property of parent Then in child class have to use super(pass parameter)keyword.

3.       
        parent has parameterized Construtor
        parent has Default Construtor

        Child has parameterized Construtor
        Child has Default Construtor 

    then super keypword is not compulsory to execute parent Protected.


3.Polymorphism
    Many Forms of Functions
    Types:
    1.Compile time Poly : (Early Binding,Static Binding)
                1.Method OverLoading:
                    We will have same name of Method in same class or parent class or child class but with differnt parameter called OverLoading Method
    2.Run Time Ploy : (Lazy Binding,Dynamic Binding)
                1.Method OverRiding
                    Child class have same Mehtod of parent class called OverRiding
                    It should match signature;
                    1.Accsess Modifier
                            Accsess Modifier Can be change 
                            private Modifier can not be OverRide
                            if parent class have default,then child can make default,Protected,Public method
                
                    2.Return Type
                    3.Method name
                    4.parameter
                    Final Modifier can not be OverRide


    4.Abstarction
    It is use for Data-Hiding
    Abstract class must be declared with abstarct keyword
    it can have abstract and non-abstract method 
    Abstarct method must be OverRide
    In Abstarction class we can create non-Abstarction method
    Abstarction method can not be called by object,
    by child class object we can call non-Abstarction method that in Abstarct class
    in normal class we can nit 


    class - class =  Extends
    class - Interface = Implementation
    Interface - Interface = Extends

**Interface** 
        It is fully Abstarct class
        All methods are Public Abstarct
        All Instance Variable are Public final Static
        if we use Interface , it will allow to do multiple (Inheritance) joins in class.
    -->Types of Interface:
    1.Funtional Interface
    = Have only one Method
    2.Marker Interface
    = None Method 


    **If we wanted to create a body inside a Interface then we can use below Keyword:
    1.Default:
        With help of Default Keyword ,it will not be compulsory to override in class
        We can call it by Referene of parent and object of class
    2.Static:
        With this non-Accsess Modifier it will not be compulsory to override in class

**Polymorphic** (Concept)
    Referene of parent and Object of child class
    by Polymorphic concpet we can only call abstract methods(interface class)


**Arrays**

VarArgument:-
In simple Array,if we create function and in it if we take three argument,then at the time of calling,we have to
compulsory take three argument
but idf use VarArgument = int ...a 
then it will not compulsory to take only taken two or three Argument.


**Exception**


error    : syntax problem: solve 
exception: developer logica, system .... handle

                                            Throwable
                        Error                                   Exception

*Types of Exception:
    1.Run time      - Unchecked Excpetion
    2.Compile time  - Checked Exception


For Handling Exception, we have 2 Ways:-
1.Throws Keyword:
2.Try - Catch - (Finally(Transection management))
    We can Create N number of Catch After try
    After Try 1 catch is Complusory
     
Parent - Throwable
child - Exception

**Try-Resources:
     if there is java class or Any user-define fuction method which will throws an Exception then it will
     Cause Compile time Exception :
     Then we will use throws or try and catch method
     
**Custom Exception**            



