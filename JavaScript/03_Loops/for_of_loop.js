// for-of Loop

let str="Rahi Agarwal";

for (let val of str){
    console.log(val);
}

// for-in Loop

let person={
    fullName:" Rahi Agarwal",
    Age:22,
    Profession:"Engineer"
};

for(let i in person){
    console.log(i,person[i]);  // Key will be Printed
  //  console.log(person[i])// Value will be Printed
}

// Printing all Number

for (let i=0;i<=100;i+=2){
    console.log(i);
}


// Prompt mein hamare pass jo number aate hai vo string ki format mein aate hai to uska dhyaan rakhna hai
