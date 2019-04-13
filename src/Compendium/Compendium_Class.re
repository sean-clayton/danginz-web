open Danginz.Compendium.Proficiencies;

type t = {
  name: string,
  hitDie: Danginz.Dice.t,
  proficiencies: Danginz.Compendium.Proficiencies.t,
};

let make = (~name, ~hitDieSides, ~proficiencies) =>
  switch (
    name,
    Danginz.Dice.make(hitDieSides),
    proficiencies->fromStringList,
  ) {
  | (name, Some(hitDie), Some(proficiencies)) =>
    Some({name, hitDie, proficiencies})
  | _ => None
  };
