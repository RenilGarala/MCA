//take a username from user, if length of usernamre is even then print last 4 characters of username else convert into upper case

let string;
string=prompt("Enter Name");

if(string.length % 2 == 0){
    console.log(string.slice(-4));
} else{
    console.log(string.toUpperCase());
}


//take a username from user, calculate total number of vowels in this.

let username;
username=prompt("Enter Name");

// a=5;
// b=6;
// c=4;

// d = a++ - b-- - ++c + b++ * --a - ++b + c-- * --b - c++;
// console.log(d);

