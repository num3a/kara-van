type businessRule = (string, bool);
   /*type BusinessRules =$*/
type businessRules = list(businessRule);

let ruleList: businessRules = [
   ("", true),("",false)
];

/* let validate = (rules: businessRules) => true; */


let multiplay = (x, y) => x * y / 2;
let add = (x, y, z) => x + y + z;

let result  = multiplay(4,59);
