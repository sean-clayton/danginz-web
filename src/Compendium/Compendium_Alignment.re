type t =
  | LawfulGood
  | LawfulNeutral
  | LawfulEvil
  | NeutralGood
  | Neutral
  | NuetralEvil
  | ChaoticGood
  | ChaoticNeutral
  | ChaoticEvil;

let toString = alignment =>
  switch (alignment) {
  | LawfulGood => "LawfulGood"
  | LawfulNeutral => "LawfulNeutral"
  | LawfulEvil => "LawfulEvil"
  | NeutralGood => "NeutralGood"
  | Neutral => "Neutral"
  | NuetralEvil => "NuetralEvil"
  | ChaoticGood => "ChaoticGood"
  | ChaoticNeutral => "ChaoticNeutral"
  | ChaoticEvil => "ChaoticEvil"
  };

let fromString = string =>
  switch (string) {
  | "LawfulGood" => Some("LawfulGood")
  | "LawfulNeutral" => Some("LawfulNeutral")
  | "LawfulEvil" => Some("LawfulEvil")
  | "NeutralGood" => Some("NeutralGood")
  | "Neutral" => Some("Neutral")
  | "NuetralEvil" => Some("NuetralEvil")
  | "ChaoticGood" => Some("ChaoticGood")
  | "ChaoticNeutral" => Some("ChaoticNeutral")
  | "ChaoticEvil" => Some("ChaoticEvil")
  | _ => None
  };
