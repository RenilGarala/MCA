//print sqaure of each array element 

let arr= [6,7,8,9];

let squareArray = (arr)=>{
    for(var i in arr){
        arr[i] = arr[i]*arr[i];
    }
    console.log(arr);
}

squareArray(arr);

// take two vairable and print its addition using arrow function

// var a = parseInt(prompt("Enter a Number"));
// var b = parseInt(prompt("Enter b number"));

// let sum = (a,b)=>{
//     return a+b;
// }

// console.log("Sum of given two number is ",sum(a,b));


// print all even and diviable by 7 number s between 1 to 100 usng arrow function
let even = ()=>{
    for (var i=1; i<=100; i++){
        if(i%2==0 && i%7==0){
            console.log(i);
        }
    }
}

even();
