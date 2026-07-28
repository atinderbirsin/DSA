// const fs = require("fs");

// const input = fs.readFileSync(0, "utf-8").trim();

// let n;

// function getN (input) {
//     n = Number(input);
// }

// getN(input);

// for(let i = 1; i <= n; i++) {
//     let row = '';
//     for(let j = 1; j <= n; j++) {
//         row += '*'
//     }
//     console.log(row);
// }

// for(let i = 1; i <= n; i++) {
//     let row = '';
//     for(let j = 1; j <= i; j++) {
//         row += '*';
//     }
//     console.log(row);
// }

// for(let i = 1; i <= n; i++) {
//     let row = '';
//     for (let j = 1; j <= i; j++) {
//         row += j;
//     }
//     console.log(row);
// }

// for(let i = 1; i <= n; i++) {
//     let row = '';
//     for(let j = 1; j <= i; j++) {
//         row += i;
//     }
//     console.log(row);
// }

// for(let i = 1; i <= n; i++) {
//     let row = '';
//     for(let j = i; j <= n; j++) {
//         row += '*'
//     }
//     console.log(row)
// }

// for(let i = 1; i <=n; i++) {
//     let row = '';
//     let count = 1;
//     for(let j = i; j <= n; j++) {
//         row += count++
//     }
//     console.log(row)
// }

// for(let i = 0; i < n; i++) {
//     let row = '';
//     for (let j = 0; j < n - i -1; j++) {
//         row += ' '
//     }

//     for(let k = 0; k < 2 * i + 1; k++) {
//         row += '*' 
//     }

//     for(let l = 0; l < n - i -1; l++) {
//         row += ' ';
//     }
//     console.log(row)
// }

// for(let i = 0; i < n; i++) {
//     let row = '';
//     for(let j = 0; j < i; j++) {
//         row += ' '
//     }

//     for(let k = 0; k < 2 * n - (2 * i + 1); k++) {
//         row += '*'
//     }

//     for(let l = 0; l < i; l++) {
//         row += ' '
//     }
//     console.log(row)

// }

// function erectPyramind() {

//     for(let i = 0; i < n; i++) {
//         let row = '';
//         for(let j = 0; j < n - i - 1; j++){
//             row += ' '
//         }
    
//         for(let k = 0; k < 2 * i + 1; k++) {
//             row += '*'
//         }
    
//         for(let l = 0; l < n - i - 1; l++) {
//             row += ' '
//         }
//         console.log(row)
//     }
// }

// function invertedPyramid () {
//     for(let i = 0; i < n; i++) {
//         let row = ''
//         for(let j = 0; j < i; j++) {
//             row += ' '
//         }
        
//         for(let k = 0; k < 2 * n - (2 * i + 1); k++) {
//             row += '*'
//         }
        
//         for(let l = 0; l < i; l++) {
//             row += ' '
//         }
//         console.log(row)
//     }
// }

// erectPyramind();
// invertedPyramid();

// for(let i = 1; i <=(2 * n) - 1; i++) {
//     let stars = i;

//     if (i > n) stars = (2 * n) - i

//     let row = ''
//     for (j = 1; j <=stars; j++) {
//         row += '*'
//     }    
//     console.log(row)
// }

// for (let i = 0; i <= n; i++) {
//     let row = '';
//     for(let j = 0; j <= i; j++) {
//         row += j % 2 == 0 ? '1' : '0';
//     }
//     console.log(row)
// }

// for(let i = 0; i <= n; i++) {

// }

// let n = 2

// for (let i = 0; i < n; i++) {
//     // let row = '';

//     for(let j = 0; j < n; j++) {
//         process.stdout.write('*')
//         // row += '*';
//     }
//     console.log();
// }


// for (let i = 1; i < n; i++) {
//     for(let j = 1; j < n - i + 1 ; j++) {
//         process.stdout.write(`${j}`)
//     }
//     console.log();
// }

// for (let i = 1; i < n; i++) {
//     for (let j = 1; j < n-i;j++) {
//         process.stdout.write(' ');
//     }

//     for(let k = 1; k <= (2 * i) - 1; k++) {
//         process.stdout.write('*')
//     }

//     for (let l = 1; l < n-i;l++) {
//         process.stdout.write(' ');
//     }

//     console.log();
// }

let n = 5;

// for(let i = 1; i <= n; i++) {
//     for(let k = 1; k <= i - 1; k++) {
//         process.stdout.write(' ');
//     }

//     for(let j = 1; j <= ((n - i) * 2) + 1; j++) {
//         process.stdout.write('*');
//     }
//     console.log();
// }


// for (let i = 1; i <= n; i++) {
//     for (let j = 1; j <= n - i; j++) {
//         process.stdout.write(' ');
//     }

//     for (let k = 1; k <= i * 2 - 1; k++) {
//         process.stdout.write('*');
//     }
//     console.log();
// }

// for(let i = 1; i <= n; i++) {
//     for(let j = 1; j <= i - 1; j++) {
//         process.stdout.write(' ');
//     }

//     for(let k = 1; k <= ((n - i) * 2) + 1; k++) {
//         process.stdout.write('*');
//     }
//     console.log();
// }

console.log(1 / 2);
console.log(1 % 2);
console.log(2 / 2);
console.log(2 % 2);
console.log(3 / 2);
console.log(0 % 2);


// function Greeting (greet) {
//     return function (name) {
//         return `${greet} ${name}!`
//     }
// };

// const sayHello = Greeting('Hello');

// console.log(sayHello('Atinder'));

// function createMemoizedFunction (fn) {
//     const cache = {};

//     return function (arg) {
//         if (arg in cache) {
//             console.log('Returning cache response');
//             return cache[arg];
//         }

//         console.log('Computing result');
//         const result = fn(arg);
//         cache[arg] = result;
//         return result;
//     }
// }

// function factorial (num) {
//     if ( num <= 1) return 1;
//     return num * factorial(num - 1);
// }

// const memoizedFactorial = createMemoizedFunction(factorial);

// console.log(memoizedFactorial(5));
// console.log(memoizedFactorial(5));
// console.log(memoizedFactorial(5));


n = 10;

// for (let i = 1; i <= n; i++) {
//     for (let j = 1; i <= i; j++) {
//         process.stdout.write('*');
//     }
//     process.stdout.write('\n')
// }

for(let i = 1; i <= n; i++) {
    let row = '';
    for(let j = 1; j <= i; j++) {
        row += '*'
    }
    console.log(row)
}

Array.prototype.newForEach = function (callback) {

    if (typeof callback !== "function") {
        throw new Error('Specified Callback is not a function');
    };

    const obj = Object(this);

    if (!obj.length) {
        throw new Error('Array should have elements inside it');
    }


    for(let i = 0; i < obj.length; i++) {
        callback(obj[i]);
    }
}

const arr1 = [1];

arr1.newForEach((i) => {
    console.log(i);
})


const memoizedFunction = (cb) => {
    let cache = {};

    return function (arg) {
        if(arg in cache) {
            console.log('Returning cache response');
            console.log(cache[arg]);
            return;
        }

        console.log('Computing the result');
        const result = cb(arg);
        cache[arg] = result;
        console.log(result);
    }
}

const factorial = (num) => {
    if (num <= 1) {
        return 1;
    }

    return num * factorial(num - 1);
}

const memoizedFactorial = memoizedFunction(factorial);


memoizedFactorial(5);
memoizedFactorial(5);
memoizedFactorial(5);