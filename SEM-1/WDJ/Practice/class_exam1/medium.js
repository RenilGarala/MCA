// String Methods:
// Use concat() to combine the strings "Hello" and "World" and print the result.

let str1 = "renil"
let str2 = "garala"

console.log(str1.concat(str2));
console.log("----------------------------");

// For-in Loop:
// Write a for-in loop to print the properties of an object person = {name: "Alice", age: 25, city: "New York"}.

let person = {name: "renil", age: 20, city: "Rajkot"};

for (var i in person){
    console.log(i); // print properties
    console.log(person[i]); // print values
}
console.log("----------------------------");

// Array Methods:
// Given the array let fruits = ["apple", "banana", "cherry"], use shift() to remove the first element and print the array.

let fruits = ["apple", "banana", "cherry"];
fruits.shift();
console.log(fruits);
console.log("----------------------------");

// Types of Operators:
// Write an expression to compare two numbers, a = 10 and b = 20, using the comparison operator and print the result.

let a = 10, b = 20;
if(a>b){
    console.log("a is greater then b");
} else {
    console.log("b is greater then a");
}
console.log("----------------------------");

// Arrow Function:
// Write an arrow function that takes two parameters x and y, and returns their sum.

let sum = (x,y)=>{
    return x+y;
}
console.log(sum(2,5));
console.log("----------------------------");

// Do-While Loop:
// Write a do-while loop that prints numbers from 1 to 3.

i = 1;
do {
    console.log(i);
    i++;
} while(i < 4);
console.log("----------------------------");