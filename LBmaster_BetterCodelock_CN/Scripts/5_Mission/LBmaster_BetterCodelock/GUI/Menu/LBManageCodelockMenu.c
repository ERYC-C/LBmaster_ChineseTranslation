modded class LBManageCodelockMenu {

	override string GetTooltip(Widget w) {
		if (w == btn_remove_lock) {
			return "#lb_bc_remove_info_modded";
		} else if (w == btn_apply_code) {
			return "#lb_bc_apply_code_info_modded";
		} else if (w == btn_apply_guest) {
			return "#lb_bc_apply_guest_modded";
		} else if (w == edit_guest_uses) {
			return "#lb_bc_guest_uses_modded";
		} else if (w == btn_apply_guest_uses) {
			return "#lb_bc_apply_guest_uses_modded";
		} else if (w == btn_apply) {
			return LBTranslatedString("#lb_bc_apply_role_modded").Get();
		} else if (w == chckbx_requests) {
			return "#lb_bc_request_access_info_modded";
		} else if (w == chckbx_group_access) {
			return "#lb_bc_allow_group_modded";
		} else if (w == btn_transfer) {
			return "#lb_bc_transfer_btn_modded";
		} else if (w == list_players) {
			return "#lb_bc_list_players_modded";
		} else if (w == chckbx_guest_code) {
			return "#lb_bc_toggle_guest_code_modded";
		}
		return super.GetTooltip(w);
	}

}
