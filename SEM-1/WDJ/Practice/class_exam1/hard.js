// Hard Questions
// Array Methods:
// Given the array let arr = [2, 4, 6, 8, 10], use the map() method to create a new array with each number multiplied by 2.

let arr = [2, 4, 6, 8, 10];

let new_arr = arr.map((i)=>{
    return i*2;
})
console.log(new_arr);
// arithmatic operation on value, (mathematic oparation)


// If-Else Statement with Multiple Conditions:
// Write an if-else statement that checks if a variable age is between 18 and 65. Print "Adult" if true, otherwise print "Not Adult".

let age = 20;
if(age >= 18 || age <= 65){
    console.log("Adult");
} else {
    console.log("Not Adult");
}

// For-of Loop:
// Write a for-of loop that prints each character of the string "JavaScript" one by one.

let subject = 'JavaScript';

for(let i of subject){
    console.log(i);
}

// Array Methods:
// Given the array let arr = [1, 2, 3, 4], use the reduce() method to find the sum of all elements.

let arr1 = [1, 2, 3, 10]
let sum = arr1.reduce((acc, i)=>{
    return acc+i;
})
console.log(sum);


// Filter Function:
// Write a function that uses the filter() method to return an array of numbers that are greater than 10 from the array [5, 12, 8, 130, 44].

let array2 = [5, 12, 8, 130, 44];
let filtered_array = array2.filter((i)=>{
    return i>10;
})
console.log(filtered_array);
// condition based randering, filter data from existing data 

// Types of Operators (Complex Expression):
// Write an expression that checks if a number x is both even and greater than 10 using logical operators. Print true or false.

let x = 12;
if(x%2 == 0 && x>10){
    console.log("true");
} else {
    console.log("false");
}



//from the existing data you want only single value output, then you need to use reduce method

var chikchik = [10,20,30,40,50,60,70,80,90,100];

let final_total = chikchik.reduce((acc, value)=>{
    return acc+value;
})

console.log(final_total);