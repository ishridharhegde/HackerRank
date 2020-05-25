function vowelsAndConsonants(s) {
    const vowels = 'aeiou';
    var consonants = '';
    
    //Loop through the string and print all the vowels. If a character is not a vowel, note that character in the order it which appreas in a seperate string whicn can be printed later
    for(var i = 0; i < s.length; i++) {
       if (vowels.includes(s[i])) {
           console.log(s[i]);
       }
       else {
           consonants += s[i] + '\n';
       }
    }
    console.log(consonants);
}