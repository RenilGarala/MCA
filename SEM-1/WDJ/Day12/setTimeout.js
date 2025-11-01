function display(){
    console.log("display function called");
}

function show(){
    console.log("function show");
}

setTimeout(display, 4000);

function data(){
    console.log("good morning");
}

setTimeout(data, 4000);
function greet(){
    console.log("how are you");
}
greet();


console.log("one");
console.log("two");

setTimeout(()=>{
    console.log("hello guys");
    console.log("three");
    console.log("four");
}, 4000)
