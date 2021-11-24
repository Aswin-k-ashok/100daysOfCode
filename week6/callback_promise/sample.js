// function add(num1, num2, callback) {
//     let err = false
//     if (num1 == 0) {
//         err = true
//     }
//     callback(num1 + num2, err)
// }

// function multiply(num1, num2, callback) {
//     callback(num1 * num2)
// }

// function div(num1, num2, callback) {
//     callback(num1 / num2)
// }

// function sub(num1, num2, callback) {
//     callback(num1 - num2)
// }


// add(10, 30, (sum, err) => {
//     if (err) {
//         console.log("error occurd")
//     } else {
//         console.log(sum)

//         multiply(sum, sum, (product) => {
//             console.log(product);

//             div(product, 10, (div) => {
//                 console.log(div);

//                 sub(product, div, (sub) => {
//                     console.log(sub)
//                 }) 
//             })
//         })
//     }
// })

// const { resolve, reject } = require('promise')
const { resolve, reject } = require('promise')
const Promise=require('promise')

function add(num1,num2){
    return new  Promise((resolve,reject)=>{  //promised statements a resolve and a reject
        if(num1==0){
            reject ("first number is zero")
        } 
        resolve(num1+num2)                  // case where we have attained our result this will be transfered to the then block
    })
}

function mul(num1,num2){
    return new  Promise((resolve,reject)=>{
         resolve(num1*num2)
    })
}

function div(num1,num2){
    return new Promise((resolve,reject)=>{
        resolve(num1/num2)
    })
}

add(10,20).then((sum)=>{                      //then will have the resolve statements that is the result of the resolve function
    console.log(sum)
    return mul(sum,sum)                // the value of the resolve or the result of add is passed to a function called sum 
}).then((prod )=>{
    console.log(prod)
    return div(prod,sum) 
}).then((divs)=>{                       // return values will be passed to the next then 
    console.log(divs)
}).then ((done)=>{
    console.log("done")
}).then((rdone)=>{
    console.log("now really done")
})

.catch((err)=>{
    console.log("error - ",err)
})