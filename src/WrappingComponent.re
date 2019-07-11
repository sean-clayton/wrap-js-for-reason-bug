[@bs.module]
external reactClass: ReasonReact.reactClass = "./WrappedComponent";

[@bs.deriving abstract]
type jsProps = {
  propA: string,
  propB: string,
};

let make = (~propA, ~propB, children) =>
  ReasonReact.wrapJsForReason(
    ~reactClass,
    ~props=jsProps(~propA, ~propB),
    children,
  );
