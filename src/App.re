let component = ReasonReact.statelessComponent(__MODULE__);

let make = (~name, _children) => {
  ...component,
  render: _self => {
    let (counter, setCounter) = ReactHooks.useState(0);
    <div onClick={_event => setCounter(. counter + 1)}>
      {ReasonReact.string(
         "Hello! " ++ name ++ ": " ++ string_of_int(counter),
       )}
    </div>;
  },
};
