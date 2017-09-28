module RR = ReasonReact;

module RD = ReactDOMRe;

module Timer = Timer;

module Click = {
  let comp = RR.statelessComponent "Click";
  let make ::_message _children => {
    ...comp,
    render: fun _self => <div> <span> (RR.stringToElement "hello") </span> <Timer.Clock /> </div>
  };
};

RD.renderToElementWithId <Click _message="hello" /> "mount-point";
