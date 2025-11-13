// take a phone number from user and check it contains 10 digits if not so thne print a message throught alert box number is not valid 
// var phonenumber = prompt("Enter number");
// var lastIndex = phonenumber.length;

// if(lastIndex==10){
//     console.log("valid phone Number ");
// } else {
//     console.log("not valid phone nuber"); 
// }

//take number from user reverce that number and check wherther its perfect square or not if its match the condition then print its valid number

// var number = prompt("Enter number");

// var reverceNumber;
// reverceNumber = number.toString().split('').reverse().join();

// console.log(reverceNumber);

// var math = Math.sqrt(2);

// console.log(math);


//promgram 3 
//take number until user not enter palindrome number

var number;

number = prompt("Enter only palindrome number");
while(number != number.toString().split('').reverse().join('')){
    console.log(number.toString().split('').reverse().join(''));
     number = parseInt(prompt("Enter number"));
}
if(number == number.toString().split('').reverse().join('')){
    console.log("number is palindrome");
}