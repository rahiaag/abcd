// Non Primitive DataType Object

const pen={
    fullName:"Parker Jotter Standard",
    Rating:4.5,
    Text: "Deal of the Day",
    Price: 270,
    Discount: 5,
};
console.log(pen);

console.log(pen.fullName);  // one way to execute the value
console.log(pen["fullName"]); // Other way to Execute the value keep care that Semicolon is must
console.log(typeof pen);  //object
console.log(typeof pen["Rating"]); // Number
console.log("123"+1)  // 1231