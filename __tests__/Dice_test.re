open Jest;
open Expect;
open Belt;

test("can make a dice", () =>
  switch (Dice.make(6)) {
  | Some(Dice(6)) => pass
  | _ => failwith("Did not create a dice!")
  }
);

test("can't make a dice smaller than 2 sides", () =>
  switch (Dice.make(1), Dice.make(-1)) {
  | (None, None) => pass
  | _ => failwith("a dice was made when it should have failed!")
  }
);

test("can't make a dice larger than 128 sides", () =>
  switch (Dice.make(129)) {
  | Some(Dice(_)) => failwith("come on... be reasonable...")
  | None => pass
  }
);

test("can roll a dice", () => {
  let actual = Dice.d6->Dice.roll;
  expect(actual >= 1 && actual <= 6) |> toBe(true);
});

test("can roll many dice", () => {
  let dice = Dice.[d6, d6, d6, d6];
  expect(dice->Dice.rollMany->List.toArray) |> toHaveLength(4);
});

test("can roll with a positive modifier", () => {
  let (result, modifier, final) = Dice.(rollWithModifier(d6, 2));
  expect(final - modifier == result) |> toBe(true);
});
