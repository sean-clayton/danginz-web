type size =
  | Small
  | Medium
  | Large
  | Giant;

type abilityModifier = (Danginz.Compendium_Ability.t, int);
type trait = {
  name: string,
  text: string,
};

type t = {
  name: string,
  size,
  abilityModifiers: list(abilityModifier),
  speed: int,
  traits: list(trait),
  proficiency: option(Danginz.Compendium.Skill.t),
};
