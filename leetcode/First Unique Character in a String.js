/**
 * @param {string} s
 * @return {number}
 */
var firstUniqChar = function(s) {
    var char = s.slice(0,1);
    var s2 = s.substr(1);
    console.log(char)
    console.log(s2)    
   var bool =  s2.filter(function(val){
        return val === char
    })
  return bool;
};