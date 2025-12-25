//iterator

function createArrayIterator(arr) {
    let i = 0;
    return {
        next: () => {
            if(i < arr.length) {
                return { value: arr[i++], done: false };
            } else {
                return { value: undefined, done: true };
            }
        }
    }
}

function countUpto(limit){
    let i = 1;
    while(i <= limit) {
        
    }

}

const myIterator = createArrayIterator([1,2,3]);
console.log(myIterator.next());
console.log(myIterator.next());
console.log(myIterator.next());
console.log(myIterator.next());


