//write a program to check whether user is elegible for voting or not

// var age = parseInt(prompt("Enter Age"));
// var citizotionship = prompt("Enter your citizotionship");
// var nonCriminalStatus = true

// checkEligiblity(age, citizotionship, nonCriminalStatus)

// // age 18+,  citizotionship== indian, nonCriminalStatus == true
// function checkEligiblity(age, citizotionship, nonCriminalStatus){
//     if(age > 18 && citizotionship == "indian" && nonCriminalStatus == true){
//         console.log("Eligible for voting");
//     } else{
//         console.log("Not Eligible for voting");
//     }
// }


//sort array in accending order 

// var arr = [20,23,12,43,65,33];
// console.log(arr.sort());

//print row in column and cloumn in row 

var arr = [[20,10,30], [33,44,55], [1,2,3]];

var main = [];
for(var i = 0; i<3 ; i++){
    var temp = [];
    for(var j = 0; j<3; j++){
        temp.push(arr[j][i]);
    }
    main.push(temp);
}
console.log(main);

// take a phone number from user and check it contains 10 digits if not so thne print a message throught alert box number is not valid 
//take number from user reverce that number and check wherther its perfect square or not if its match the condition then print its valid number
//take number until user not enter palindrome number
//write a program to check whether user is elegible for voting or not
//sort array in accending order 
//print row in column and cloumn in row 