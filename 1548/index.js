// var input = require('fs').readFileSync('/dev/stdin', 'utf8');
// var lines = input.split('\n');

const lines = ['2', '3', '1 2 3', '2', '40 30']

const times = parseInt(lines[0])

let n = 0
let pos = 1;
while (n < times) {
    const before = lines[pos+1].split(' ')
    const after = [...before]
    let counter = 0

    after.sort((a,b) => b - a)

    for(let i = 0; i < before.length; i++) {
        if(before[i] == after[i])
            counter++;
    }
    n++;
    pos+=2;
    console.log(counter)
}