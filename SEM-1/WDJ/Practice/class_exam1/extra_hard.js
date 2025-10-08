// reverseString("hello");

function reverseString(str){
    let reversed ='';

    for(let i=0; i<str.length; i++){
        reversed += str[str.length-1-i];
    }

    return reversed;
}

console.log(reverseString("hello"));
