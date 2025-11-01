// creaet a btton using html
// print its id, and classname using js

let b1 = document.querySelector("#submit");
console.log(b1.getAttribute("id"));
console.log(b1.classList.value);

// cretae a button using js and put it in a body tag. give background color green to button and to body 

let b2 = document.createElement("button");
let body = document.querySelector("body");

b2.innerText="back btn";

body.append(b2);

b2.style.backgroundColor = 'green';
body.style.backgroundColor = 'black';