//Array methods

//you can refer my blog
// https://renilpatel.hashnode.dev/javascript-array-methods

//print array using loop
let arr = [1,2,3,4,5,6];
for(var i=0; i<arr.length; i++){
    console.log(arr[i]);
}

//push element at the last position in array
console.log("--------------push array");
arr.push(10);
console.log(arr);

//pop - remove elemnt from the last position
console.log("--------------pop array");
arr.pop();
console.log(arr);

//remove first element of array
console.log("--------------shift array");
arr.shift();
console.log(arr);

//add given elemnt at the first position of array
console.log("--------------unshift array");
arr.unshift("renil");
console.log(arr);

//slice
console.log("--------------slice array");
const slicedArray = arr.slice(1,3);
console.log(slicedArray);

//slice
console.log("--------------splice array");
var spliceArray = ["one", "two", "three", "four"];
spliceArray.splice(2,1,"renil");
console.log(spliceArray);

//concate
console.log("--------------concate array");
var arr1=[1,2,3];
var arr2=[4,5,6];
console.log(arr1.concat(arr2));
