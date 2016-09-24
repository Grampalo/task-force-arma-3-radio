  class tf_rt1523g: TFAR_Bag_Base
  {
    author = "Raspu, Gandi, Nkey";
    displayName = "RT-1523G (ASIP)";
    descriptionShort = "RT-1523G (ASIP) long range radio 20km";
    picture = "\task_force_radio_items\rt1523g\rt1523g_icon.paa";
    model="\task_force_radio_items\models\clf_prc117g_ap";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_prc117g_ap_co.paa"};
    maximumLoad = 50;
    mass = 80;
    scope = 2;
    scopeCurator = 2;
    tf_encryptionCode = "tf_west_radio_code";
    tf_dialog = "rt1523g_radio_dialog";
    tf_subtype = "digital_lr";
  };
  class tf_rt1523g_bwmod: tf_rt1523g
  {
    displayName = "RT-1523G (ASIP) BWMOD";
    descriptionShort = "RT-1523G (ASIP) BWMOD long range radio 20km";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_prc117g_bwmod_co.paa"};
  };
  class tf_rt1523g_rhs: tf_rt1523g
  {
    displayName = "RT-1523G (ASIP) RHS";
    descriptionShort = "RT-1523G (ASIP) RHS long range radio 20km";
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_prc117g_rhs_co.paa.paa"};
  };
  class tf_rt1523g_big: tf_rt1523g
  {
    author = "Raspu, Gandi, Nkey";
    displayName = "RT-1523G (ASIP) Big";
    descriptionShort = "RT-1523G (ASIP) Big long range radio 20km";
    maximumLoad = 160;
    mass = 160;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_nicecomm2_nato_multi_co.paa"};
    model="\task_force_radio_items\models\clf_nicecomm2";
  };
  class tf_rt1523g_big_bwmod: tf_rt1523g
  {
    displayName = "RT-1523G (ASIP) Big BWMOD [Flecktarn]";
    descriptionShort = "RT-1523G (ASIP) Big BWMOD long range radio 20km";
    maximumLoad = 160;
    mass = 160;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_nicecomm2_bwmod_co.paa"};
    model="\task_force_radio_items\models\clf_nicecomm2";
  };
  class tf_rt1523g_big_bwmod_tropen: tf_rt1523g_big_bwmod {
	displayName = "RT-1523G (ASIP) Big BWMOD [Tropentarn]";
	hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\jgbtl14_marcbook_bwmod_tropen_co.paa"};
  };
  class tf_rt1523g_big_rhs: tf_rt1523g
  {
    displayName = "RT-1523G (ASIP) Big RHS";
    descriptionShort = "RT-1523G (ASIP) Big RHS long range radio 20km";
    maximumLoad = 160;
    mass = 160;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\clf_nicecomm2_rhs_co.paa"};
    model="\task_force_radio_items\models\clf_nicecomm2";
  };
  class tf_rt1523g_sage: tf_rt1523g
  {
    displayName = "RT-1523G (ASIP) Sage";
    descriptionShort = "RT-1523G (ASIP) Sage long range radio 20km";
    maximumLoad = 100;
    mass = 120;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\camo\backpack_sage_co.paa"};
    model = "\task_force_radio_items\models\TFR_BACKPACK";
  };
  class tf_rt1523g_green: tf_rt1523g
  {
    displayName = "RT-1523G (ASIP) Green";
    descriptionShort = "RT-1523G (ASIP) Green long range radio 20km";
    maximumLoad = 100;
    mass = 120;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\camo\backpack_green_co.paa"};
    model = "\task_force_radio_items\models\TFR_BACKPACK";
  };
  class tf_rt1523g_fabric: tf_rt1523g
  {
    displayName = "RT-1523G (ASIP) Fabric";
    descriptionShort = "RT-1523G (ASIP) Fabric long range radio 20km";
    maximumLoad = 100;
    mass = 120;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\camo\backpack_fabric_co.paa"};
    model = "\task_force_radio_items\models\TFR_BACKPACK";
  };
  class tf_rt1523g_black: tf_rt1523g
  {
    displayName = "RT-1523G (ASIP) Black";
    descriptionShort = "RT-1523G (ASIP) Black long range radio 20km";
    maximumLoad = 100;
    mass = 120;
    hiddenSelections[] = {"camo"};
    hiddenSelectionsTextures[] = {"\task_force_radio_items\models\data\camo\backpack_black_co.paa"};
    model = "\task_force_radio_items\models\TFR_BACKPACK";
  };