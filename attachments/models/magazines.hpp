// 5.56 Magazines
class jca_mag_556_aceax
{
	label = "5.56 mm 30rnd";
	options[] = {"camo","style","tracerType","tracerColor"};
	class camo: JCA_colorBase{};
	class style {
		label = "Magazine Pattern";
		values[] = {"STANAG","PMAG","EMAG"};
		changeingame = 0;
		alwaysSelectable = 0;
	};
	class tracerType {
		label = "Tracer Type";
		values[] = {"None","Reload","Tracer"};
		class None {
			description = "No tracer rounds";
		};
		class Reload {
			description = "Reload tracers";	
		};
		class Tracer {
			description = "Every round"
		};
		changeingame = 0;
		alwaysSelectable = 1;
	};
	class tracerColor {
		label = "Tracer Color";
		values[] = {"Green","Red","Yellow","IR"};
		class Green {
			image = "#(rgb,8,8,3)color(0,1,0,1)";
		};
		class Red {
			image = "#(rgb,8,8,3)color(1,0,0,1)";
		};
		class Yellow {
			image = "#(rgb,8,8,3)color(1,1,0,1)";
		};
		class IR {
			image = "#(rgb,8,8,3)color(0,1,1,1)";
		};
		changeingame = 0;
		alwaysSelectable = 1;
	};
};