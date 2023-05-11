type action;

type navigateParams;

[@bs.obj]
external navigateParams: (~routeName: string, ~params: {..}=?, unit) => navigateParams = "";

type backParams;

[@bs.obj]
external backParams: (~key: string=?, ~immediate: bool=?, unit) => navigateParams = "";

[@bs.module "react-navigation"] [@bs.scope "NavigationActions"]
external navigate: navigateParams => action = "navigate";

[@bs.module "react-navigation"] [@bs.scope "NavigationActions"]
external back: backParams => action = "back";
