const fs = require("fs");

const input = fs.readFileSync(0, "utf-8").trim();

function printOutput (input) {
    console.log(input);
}

printOutput(input);

const bob = {
    name : 'Bob',
    introduce: function () {
        console.log(`Hi I am ${this.name}`);
    }
}

const Alice ={
    name: 'Alice',
}

bob.introduce.call(Alice);

const user = {
  name: "Alice",
  
  // Regular function: 'this' is determined by how it's called
  regularGreet: function() {
    return `Hi, I'm ${this.name}`;
  },
  
  // Arrow function: 'this' is inherited from where it's defined
  arrowGreet: () => {
    this.name = 'bob';
    return `Hi, I'm ${this.name}`;
  }
};








// const user2 = {
//     name: 'Alice',
//     introduce: function intro () {
//         return `My name is ${this.name}`
//     },
//     lateIntroduce: function late () {
//         return this.introduce.bind(this, 5000)
//     }
// }

class User2 {
    constructor(name) {
        this.name = name;
    }

    introduce () {
        return `Hi my name is ${this.name}`
    }

    lateIntroduce () {
        return setTimeout(this.introduce.bind(this), 0)
    }
}

// const lateIntroduce = user2.lateIntroduce();

// console.log(lateIntroduce())

const userAlice = new User2('Alice');


console.log(userAlice.lateIntroduce())