module Clock = {
  type state = {count: int};
  type action =
    | Click;
  let comp = ReasonReact.reducerComponent "MyComp";
  let make _children => {
    ...comp,
    initialState: fun () => {count: 0},
    reducer: fun action state =>
      switch action {
      | Click => ReasonReact.Update {count: state.count + 1}
      },
    render: fun self =>
      <div onClick=(self.reduce (fun _event => Click))>
        (ReasonReact.stringToElement (string_of_int self.state.count))
      </div>
  };
};

ReactDOMRe.renderToElementWithId <Clock /> "mount-point";
