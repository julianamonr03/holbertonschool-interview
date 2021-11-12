#!/usr/bin/node

const query = require('request');
const filmID = process.argv[2];

const names = [];
let char = [];

query(
  `https://swapi-api.hbtn.io/api/films/${filmID}`,
  function (error, response, body) {
    if (error !== null) {
      console.error('error:', error);
    }
    const data = JSON.parse(body);
    char = data.characters;
    char.forEach((character, idx) => {
      query(`${character}`, function (error, response, body) {
        if (error !== null) {
          console.error('error:', error);
        }
        const data = JSON.parse(body);
        names[idx] = data.name;
        if (names.length === char.length && !names.includes(undefined)) {
          names.forEach((name) => {
            console.log(name);
          });
        }
      });
    });
  }
);
