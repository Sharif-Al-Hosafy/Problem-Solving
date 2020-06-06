/**
 * @param {string} str
 * @return {number}
 */
var myAtoi = function(str) {
    var s1 = str.split("");
    var res = "";
    while(s1[0] === ' ' )s1.shift();
    res += checkSign(s1);
    while(s1[0] === "0" ){
        if(s1[1] === '+' || s1[1] === '-' ) return 0;
         s1.shift();
    }
    res += checkSign(s1);
    
    if(s1[0]*1)
    {
        for(var i=0 ; i<s1.length ; i++)
        {
            if(s1[i] === "0") res += s1[i];
            else if(s1[i] == ' ' || !(s1[i] * 1) ) break;
            else res += s1[i];
        }
        if(res > 2147483647) return 2147483647;
        if(res < -2147483648) return -2147483648;
    }
    else  return 0;
    return res;
};

function checkSign(s1){
    if((s1[0] === '+' && s1[1] === '-') || (s1[0] === '-' && s1[1] === '+')||
       (s1[0] === '-' && s1[1] === '-')||
      (s1[0] === '+' && s1[1] === '+')
      ) return 0
    if(s1[0] === '+'){
        s1.shift();
        return "+"
    }
    if(s1[0] === '-'){
        s1.shift();
       return "-"
    }
    return ""
}