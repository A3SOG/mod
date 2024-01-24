_trg = createTrigger ["EmptyDetector", getPos player];
_trg setTriggerArea [0, 0, 0, false];
_trg setTriggerActivation ["NONE", "PRESENT", false];
// TOWAIT Arma 3 v2.16 focusOn
// _trg setTriggerStatements ["true", "0 = 0 spawn { waitUntil { switch (currentVisionMode focusOn) do { case 1: { private _coef = (1 - moonPhase date) * (1 - sunOrMoon); sog_ssp_brightness = 1000 * _coef; }; case 2: { sog_ssp_brightness = 0; }; default { sog_ssp_brightness = nil; }; }; false; }; };", ""];
_trg setTriggerStatements ["true", "0 = 0 spawn { waitUntil { switch (currentVisionMode player) do { case 1: { private _coef = (1 - moonPhase date) * (1 - sunOrMoon); sog_ssp_brightness = 1000 * _coef; }; case 2: { sog_ssp_brightness = 0; }; default { sog_ssp_brightness = nil; }; }; false; }; };", ""];