// take number from user and print factorial

var number = prompt("enter number");

function factorial (number){
    var fact=1;
    for(var i = number ; i > 0 ; i--){
        fact*=i;
    }
    return fact;
}

console.log(factorial(number));

// take a number from user and check its prime or not 

var number = prompt("enter number");

function prime_or_not (number){
    var flag=0;
    for(var i = 2 ; i < number ; i++){
        if(number%i==0){
            flag=1;
            break;
        }
    }
    if(flag==0){
        console.log("Numebr is prime");
    } else {
        console.log("number is not prime number");
    }
}

prime_or_not(number);

//print all odd but non-prime number between 1 to 100

function prime_with_odd (number){
    for (var i = 0; i <= 100; i++){
        if(i%2==1){
            var flag=0;
            for(var i = 2 ; i < i ; i++){
                if(number%i==0){
                    flag=1;
                    break;
                }
            }
            if(flag==1){
                console.log(i);
            }
        }
    }
}

prime_with_odd();