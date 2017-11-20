class Hospital : Default
{
	zombieChance = 0.4;
	minRoaming = 2;
	maxRoaming = 4;
	zombieClass[] = {"z_doctor","z_doctor","z_doctor"};
	lootChance = 0.4;
	lootGroup = Hospital;
};

class Land_A_Hospital : Hospital
{
	lootChance = 1;
	lootPos[] = {
		//{0.79834,-1.16895,-7.33966},{-7.2334,-2.63574,-7.33966},{-16.3687,-2.4043,-7.33966},{-12.2847,-3.19434,-7.33966},{4.24268,-3.59375,-7.33966},{-3.2666,-0.925781,-7.33966},{6.85693,-2.75098,-7.33966},{11.0151,-3.9541,-7.33966},{16.8198,-4.71094,-7.33966},{-1.6875,5.47168,-7.4494},{12.7476,0.144531,3.29184},{10.2661,-1.21582,3.29184},
		{17.665,-4.67188,-7.2566},{-20.7139,-1.48047,-7.2566},{-15.6924,8.60889,-7.2566},{-15.6064,1.95557,-6.8266},{-16.2139,2.27051,-7.2566},{-8.68652,4.19189,-3.7576},{14.2441,-3.98535,-3.7576},{21.5693,5.16455,1.19051},{18.3779,2.40869,6.2524},{-15.3359,-1.25439,3.40458},{-20.3252,0.410156,-3.82761}
	};
	lootPosSmall[] = {{9.97754,-0.814453,-7.2566},{-19.6143,1.83887,-7.1666},{-19.6055,1.6084,-6.7866},{-19.583,4.91748,-6.7866},{-19.5576,4.7417,-6.0266},{-22.1982,9.59033,-7.2566},{-12.3379,9.53857,-6.8266},{-3.23438,6.01758,-6.8266},{-13.626,3.04248,-6.0466},{2.86426,-1.68604,-6.6466},{-5.58594,1.38232,-3.7576},{-4.05762,-2.48584,-3.7576},{-11.8428,5.15576,-2.5976},{-5.57129,-3.17236,-2.5976},{-5.65332,5.01416,-2.5976},{-12.5439,-2.33838,-3.6876},{-12.5801,-1.32617,-3.3076},{-12.5928,-1.56299,-2.9276},{-12.6162,-2.24805,-2.1676},{-12.5654,2.4126,-2.5476},{14.8721,3.96875,3.66054},{16.9033,-1.33838,4.01669},{21.3174,4.88916,6.2524},{-4.00488,7.89893,-3.82761}};
	zedPos[] = {{-1.6875,5.47168,-7.4494},{0.79834,-1.16895,-7.33966},{11.0151,-3.9541,-7.33966},{-12.2847,-3.19434,-7.33966},{-16.3687,-2.4043,-7.33966},{16.8198,-4.71094,-7.33966},{-3.2666,-0.925781,-7.33966},{4.24268,-3.59375,-7.33966},{6.85693,-2.75098,-7.33966},{-7.2334,-2.63574,-7.33966},{10.2661,-1.21582,3.29184},{12.7476,0.144531,3.29184}};
};

class MASH : Hospital
{
	maxRoaming = 1;
	zombieClass[] = {"z_soldier","z_soldier_heavy","z_doctor","z_doctor","z_doctor"};
	//lootPos[] = {{1.18213,-1.64844,-1.11786},{0.24707,0.798828,-1.11798}};
	lootPos[] = {{1.18213,-1.65039,-1.17793},{0.24707,0.799316,-1.17803}};
	zedPos[] = {{0.24707,0.798828,-1.11798},{1.18213,-1.64844,-1.11786}};
};

class MASH_EP1 : MASH
{
};

class USMC_WarfareBFieldhHospital : MASH
{
	minRoaming = 1;
	maxRoaming = 3;
	//lootPos[] = {{-3.52246,-5.03906,1.20731},{2.36621,-4.52246,1.20792},{1.39209,-0.420898,1.20752},{1.14258,5.01172,1.20786},{3.7124,1.89746,1.19794}};
	lootPos[] = {{-3.52246,-5.03931,1.14726},{2.36621,-4.52295,1.14786},{1.39063,-0.423096,1.14746},{1.14258,5.00952,1.1478},{3.7124,1.89795,1.14788}};
	zedPos[] = {{3.7124,1.89746,1.19794},{-3.52246,-5.03906,1.20731},{1.39209,-0.420898,1.20752},{1.14258,5.01172,1.20786},{2.36621,-4.52246,1.20792}};
};

class RU_WarfareBFieldhHospital : MASH
{
	lootPos[] = {{-2.66,2.41,1.25},{3.19,-2.2,1.25}};
	zedPos[] = {{-2.66,2.41,1.25},{3.19,-2.2,1.25}};
	lootChance = 0.3;
	minRoaming = 2;
	maxRoaming = 3;
};
//DZE ADDED BELOW
class Land_Barrack2: Hospital
{
	maxRoaming = 1;
	lootChance = 0.4;
	lootPos[] = {
		{ -1.96484,4.15576,-0.689606 },
		{ 1.15381,0.3125,-0.691864 }};
};
