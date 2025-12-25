// function sum(){
//     let v1 = parseInt(document.getElementById("value1").value);
//     let v2 = parseInt(document.getElementById("value2").value);

//     let sum = v1+v2;
//     let ans = document.getElementById("ans");
//     ans.innerText = sum + " <- Sum ";
// }
// function mul(){
//     let v1=document.getElementById("value1").value;
//     let v2=document.getElementById("value2").value;
//     console.log(typeof(v1));
//     console.log(v1*v2);
// }

// function sub(){
//     let v1=parseInt(document.getElementById("value1").value);
//     let v2=parseInt(document.getElementById("value2").value);
//     console.log(v1-v2);
// }

// function div()
// {
//     let v1=parseInt(document.getElementById("value1").value);
//     let v2=parseInt(document.getElementById("value2").value);
//     console.log(v1/v2);
// }

// --------------------------------------------

// const student = {
//     name: "Renil",
//     age: 20,
//     course: {
//         cid: 1,
//         c_name: "mca"
//     }
// };

// --------------------------------------------------

// class studentPapa{
//     constructor(sanskar){
//         this.sanskar = sanskar;
//     }
// }
// class student extends studentPapa{
//     constructor(name, age){
//         super("Good");
//         this.name = name;
//         this.age = age;
//     }
// }

// const s1 = new student("renil", 20);
// console.log(s1.name);
// console.log(s1.age);
// console.log(s1.sanskar);

// -----------------------create element DOM

// const btn = document.createElement("button");
// btn.innerText = "click";
// btn.id= "clk";
// btn.onclick = changecolor();

// const navbar = document.getElementById("navbar");
// navbar.appendChild(btn);

// function changecolor(){
//     const body = document.querySelector("body");
//     body.style.background = "red";
// }

// Q1 — Create a Div with Styling
// Create a <div> using JS.
// Add text → "Welcome User"
// Set background color to "lightblue"
// Set padding "20px"
// Append to test

// let div=document.createElement("div");

// div.innerText="mandip sarvaiya";
// div.style.backgroundColor="lightblue";
// div.style.padding="20px";

// let test=document.getElementById("test")
// test.appendChild(div);

// ------------------------------------Event Listner

// const button = document.getElementById("clk");
// button.addEventListener("click",()=>{
//     alert("clicked");
// });

// let a = true
// console.log(typeof(a));

// let number = [10,20,30,40];

// const d = new Date();
// console.log(d.getDate());
// console.log(d.getDay());

// console.log(d.getHours(), ":", d.getMinutes(), ":", d.getSeconds());

// setTimeout(()=>{
//     console.log("4 second completed");
// },4000);

// const input = document.getElementById("box");

// input.onkeydown = () => console.log("Key Pressed");
// input.onkeyup = () => console.log("Key Released");
// input.onkeypress = () => console.log("Key Typed");

// let year=prompt("enter year");
// console.log(year);
// if((year%4==0 && year%100!=0) || year % 400 === 0)
// {
//     console.log("it is leap year")
// }
// else{
//     console.log("its not leap year");
// }


// function reverse() {
//   let str = "renil";
//   console.log(str.split("").reverse().join(""));
// }

// reverse();



////larget number

// let n = [1,2,83,4,32,43,32,35,32];

// let max = n[0];

// for(i = 1; i<n.length; i++){
//     if(n[i]>max){
//         max = n[i];
//     }
// }
// console.log(max);



// uname = "renilgarala";
// let count = 0;
// let vowel = "aeiouAEIOU";

// for(i of uname){
//     if(vowel.includes(i)){
//         count++;
//     }
// }
// console.log(count);



// const nums = [1, 2, 3, 4,5,32,36,55];

// let doubled = nums.map((n)=>{
//     return n*2;
// });
// console.log(doubled);

// let flitered = nums.reduce((acc, n)=>{
//     return ;
// });
// console.log(flitered);


let ch = 'a';

console.log(ch.charCodeAt());

