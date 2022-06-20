#!/usr/bin/node
import request from 'request'

const id = process.argv[2]
const url = `https://swapi-api.hbtn.io/api/films/${id}`
const options = {
    url: url,
    method: 'GET'
};
function filmCharacters() {
    request(options, (err, res, body) => {
        if (err) {
            return console.log(err);
        }
        const characters = JSON.parse(body).characters
        const arr = []
        for (let character of characters) {
            request(character, (err, res, body) => {
                if (err) {
                    return console.log(err);
                }
                const name = JSON.parse(body).name
                console.log(name)
                arr.push(name)
            })
        } return arr
    });
}

console.log(filmCharacters())