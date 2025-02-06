const net = require('net')

const server = net.createServer((socket) => {
    // Create current date
    const date = new Date()
    
    // Format date as YYYY-MM-DD HH:MM
    const year = date.getFullYear()
    const month = String(date.getMonth() + 1).padStart(2, '0')
    const day = String(date.getDate()).padStart(2, '0')
    const hours = String(date.getHours()).padStart(2, '0')
    const minutes = String(date.getMinutes()).padStart(2, '0')
    
    // Create formatted string
    const formattedDate = `${year}-${month}-${day} ${hours}:${minutes}\n`
    
    // Write to socket and close connection
    socket.end(formattedDate)
})

server.listen(process.argv[2])