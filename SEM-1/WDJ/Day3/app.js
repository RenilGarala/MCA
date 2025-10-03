//take a username from user, if length of usernamre is even then print last 4 characters of username else convert into upper case

let string;
string=prompt("Enter Name");

if(string.length % 2 == 0){
    console.log(string.slice(-4));
} else{
    console.log(string.toUpperCase());
}

//take a username from user, calculate total number of vowels in this.

var username;
username=prompt("Enter Username");

let count = 0;
for (var i = 0; i < username.length; i++){
    if(username[i]=='a' || username[i]=='e' || username[i]=='i' || username[i]=='o' || username[i]=='u'){
        count++;
    }
}
console.log("Total vowel in username is = ", count);

// logical and operator

let age = 18;
let citizen = 'indian';

if(age == 18 && citizen == 'indian'){
    console.log("You can vote");
} else {
    console.log("you can not vote ");
}

// // logical or operator

let char = 'a';
if(char == 'a' || char == 'e' || char == 'i' || char == 'o' ||char == 'u'){
    console.log("char is vowel");
} else {
    console.log("char is consonant");
}

// if length of user name is even and first char is vowel then print that "its propar username" else print "create another name"

username=prompt("Check Your Username");

const isVowel = username[0] == 'a' || username[0] == 'e' || username[0] == 'i' || username[0] == 'o' || username[0] == 'u';

if(username.length % 2==0 && isVowel){
    console.log("its propar username");
} else if (isVowel){
    console.log("First char should be vowel");    
} else {
    console.log("create another name");
}


//take an year from user check whether its leap or not lear year

var year = prompt("Enter Year to check leap or not");

if(year % 1000 == 0){
    console.log("This is century");
}else if(((year % 4 == 0) && (year % 100 != 0)) || (year % 400 == 0)){
    console.log("This year is leap");
} else {
    console.log("this is not leap year");
}

