type rarity =
  | Rare
  | Uncommon;

type armor =
  | Heavy
  | Medium
  | Light;

type weaponProperty =
  | Ammunition
  | Finesse
  | Heavy
  | Light
  | Loading
  | Range
  | Reach
  | Special
  | Thrown
  | TwoHanded
  | Versatile;

type damageType =
  | Acid
  | Bludgeoning
  | Cold
  | Fire
  | Force
  | Lightning
  | Necrotic
  | Piercing
  | Poison
  | Psychic
  | Radiant
  | Slashing
  | Thunder;

type type_ =
  | Armor(armor)
  | Weapon(list(weaponProperty), damageType)
  | Ammunition
  | AdventuringGear
  | Equipment
  | Potion
  | Ring
  | Scroll
  | Shield
  | Wondrous;

type t = {
  type_,
  rarity,
  isMagic: bool,
};
