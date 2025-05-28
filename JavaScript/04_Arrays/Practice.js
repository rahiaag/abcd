/*
// Practice 1

let marks=[85,97,44,37,76,60];

let n=marks.length;
let sum=0;
let average=0;

for (let i=0;i<n;i++){
    sum+=marks[i];
    average=sum/n;
}
console.log(`The average is ${average}`);

*/

// Practice 2

let arr=[250,645,300,900,50];

for (let i=0;i<arr.length;i++){
    arr[i]=arr[i]-(arr[i]*0.1);
}

console.log(arr);