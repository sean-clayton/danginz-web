open Belt;

type t =
  | Dice(int);

let d4 = Dice(4);
let d6 = Dice(6);
let d8 = Dice(8);
let d10 = Dice(10);
let d12 = Dice(12);
let d20 = Dice(20);

let make = numSides =>
  switch (numSides) {
  | n when n > 1 && n < 128 => Some(Dice(n))
  | _ => None
  };

let roll = dice =>
  switch (dice) {
  | Dice(numSides) => Js.Math.random_int(1, numSides)
  };

let rollWithModifier = (dice, modifier) => {
  let result = roll(dice);

  (result, modifier, result + modifier);
};

let rollMany = dice => dice->List.map(roll);
