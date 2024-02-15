// // //
// // let array  = [12,345,2,6,7896];


// // function findNumber(array){
// //     let count = 0 ;
// //     for (const item of array) {
// //     const abc  =  Math.floor(Number(Math.log10(item)) +1);
// //     if(abc %2  == 0 ){
// //         count ++;
// //     }        
// //     }
// //     return count;
// // }

// //  console.log(findNumber(array));


// //  function findNum(array){
// //     let count  = 0 ;
// //     for(const item of array){

// //         const abc  =  item.toString().length;
// //         console.log(item.toString())
// //         if(abc %2 == 0){
// //             count ++;
// //         }
// //     }
// //     return count;
// //  }

// //  console.log("the", findNum([2,323,11,4,2,4 ,33 ,33,222]));



// //  let number =[1,3,5,6];
// //  function find(num ,  target  = 2){
// //     let low  = 0 ;
// //     let high   =  num.length -1;
// //     while(low <= high){
// //         let mid  = high + low /2;
// //         if(num[mid] === target){
// //             return mid;
// //         }else if(num[mid] < target){
// //                 low = mid +1;
// //         }else{
// //             high = high -1;
// //         }
// //     }
// //     return low;
// //  }

// //  console.log("this is the find",find(number));

// //  var firstMissingPositive = function(nums=[0,2,-1,3,5,12,11]) {
// //     for(let  i= 0 ; i <  nums.length; i++){
// //         if(nums[i] > 0){
// //          if(nums[i] +1 === nums[i] +1){
// //             return i
// //          }
// //         }
// //     }
// // };

// // firstMissingPositive();
// var removeDuplicates = function(nums) {
//     for(let  i = 0 ; i < nums.length; i++){
//         for(let j =  i +1 ;  j <nums.length ; j++){
//             if(nums[i] === nums[j]){
//                 nums.splice(j,1);
           
//             }
//         }
//     }
//         return nums;

// };
// console.log(removeDuplicates([45,,45,1,1,2 ,343,23,343]).filter((elememnt)=> elememnt != undefined));


// function removeDuplicates(nums) {
//     if (nums.length === 0) {
//         return [];
//     }

//     let fastPointer = 1;
//     let slowPointer = 0;

//     for (fastPointer; fastPointer < nums.length; fastPointer++) {
//         if (nums[slowPointer] !== nums[fastPointer]) {
//             slowPointer++;
//             nums[slowPointer] = nums[fastPointer];                
//         }
//     }

//     // Include the last unique element by using slowPointer + 1
//     return nums.slice(0, slowPointer + 1);
// }

// console.log(removeDuplicates([11,11,22,33,44,33,44])); // Output: [11, 22, 33, 44]



// var removeElement = function(nums =[0,1,2,2,3,0,4,2], val =2) {
//     for(let  i = 0 ;  i <  nums.length; i++){
//         console.log(i)
//         if(nums[i] === val){
//               nums.splice(i ,  1);
//               i--;

//               console.log("i after" , i);
//                       }
//     }
//     return nums;
//   };

//   console.log(removeElement());



 let  nums1 =[1,2,3,0,0,0]
let m  =  3 ;
let n  = 3; 
let nums2 =[2,5,6]

function merge(nums1 ,  m  , nums2 ,n){
    let i =  m-1;
    let j  =  n- 1;
    let k  =m +n -1;
    while(i >=0  && j>= 0){
        if(nums1[i] > nums2[j]){
            nums1[k] =nums1[i];
            i--;
            k--;
        }else{
            nums1[k] = nums2[j];
            j--;
            k--;
        }
     
    }

    while(j >= 0 ){
        nums1[k] = num2[j];
        k--;
        j--;
    }
  return nums1;
}
  console.log(nums1  ,nums2);

console.log(merge(nums1 ,  m  ,  nums2 , n));


var plaindrom =(x=121)=>{
let a = '';
for(let  i= x.toString().length -1; i >=0; i-- ){
    a+=x.toString()[i];
}
if(a ===x){
    return true;
}
return false;
}
console.log(plaindrom());

function plai(x= 121){
    if(x < 0 ) return false;
    const str  = x.toString();
    let left = 0;
    let right  = str.length -1;
    while(left <  right){
        if(str[left] != str[right]){
            return false;
        }
        left++;
        right--;

    }
    return true;
}