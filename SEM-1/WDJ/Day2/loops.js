// Loop in javascript 

//Entry control loop
//for loop
console.log("---------------------for loop");
for(var i=1; i<=10; i++){
    console.log(i);
}

console.log("---------------------for loop even number");
for(var i=2; i<=10; i=i+2){
    console.log(i);
}

//while loop
console.log("---------------------while loop");
var i=0;
while(i<5){
    console.log(i);
    i++;
}

//for in loop
console.log("----------------------for in loop");
var arr=[1,2,3,4,5,6];
for(var i in arr){
    console.log(arr[i]);//i is index
}

console.log("--------------------for in loop");
var arr={name: "renil", id: "22030401061",city: "rajkot"};
for(var i in arr){
    console.log(i,":",arr[i]); //i is index
}

console.log("--------------------for of loop");
var arr5=[10,2,3,4,5,6];
for(var i of arr5){
    console.log(i); // i is value
    console.log(arr5.indexOf(i))// to print index
}

//for each loop
console.log("-------------------for each loop");
var arr=["rajkot", "ahmedabad", "mumbai"];

arr.forEach((i)=>{
    console.log(i);
})

//Exit control loop

//do while loop
console.log("----------------------do while loop");
var i=0;
do{
    console.log(i);
    i++;
}while(i<5);