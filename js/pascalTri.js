

let arr = [33,212,5445,11,21,4332,12];

function sort(arr){
    let temp ; 
   for(let  i  =0 ;   i <  arr.length ; i++ ){
       for(let j  = 0 ; j< arr.length ; j++){
           temp   = arr[j+1];
           arr[j+1] = arr[j];
           arr[j] =  temp;
       }
   }
    return arr;
}
console.log(sort(arr));