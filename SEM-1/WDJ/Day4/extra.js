// -------------------------------


function display(){
    console.log("Hello World 1");
}

function display(a,b){
    console.log("Hello World 2");
}

function display(a,c,b){
    console.log("Hello World 3");
}

display(); 
//display hello world 3

display(3,4); 
//display hello world 3

display(1,2,3);
//display hello world 3



// -------------------------------


// function in js 

//function without parameter 
function display(){
    console.log("Hello World 1");
}
display();

// -------------------------------


//function without parameter with argument
function display(){
    console.log("Hello World 2");
}
display(1,2,3); // no error

// -------------------------------

//function with parameter without argument
function display(a,b){
    console.log("Hello World 3");
}
display(); // no error

// -------------------------------

//sum two number
function sum(a,b){
    console.log(a+b);
}
sum(2,4);

// -------------------------------

//multiple with string
function sum(a,b){
    console.log(a*b);
}
sum("hello",4);
//display NaN

//-----------------------------------------

// Exmple of execution context

function display(){
    console.log("Hello World 1");
}
display();
//display hello world 3 
// do you know why ?

function display(){
    console.log("Hello World 2");
}

function display(a,b){
    console.log("Hello World 3");
}
display(); 
//display hello world 3 

//-----------------------------------------
