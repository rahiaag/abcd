let s="rahiagarwal";

function vowelsAndConsonants(s) {
    let size = s.length;
    
    // Print vowels
    for (let i = 0; i < size; i++) {
        if (s[i] === 'a' || s[i] === 'e' || s[i] === 'i' || s[i] === 'o' || s[i] === 'u') {
            console.log(s[i]);
        }
    }

    // Print consonants
    for (let i = 0; i < size; i++) {
        if (s[i] !== 'a' && s[i] !== 'e' && s[i] !== 'i' && s[i] !== 'o' && s[i] !== 'u') {
            console.log(s[i]);
        }
    }
}

vowelsAndConsonants(s);

/*
Using `||` (logical OR) in the second loop means the condition will be true if **any** of the checks fail. This would incorrectly classify every character as a consonant because if one condition is false (e.g., the character is 'a'), the others will still be checked.

### Example:
- For the character `'a'`:  
  - `s[i] !== 'a'` is **false**, so the condition `false || true || true ...` becomes **true**.

Using `&&` (logical AND) ensures that all conditions must be true for the character to be classified as a consonant, which correctly identifies consonants. 

### In Summary:
- **`||`**: If **any** check is false, the condition is true (wrong for consonants).
- **`&&`**: All checks must be true for the condition to be true (correct for consonants).

*/