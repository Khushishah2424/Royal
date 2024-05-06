class test{
    a = 10;
    x;
    #y = 30;
    constructor(){
        console.log("Im Constructor");
        this.x = 20;
    }

    getdata = ()=>{
        console.log("getdata");
        console.log("Data is ", this.a);
        console.log("Data is ", this.x);
        console.log("Data is ", this.#y);
        // this.#mydata();
    }

    printdata(){
        console.log("Printdata");
        console.log("Data is ", this.a);
        console.log("Data is ", this.x);
        console.log("Data is ", this.#y);
    }

    //private method
    #mydata(){
        console.log("Im private Method");
    }

    callprivate(){
        this.#mydata();
    }
}
let t = new test();
console.log("a = ",t.a);
console.log("x = ",t.x);
t.getdata();
t.printdata();
t.callprivate();