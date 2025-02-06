const http = require('http')

const urls = process.argv.slice(2)
const results = new Array(3).fill('')
let count = 0

urls.forEach((url, index) => {
    http.get(url, (response) => {
        response.setEncoding('utf8')
        
        response.on('data', (chunk) => {
            results[index] += chunk
        })
        
        response.on('end', () => {
            count++
            if (count === 3) {
                results.forEach(result => {
                    console.log(result)
                })
            }
        })
    })
})