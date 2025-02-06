const http = require('http')

const url = process.argv[2]

http.get(url, (response) => {
    let rawData = ''
    response.setEncoding('utf8')
    
    // Collect data chunks
    response.on('data', (chunk) => {
        rawData += chunk
    })
    
    // When all data is received
    response.on('end', () => {
        console.log(rawData.length)
        console.log(rawData)
    })
}).on('error', (error) => {
    console.error('Error:', error)
})