function isPositive(a) {
    if(a>0) {
        return "YES";
    }
    throw Error(a<0? "Negative Error": "Zero Error");
}