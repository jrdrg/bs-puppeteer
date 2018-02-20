type t;

[@bs.send.pipe : t] external click : (~options: Click.clickOptions=?, unit) => Js.Promise.t(unit) =
  "";

[@bs.send.pipe : t] external dispose : Js.Promise.t(unit) = "";

[@bs.send.pipe : t] external hover : Js.Promise.t(unit) = "";

[@bs.send.pipe : t] external tap : Js.Promise.t(unit) = "";

[@bs.send.pipe : t] external uploadFile : (~filePaths: array(string)) => Js.Promise.t(unit) = "";

type typeOptions = {
  .
  "delay": Js.Nullable.t(float)
};

[@bs.send.pipe : t] external type_ : (string, ~options: typeOptions=?, unit) => Js.Promise.t(unit) = "type";

[@bs.send.pipe : t] external query : (string) => Js.Promise.t(Js.Nullable.t(t)) = "$";