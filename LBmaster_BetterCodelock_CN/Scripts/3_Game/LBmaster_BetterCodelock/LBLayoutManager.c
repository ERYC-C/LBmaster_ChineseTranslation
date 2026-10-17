modded class LBLayoutManager {

	override string GetLayoutPathOriginal(string name) {
		if (name == "LBManageCodelockMenu") return "LBmaster_BetterCodelock_CN/GUI/Layouts/Menu/manage_codelock_player.layout";
		return super.GetLayoutPathOriginal(name);
	}

}