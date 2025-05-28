const readline = require('readline');

const rl = readline.createInterface({
    input: process.stdin,
    output: process.stdout
});

rl.question("Enter the Number: ", function(number) {
    number = Number(number);  // Convert input to number

    if (number % 5 === 0) {
        console.log(number, "is a Multiple of 5");
    } else {
        console.log("Not a Multiple of 5");
    }

    rl.close();
});
