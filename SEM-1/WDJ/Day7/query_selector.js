// --------------------querySelector method

//query selector by tag name 
let b1 = document.querySelector("button");
console.log(b1);

//query selector by id
let b2 = document.querySelector("#btn_2");
console.log(b2);

//query selector by class name
let b3 = document.querySelector(".def_first");
console.log(b3);

//if you give same class name in multiple element then it will return first element same as in id and tag name

// --------------------get element method

//get element by id name 
let b4 = document.getElementById("nav");
console.log(b4);

//get element by class name 
let b5 = document.getElementsByClassName("sec_2");
console.log(b5);


//------------------------create element

let b6 = document.createElement("p");

//get body element to append created element 
let body = document.querySelector("body");
//append element to body
body.append(b6);
//write content in b6 element 
b6.innerText = "hello from p tag"
console.log(b6);

// ----------------------- style in created element 
let b7 = document.querySelector("button");
b7.style.backgroundColor='skyblue';
b7.style.padding='10px';
b7.style.borderRadius='10px';
b7.style.border='none';
b7.style.fontSize='18px';
b7.style.fontWeight='bold';
b7.style.margin='5px';

//js style have more priority then internal css and inline css and external css