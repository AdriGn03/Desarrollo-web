const http = require('http')

// Get URL from command line arguments
const url = process.argv[2]

// Perform HTTP GET request
http.get(url, (response) => {
    // Set encoding to utf8 to get strings instead of Buffer objects
    response.setEncoding('utf8')
    
    // Handle data events
    response.on('data', (data) => {
        console.log(data)
    })
    
    // Handle error events
    response.on('error', (error) => {
        console.error(error)
    })
})