// -------------------------------------------------------------------------------------------------------------------------
//variable and datatypes
// var a = 1; can chnage, can redeclare varibale
// let b = "renil"; can chnage, cannot redeclare varibale
// const c = "renil's wife"; cannot chnage and redeclare it

// console.log(typeof(a));
// console.log(typeof(b));

// -------------------------------------------------------------------------------------------------------------------------
//popup box (alreat, conform, prompt)

// alert("hello renil");
// prompt("kya ker raha he Manushya Jiv? "); // return value which entered by user in string
// confirm("Kya ap radha name ka jap karte ho ?") // return true or false

// -------------------------------------------------------------------------------------------------------------------------
// control statement - if else, switch case, for loop, while loop, do while loop

// var a=10;
// if(a>18){
//     console.log("yes");
// } else{
//     console.log("no");
// }

// switch(a){
//     case 10:
//         console.log("its 10");
//         break;
//     case 20:
//         console.log("its 20");
//         break;
//     default:
//         console.log("idk");
//         break;
// }

// for(var a=1; a<=10; a++){
//     console.log(a);
// }

// var a=1; 
// while(a<=10){
//     console.log(a);
//     a++;
// }

// var a=1; 
// do{
//     console.log(a);
//     a++;
// }while(a<=10);

// -------------------------------------------------------------------------------------------------------------------------
// operators

// Strings and String Operations/ methods


// var arr=[1,2,3,4,5,6];
// for(var i of arr){
//     console.log(i);
// }

//DOM
//query selector, getElementByld, getElementByClassName, getAttribute, setAttribute, node.style, createElement, append, prepend

// const element1 = document.querySelectorAll("div");
// console.log(element1);


// Array.prototype.myMap = function(callback){
//     var newArray = [];
//     for(var i=0; i<this.length; i++){
//         newArray.push(callback(this[i]));
//     }
//     return newArray;
// }

// var arr=[1,2,3,4,5,6];
// console.log(arr.myMap((i)=>{
//     return i*2;
// }));

console.log(Array.prototype.filter((i)=>{
    return i%2==0;
}));

// const d = window;
// console.log(d);
