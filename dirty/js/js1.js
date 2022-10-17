// email api
var email = require("emailjs/email");
var server = email.server.connect({
        user: "username",
        password: "password",
        host: "smtp.gmail.com",
        ssl: true
});

// send the message and get a callback with an error or details of the message that was sent
server.send({
        text: "i hope this works",
        from: "you <Jacob>",
        to: "someone <James>",
        cc: "else <someoneelse>",
        subject: "testing emailjs"
}, function(err, message) { console.log(err || message); });