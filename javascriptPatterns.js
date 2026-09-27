const n = 5;

// Pattern 1
// *****
// *****
// *****
// *****
// *****
for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n; j++) {
        process.stdout.write("*");
    }
    console.log();
}

console.log();

// Pattern 2
// *
// **
// ***
// ****
// *****
for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= i; j++) {
        process.stdout.write("*");
    };
    console.log();
};

console.log();

// Pattern 3
// 1
// 12
// 123
// 1234
// 12345
for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= i; j++) {
        process.stdout.write(String(j));
    };
    console.log();
};

console.log();

// Pattern 4
// 1
// 22
// 333
// 4444
// 55555
for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= i; j++) {
        process.stdout.write(String(i));
    };
    console.log();
};

console.log();

// Pattern 5
// *****
// ****
// ***
// **
// *
for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n - i + 1; j++) {
        process.stdout.write("*");
    };
    console.log();
};

console.log();

// Pattern 6
// 12345
// 1234
// 123
// 12
// 1
for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n - i + 1; j++) {
        process.stdout.write(String(j));
    };
    console.log();
};

console.log();

// Pattern 7
//     *
//    ***
//   *****
//  *******
// *********
for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n - i; j++) {
        process.stdout.write(" ");
    };

    for (let k = 1; k <= (i * 2) - 1; k++) {
        process.stdout.write("*");
    };
   
    console.log();
};

console.log();

// Pattern 8
// *********
//  *******
//   *****
//    ***
//     *
for (let i = 1; i <= n; i++) {
    for (let j = 1; j < i; j++) {
        process.stdout.write(" ");
    };

    for (let k = 1; k <= (n - i) * 2 + 1; k++) {
        process.stdout.write("*");
    };

    console.log();
};

console.log();

// Pattern 9
//        * 
//       ***
//      *****
//     *******
//    *********
//    *********
//     *******
//      *****
//       ***
//        *
for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= n - i; j++) {
        process.stdout.write(" ");
    };

    for (let k = 1; k <= (i * 2) - 1; k++) {
        process.stdout.write("*");
    };

    console.log();
};

for (let i = 1; i <= n; i++) {
    for (let j = 1; j < i; j++) {
        process.stdout.write(" ");
    };

    for (let k = 1; k <= (n - i) * 2 + 1; k++) {
        process.stdout.write("*");
    };
    
    console.log();
};

console.log();

// Pattern 10
// *
// **
// ***
// ****
// *****
// ****
// ***
// **
// *
for (let i = 1; i <= n * 2 - 1; i++) {
    let stars = i <= n ? i : 2 * n - i;
    
    for (let j = 1; j <= stars; j++) {
        process.stdout.write("*");
    };

    console.log();
};

console.log();

// Pattern 11
// 1 
// 0 1 
// 1 0 1 
// 0 1 0 1 
// 1 0 1 0 1
for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= i; j++) {
        if ((i + j) % 2 === 0) {
            process.stdout.write(`1 `);
        } else {
            process.stdout.write(`0 `);
        };
    };
    console.log();
};

console.log();

// Pattern 12
// 1        1
// 12      21
// 123    321
// 1234  4321
// 1234554321
for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= i; j++) {
        process.stdout.write(`${j}`);
    };

    for (let k = 1; k <= (n - i) * 2;k++) {
        process.stdout.write(" ");
    };
    
    for (let l = i; l >= 1; l--) {
        process.stdout.write(`${l}`);
    }

    console.log();
}

console.log();

// Pattern 13
// 1 
// 2 3 
// 4 5 6
// 7 8 9 10 
// 11 12 13 14 15
let start = 1;
for (let i = 1; i <= n; i++) {
    for (let j = 1; j <= i; j++) {
        process.stdout.write(`${start} `);
        start++;
    };
    console.log();
};

console.log();

// Pattern 13 // Recursion
// 1 
// 2 3 
// 4 5 6
// 7 8 9 10 
// 11 12 13 14 15
function print(start, n) {
    let newStart = start;
    if (n === 0) return;

    for (let i = 1; i <= start; i++) {
        process.stdout.write(`${newStart} `);
        newStart = newStart + 1;
    }
    
    console.log();
    
    print(newStart, n - 1);
};

print(1, 8);

console.log();

// Pattern 14
// A
// AB
// ABC
// ABCD
// ABCDE
const alphabets = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
for (let i = 1; i <= n; i++) {
    for (let j = 0; j < i; j++) {
        process.stdout.write(`${alphabets[j]}`);
    };
    console.log();
};

console.log();

// Pattern 15
// ABCDE
// ABCD
// ABC
// AB
// A
for (let i = 0; i < n; i++) {
    for (let j = 0; j < n - i; j++) {
        process.stdout.write(`${alphabets[j]}`);
    };
    console.log();
};

console.log();

// Pattern 16
// A
// BB
// CCC
// DDDD
// EEEEE
let ch = "A";
for (let i = 0; i < n; i++) {
    for (let j = 0; j <= i; j++) {
        process.stdout.write(String.fromCharCode(ch.charCodeAt() + i))
    };
    console.log();
};

console.log();

// Pattern 17
//     A
//    ABA
//   ABCBA
//  ABCDCBA
// ABCDEDCBA
ch = "A";
for (let i = 0; i < n; i++) {
    for (let j = 1; j <= n - (i + 1); j++) {
        process.stdout.write(" ");
    };

    for (let k = 0; k < i * 2 + 1; k++) {
        ch = k <= i ? String.fromCharCode(ch.charCodeAt + k) : String.fromCharCode(ch.charCodeAt - 1);
        //if (k <= i) {
          //  process.stdout.write(String.fromCharCode(ch.charCodeAt() + k));
        //} else {
            process.stdout.write(ch);
        //}
    };
    console.log();
}
console.log();