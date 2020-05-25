function performOperation(secondInteger, secondDecimal, secondString) {
    const firstInteger = 4;
    const firstDecimal = 4.0;
    const firstString = 'HackerRank ';

    //Using a + before the string will easily convert it to number and it is the fastest.
    console.log(firstInteger + (+secondInteger));
    console.log(firstDecimal + (+secondDecimal));
    console.log(firstString + secondString);
}
