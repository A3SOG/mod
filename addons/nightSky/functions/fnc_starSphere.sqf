addMissionEventHandler ["Draw3D", {
	private _particles = (-1 allObjects 3);
	_particles apply {
		if (
			getModelInfo _x#0 == "starmap_milky_4k.p3d" or
			getModelInfo _x#0 == "starmap_stars_4k.p3d" or
			getModelInfo _x#0 == "starmap_milky_4k_5.p3d" or
			getModelInfo _x#0 == "starmap_stars_4k_5.p3d"
		) then {
			deleteVehicle _x;
		};
	};

	private _nearHouses = nearestTerrainObjects [positionCameraToWorld [0,0,0],["HOUSE","LIGHTHOUSE"],750,false,true];
	private _coef2 = (((1.5-moonPhase date)^2) * ((getLighting#1) min 1000)^4);
	private _coef = (((((10/_coef2)/((count _nearHouses) max 1)) max 0.1)^0.8));
	_coef = (_coef/2 min 100) ;

	if (SOG_SSP_brightness != -1) then {
		_coef = SOG_SSP_brightness ;
	};

	private _latitude = -(getNumber (configFile >> "CfgWorlds" >> worldName >> "latitude"));
	private _starRot = - (dayTime/24*360) - (dateToNumber date*360);

	for "_i" from 1 to (_coef mod 15) do {
		drop [ 
			["\z\sog_mod\addons\nightSky\item\starmap_milky_4k.p3d", 1, 0, 1, 0], 
			"", "SpaceObject", 1, diag_deltaTime * accTime * 5, 
			positionCameraToWorld [0,0,viewDistance*0.01], 
			[0,0,0], 
			0, 1.277,1, 0, [viewDistance*0.95], 
			[[1,1,1,1]], 
			[1], 
			0, 0, 
			"", "", 
			nil,0,
			false,-1,
			[],
			[
				[
					0,
					cos _latitude,
					sin _latitude
				],
				[
					(cos _starRot * -1),
					(sin _starRot * sin _latitude * -1),
					(sin _starRot * cos _latitude)
				]
			]
		];

		drop [ 
			["\z\sog_mod\addons\nightSky\item\starmap_stars_4k.p3d", 1, 0, 1, 0], 
			"", "SpaceObject", 1, diag_deltaTime * accTime * 5, 
			positionCameraToWorld [0,0,viewDistance*0.01], 
			[0,0,0], 
			0, 1.277,1, 0, [viewDistance*0.95], 
			[[1,1,1,1]], 
			[1], 
			0, 0, 
			"", "", 
			nil,0,
			false,-1,
			[],
			[
				[
					0,
					cos _latitude,
					sin _latitude
				],
				[
					(cos _starRot * -1),
					(sin _starRot * sin _latitude * -1),
					(sin _starRot * cos _latitude)
				]
			]
		];
	};
	for "_i" from 15 to _coef step 15 do {
		drop [ 
			["\z\sog_mod\addons\nightSky\item\starmap_milky_4k_5.p3d", 1, 0, 1, 0], 
			"", "SpaceObject", 1, diag_deltaTime * accTime * 5, 
			positionCameraToWorld [0,0,viewDistance*0.01], 
			[0,0,0], 
			0, 1.277,1, 0, [viewDistance*0.95], 
			[[1,1,1,1]], 
			[1], 
			0, 0, 
			"", "", 
			nil,0,
			false,-1,
			[],
			[
				[
					0,
					cos _latitude,
					sin _latitude
				],
				[
					(cos _starRot * -1),
					(sin _starRot * sin _latitude * -1),
					(sin _starRot * cos _latitude)
				]
			]
		];

		drop [ 
			["\z\sog_mod\addons\nightSky\item\starmap_stars_4k_5.p3d", 1, 0, 1, 0], 
			"", "SpaceObject", 1, diag_deltaTime * accTime * 5, 
			positionCameraToWorld [0,0,viewDistance*0.01], 
			[0,0,0], 
			0, 1.277,1, 0, [viewDistance*0.95], 
			[[1,1,1,1]], 
			[1], 
			0, 0, 
			"", "", 
			nil,0,
			false,-1,
			[],
			[
				[
					0,
					cos _latitude,
					sin _latitude
				],
				[
					(cos _starRot * -1),
					(sin _starRot * sin _latitude * -1),
					(sin _starRot * cos _latitude)
				]
			]
		];
	};
}];