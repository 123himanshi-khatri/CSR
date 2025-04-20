"use strict" //for Avoid common bugs by throwing errors for unsafe actions.

//Prevent accidental global variables.

//Disallow duplicate property names or parameter values.

//Make debugging easier by catching silent errors.

//Future-proof your code for newer versions of JavaScript.


 const ps = require("prompt-sync") //load the module  // this module prompts the prompting function // we store it in a variable 

//we can call the prompting function by refering this ps
const prompt=ps(); //now we have prompt function
let a=parseFloat(prompt("enter 1st side of triangle"));
let b=parseFloat(prompt("enter 2nd side of triangle"));
let c=parseFloat(prompt("enter 3rd side of triangle"));


let s= 0.5*(a+b+c);
let k=s*(s-a)*(s-b)*(s-c);
let area=Math.sqrt(k);
console.log(`area is  ${area}`);
