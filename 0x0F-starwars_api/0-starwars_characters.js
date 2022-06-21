#!/usr/bin/node
import request from 'request';

const id = process.argv[2];
const url = `https://swapi-api.hbtn.io/api/films/${id}`;

request(url, { json: true }, async (err, res, body) => {
  if (err) {
    return err;
  }
  const characters = body.characters;
  for (const character of characters) {
    await new Promise((resolve, reject) => {
      request.get(character, { json: true }, async (err, res, body) => {
        if (err) {
          reject(err);
        } else {
          console.log(body.name);
          resolve();
        }
      });
    });
  }
});
