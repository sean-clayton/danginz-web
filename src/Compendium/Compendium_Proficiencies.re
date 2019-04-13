open Belt;
type t =
  | Proficiencies(list(Danginz.Compendium.Ability.t));

type fromAbilities = list(Danginz.Compendium.Ability.t) => t;
let fromAbilities = abilities => Proficiencies(abilities);

type fromStringList = list(string) => Belt.Result.t(list(t), string);
let fromStringList = sl => {
  let parseAttemptList = sl->List.map(Danginz.Compendium.Ability.fromString);

  switch (parseAttemptList->List.every(Option.isSome)) {
  | true => Some(Proficiencies(parseAttemptList->List.map(Option.getExn)))
  | _ => None
  };
};
