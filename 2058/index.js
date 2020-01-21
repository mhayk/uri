// var input = require('fs').readFileSync('/dev/stdin', 'utf8');
// var lines = input.split('\n');
// 3 3
// 7V 1D 2D
// 2D 1V 1V
// 3V 5V 9D

function sort(n,m,array) {
    let v = []
    let d = []
    for(let i = 1; i <= n; i++) {
        const row = array[i].split(' ')
        for(let j = 0; j < m; j++) {
            const item = row[j]
            if(item[1] == 'V') v.push(item[0])
            else
                d.push(item[0])
        }
    }
    v.sort().reverse()
    d.sort().reverse()
    v.map(item => console.log(`${item}V`))
    d.map(item => console.log(`${item}D`))
}

function main() {
    const lines = [
        '3 3',
        '7V 1D 2D',
        '2D 1V 1V',
        '3V 5V 9D'
    ]

    const [n,m] = lines[0].split(' ')
    sort(n,m,lines)
}

main()