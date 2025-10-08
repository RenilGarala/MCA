// Variables & Data Types:
// Declare a variable named age and assign it the value 25. What data type is the variable?

let user = "renil";
let age = 25;
console.log(typeof(age));
console.log(typeof(user));
console.log("----------------------------");

// String Methods:
// Use the trim() method to remove any leading or trailing spaces from the string " Hello World ".

let string_trip = "  Hello World  ";
console.log(string_trip.trim());
console.log("----------------------------");

// If-Else Statement:
// Write an if-else statement to check if a variable num is greater than 10 and print "Greater" if true, otherwise print "Smaller or Equal".

let number = 20;
if(number > 10){
    console.log("Greater");
} else{
    console.log("Smaller");
}
console.log("----------------------------");

// For Loop:
// Write a for loop that prints numbers from 1 to 5.

for(var i = 1 ; i <= 5 ; i++){
    console.log(i);
}
console.log("----------------------------");

// Array Methods:
// Create an array arr = [1, 2, 3, 4]. Use the push() method to add 5 to the array and print the updated array.

let arr = [1, 2, 3, 4]
arr.push(5);
console.log(arr);
console.log("----------------------------");

// Function:
// Write a function multiply that takes two parameters and returns their product.

function multiple(a, b){
    return a*b;
}

console.log(multiple(3,4));
console.log("----------------------------");