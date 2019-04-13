type t =
  | Strength
  | Dexterity
  | Constituion
  | Intelligence
  | Wisdom
  | Charisma;

let toString = ability =>
  switch (ability) {
  | Strength => "Strength"
  | Dexterity => "Dexterity"
  | Constituion => "Constituion"
  | Intelligence => "Intelligence"
  | Wisdom => "Wisdom"
  | Charisma => "Charisma"
  };

let fromString = s =>
  switch (s) {
  | "strength"
  | "Strength" => Some(Strength)
  | "dexterity"
  | "Dexterity" => Some(Dexterity)
  | "constituion"
  | "Constituion" => Some(Constituion)
  | "intelligence"
  | "Intelligence" => Some(Intelligence)
  | "wisdom"
  | "Wisdom" => Some(Wisdom)
  | "charisma"
  | "Charisma" => Some(Charisma)
  | _ => None
  };
