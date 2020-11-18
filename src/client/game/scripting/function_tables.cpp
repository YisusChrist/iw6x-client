#include <std_include.hpp>

// This file has been generated.
// Do not touch!

namespace scripting
{
	std::unordered_map<std::string, unsigned> function_map =
	{
		{"activateClientExploder", 529},
		{"addTestClient", 352},
		{"allClientsPrint", 355},
		{"angleClamp180", 221},
		{"angleClamp360", 220},
		{"anglesToForward", 268},
		{"animHasNotetrack", 96},
		{"averageNormal", 433},
		{"badPlaceBrush", 33},
		{"badPlaceCylinder", 31},
		{"badPlaceDelete", 30},
		{"badPlaceGlobal", 508},
		{"blockTeamRadar", 285},
		{"botAutoConnectEnabled", 479},
		{"botFlagMemoryEvents", 484},
		{"botGetClosestNavigablePoint", 491},
		{"botGetMemoryEvents", 478},
		{"botGetTeamDifficulty", 587},
		{"botGetTeamLimit", 585},
		{"botMemoryFlags", 483},
		{"botSentientSwap", 486},
		{"botZoneGetCount", 480},
		{"botZoneGetIndoorPercent", 485},
		{"botZoneNearestCount", 482},
		{"botZoneSetTeam", 481},
		{"bulletTracePassed", 129},
		{"calcCSplineCorridor", 568},
		{"calcCSplinePosition", 566},
		{"calcCSplineTangent", 567},
		{"calculateStartOrientation", 555},
		{"canSpawnTurret", 24},
		{"capsuleTracePassed", 604},
		{"clearMatchData", 292},
		{"clientAnnouncement", 333},
		{"connectNodePair", 512},
		{"createThreatBiasGroup", 249},
		{"disconnectNodePair", 511},
		{"distance2DSquared", 527},
		{"distanceSquared", 226},
		{"getActiveClientCount", 593},
		{"getActiveCount", 473},
		{"getAllNodes", 472},
		{"getAngleDelta", 135},
		{"getAngleDelta3D", 528},
		{"getAnimLength", 95},
		{"getArray", 476},
		{"getBuildNumber", 301},
		{"getBuildVersion", 300},
		{"getCSplineCount", 556},
		{"getCSplineLength", 558},
		{"getCSplinePointCorridorDims", 563},
		{"getCSplinePointCount", 557},
		{"getCSplinePointDistToNextPoint", 565},
		{"getCSplinePointId", 559},
		{"getCSplinePointLabel", 560},
		{"getCSplinePointPosition", 562},
		{"getCSplinePointTangent", 564},
		{"getCSplinePointTension", 561},
		{"getClientMatchData", 297},
		{"getClosestNodeInSight", 187},
		{"getCounterTotal", 242},
		{"getDvarVector", 57},
		{"getEnemySquadData", 542},
		{"getEnemySquadDogType", 603},
		{"getEntChannelName", 456},
		{"getFirstArrayKey", 448},
		{"getGlassArray", 450},
		{"getGlassOrigin", 451},
		{"getGroundPosition", 133},
		{"getIndexForLuiNCString", 195},
		{"getLinkedNodes", 510},
		{"getMapCustomField", 239},
		{"getMatchRulesData", 303},
		{"getMissileOwner", 429},
		{"getNextArrayKey", 421},
		{"getNode", 470},
		{"getNodeArray", 471},
		{"getNodesInRadius", 185},
		{"getNodesInRadiusSorted", 186},
		{"getNodesInTrigger", 492},
		{"getNodesOnPath", 494},
		{"getNotetrackTimes", 97},
		{"getPlaylistID", 592},
		{"getPlaylistVersion", 591},
		{"getPredictedEntityPosition", 571},
		{"getScriptableArray", 544},
		{"getSpawnerArray", 434},
		{"getSquadAssaultELO", 588},
		{"getSquadAssaultEnemyPrestige", 599},
		{"getSquadAssaultSquadIndex", 595},
		{"getStartAngles", 106},
		{"getStartOrigin", 105},
		{"getSystemTime", 302},
		{"getTeamPlayersAlive", 339},
		{"getTeamRadarStrength", 365},
		{"getThreatBias", 251},
		{"getUAVStrengthLevelNeutral", 598},
		{"getUAVStrengthLevelShowEnemyFastSweep", 283},
		{"getUAVStrengthMax", 284},
		{"getUAVStrengthMin", 366},
		{"getWeaponArray", 1},
		{"getWeaponAttachmentDisplayNames", 91},
		{"getWeaponAttachments", 90},
		{"getWeaponBaseName", 89},
		{"getWeaponCamoName", 92},
		{"getWeaponDisplayName", 88},
		{"getWeaponExplosionRadius", 503},
		{"getWeaponFlashTagname", 431},
		{"getWeaponHideTags", 94},
		{"getWeaponModel", 60},
		{"getWeaponReticleName", 93},
		{"getZoneNearest", 496},
		{"getZoneNodeForIndex", 502},
		{"getZoneNodesByDist", 501},
		{"glassRadiusDamage", 375},
		{"incrementCounter", 241},
		{"isDedicatedServer", 590},
		{"isEnemyTeam", 255},
		{"isExplosiveDamageMOD", 372},
		{"isGlassDestroyed", 452},
		{"isPlayerNumber", 410},
		{"isPointInVolume", 537},
		{"isTeamRadarBlocked", 287},
		{"isUsingMatchRulesData", 304},
		{"isValidGameType", 358},
		{"isValidMissile", 45},
		{"isWeaponClipOnly", 467},
		{"isWeaponDetonationTimed", 468},
		{"length2DSquared", 230},
		{"lookupSoundLength", 543},
		{"markDangerousNodes", 504},
		{"markDangerousNodesInTrigger", 505},
		{"missileCreateAttractorEnt", 399},
		{"missileCreateAttractorOrigin", 400},
		{"missileCreateRepulsorEnt", 401},
		{"missileCreateRepulsorOrigin", 402},
		{"missileDeleteAttractor", 403},
		{"newClientHudElem", 406},
		{"newHudElem", 405},
		{"newTeamHudElem", 407},
		{"nodeExposedToSky", 506},
		{"objectiveCurrent", 462},
		{"objectiveDelete", 458},
		{"objectiveIcon", 460},
		{"objectiveOnEntity", 378},
		{"objectiveOnEntityWithRotation", 379},
		{"objectivePlayer", 381},
		{"objectivePlayerEnemyTeam", 383},
		{"objectivePlayerMaskHideFrom", 385},
		{"objectivePlayerMaskHideFromAll", 384},
		{"objectivePlayerMaskShowTo", 387},
		{"objectivePlayerMaskShowToAll", 386},
		{"objectivePlayerTeam", 382},
		{"objectivePosition", 461},
		{"objectiveState", 459},
		{"objectiveTeam", 380},
		{"physicsExplosionCylinder", 368},
		{"physicsExplosionSphere", 367},
		{"physicsRadiusJitter", 370},
		{"physicsRadiusJolt", 369},
		{"playCinematicForAll", 600},
		{"playFXOnTagForClients", 330},
		{"playRumbleLoopOnPosition", 436},
		{"playRumbleOnPosition", 435},
		{"playSoundAtPos", 404},
		{"playerPhysicsTrace", 132},
		{"pointOnSegmentNearestToPoint", 223},
		{"positionWouldTelefrag", 343},
		{"precache", 474},
		{"precacheHeadIcon", 347},
		{"precacheLeaderboards", 321},
		{"precacheLocationSelector", 320},
		{"precacheMaterial", 316},
		{"precacheMiniMapIcon", 348},
		{"precacheMpAnim", 349},
		{"precacheRumble", 319},
		{"precacheShellShock", 314},
		{"precacheSound", 518},
		{"precacheStatusIcon", 346},
		{"precacheString", 317},
		{"precacheTurret", 0},
		{"preloadCinematicForAll", 601},
		{"queueDialog", 578},
		{"randomFloatRange", 168},
		{"randomIntRange", 167},
		{"readOnly", 584},
		{"rotatePointAroundVector", 273},
		{"rotateVectorInverted", 554},
		{"sendClientMatchData", 299},
		{"sendMatchData", 291},
		{"setAC130Ambience", 238},
		{"setClientMatchData", 296},
		{"setClientMatchDataDef", 298},
		{"setClientNameMode", 337},
		{"setDvarIfUninitialized", 53},
		{"setDynamicDvar", 50},
		{"setExponentialFog", 371},
		{"setGameEndTime", 308},
		{"setIgnoreMeGroup", 254},
		{"setLevelDopplerPreset", 546},
		{"setMatchClientIP", 294},
		{"setMatchDataDef", 293},
		{"setMatchDataID", 295},
		{"setNoJIPScore", 569},
		{"setPlayerIgnoreRadiusDamage", 374},
		{"setPlayerTeamRank", 360},
		{"setSlowMotion", 164},
		{"setTeamRadarStrength", 364},
		{"setThermalBodyMaterial", 446},
		{"setThreatBias", 252},
		{"setThreatBiasAgainstAll", 253},
		{"setWinningTeam", 331},
		{"sightTracePassed", 130},
		{"sortByDistance", 422},
		{"soundExists", 438},
		{"spawn", 475},
		{"spawnFXForClient", 586},
		{"spawnHelicopter", 396},
		{"spawnSightTrace", 240},
		{"stopAllRumbles", 437},
		{"stopCinematicForAll", 602},
		{"tableLookupByRow", 426},
		{"tableLookupIString", 425},
		{"tableLookupRowNum", 427},
		{"threatBiasGroupExists", 250},
		{"trajectoryCalculateExitAngle", 532},
		{"trajectoryCalculateInitialVelocity", 530},
		{"trajectoryCalculateMinimumVelocity", 531},
		{"trajectoryCanAttemptAccurateJump", 535},
		{"trajectoryComputeDeltaHeightAtTime", 534},
		{"trajectoryEstimateDesiredInAirTime", 533},
		{"triggerPortableRadarPing", 583},
		{"unblockTeamRadar", 286},
		{"updateClientNames", 338},
		{"vectorFromLineToPoint", 222},
		{"vectorNormalize", 262},
		{"vectorToAngles", 263},
		{"visionSetMissilecam", 311},
		{"visionSetNaked", 309},
		{"visionSetNight", 310},
		{"visionSetPostApply", 596},
		{"visionSetThermal", 235},
		{"weaponAltWeaponName", 466},
		{"weaponBurstCount", 418},
		{"weaponClipSize", 413},
		{"weaponFireTime", 412},
		{"weaponHasThermalScope", 469},
		{"weaponInheritsPerks", 417},
		{"weaponInventoryType", 463},
		{"weaponIsBoltAction", 416},
		{"weaponIsSemiAuto", 415},
		{"weaponMaxAmmo", 465},
		{"weaponStartAmmo", 464},
		{"worldEntNumber", 341},
	};

	std::unordered_map<std::string, unsigned> method_map =
	{
		{"aIPhysicsTrace", 33713},
		{"aIPhysicsTracePassed", 33714},
		{"addPitch", 33454},
		{"addRoll", 33456},
		{"addYaw", 33455},
		{"adsButtonPressed", 33586},
		{"agentCanSeeSentient", 33663},
		{"aliensCheckIsItemPurchased", 33833},
		{"aliensCheckIsRelicEnabled", 33836},
		{"aliensCheckIsUpgradeEnabled", 33835},
		{"aliensSetHasCraftedItem", 33834},
		{"allowADS", 33526},
		{"allowJump", 33527},
		{"allowSpectateTeam", 33385},
		{"allowSprint", 33528},
		{"anyAmmoForWeaponModes", 33520},
		{"attach", 32792},
		{"attachPath", 33394},
		{"attachShieldModel", 32793},
		{"attackButtonPressed", 33585},
		{"autoSpotOverlayOff", 32949},
		{"autoSpotOverlayOn", 32948},
		{"autoboltMissileEffects", 33811},
		{"beginLocationSelection", 33550},
		{"beginMelee", 33677},
		{"botCanSeeEntity", 33631},
		{"botClearButton", 33647},
		{"botClearScriptEnemy", 33608},
		{"botClearScriptGoal", 33606},
		{"botFindNodeRandom", 33617},
		{"botFirstAvailableGrenade", 33743},
		{"botGetDifficulty", 33627},
		{"botGetDifficultySetting", 33643},
		{"botGetFovDot", 33635},
		{"botGetImperfectEnemyInfo", 33639},
		{"botGetNodesOnPath", 33632},
		{"botGetPathDist", 33644},
		{"botGetPersonality", 33622},
		{"botGetScriptGoal", 33610},
		{"botGetScriptGoalNode", 33638},
		{"botGetScriptGoalRadius", 33611},
		{"botGetScriptGoalType", 33613},
		{"botGetScriptGoalYaw", 33612},
		{"botGetWorldClosestEdge", 33628},
		{"botGetWorldSize", 33615},
		{"botHasScriptGoal", 33621},
		{"botIsRandomized", 33645},
		{"botLookAtPoint", 33629},
		{"botMemoryEvent", 33618},
		{"botNodeAvailable", 33616},
		{"botNodePick", 33620},
		{"botNodePickMultiple", 33633},
		{"botNodeScoreMultiple", 33648},
		{"botPredictEnemyCampSpots", 33795},
		{"botPredictSeePoint", 33630},
		{"botPressButton", 33646},
		{"botPursuingScriptGoal", 33637},
		{"botSetAttacker", 33609},
		{"botSetAwareness", 33636},
		{"botSetDifficulty", 33626},
		{"botSetDifficultySetting", 33642},
		{"botSetFlag", 33601},
		{"botSetPathingStyle", 33641},
		{"botSetPersonality", 33625},
		{"botSetScriptEnemy", 33607},
		{"botSetScriptGoal", 33604},
		{"botSetScriptGoalNode", 33605},
		{"botSetScriptMove", 33603},
		{"botSetStance", 33602},
		{"botThrowGrenade", 33623},
		{"buttonPressedDEVONLY", 33346},
		{"cameraLinkTo", 33245},
		{"cameraUnlink", 33246},
		{"canMantle", 33490},
		{"canPlayerPlaceSentry", 33478},
		{"canPlayerPlaceTank", 33479},
		{"canSpawnTestClient", 33766},
		{"canTurretTargetPoint", 33370},
		{"cancelMantle", 33797},
		{"changeFontScaleOverTime", 32904},
		{"claimNode", 33682},
		{"clearGoalYaw", 33363},
		{"clearLookAtEnt", 33372},
		{"clearPerks", 33437},
		{"clearPortableRadar", 32780},
		{"clearScrambler", 32779},
		{"clearTargetEnt", 32965},
		{"clearTargetEntity", 33022},
		{"clearTargetYaw", 33365},
		{"clearTurretTargetEnt", 33369},
		{"clientClaimTrigger", 32783},
		{"clientReleaseTrigger", 32784},
		{"clientSpawnSightTracePassed", 33525},
		{"cloneAgent", 33662},
		{"cloneBrushModelToScriptModel", 33389},
		{"clonePlayer", 33383},
		{"closeInGameMenu", 33378},
		{"closeMenu", 33562},
		{"closePopupMenu", 33560},
		{"connectNode", 32857},
		{"connectPaths", 32855},
		{"controlsLinkTo", 33275},
		{"controlsUnlink", 33276},
		{"crash", 33317},
		{"damageConeTrace", 33234},
		{"deactivateChannelVolumes", 33513},
		{"delete", 32937},
		{"destroy", 32901},
		{"detach", 32806},
		{"detachAll", 32809},
		{"detachShieldModel", 32807},
		{"detonate", 33233},
		{"disableAimAssist", 33231},
		{"disableAutoReload", 33791},
		{"disableCrashing", 33319},
		{"disableForceThirdPersonWhenFollowing", 33600},
		{"disableGrenadeTouchDamage", 33199},
		{"disableMissileBoosting", 33764},
		{"disableMissileStick", 33812},
		{"disableOffhandWeapons", 33554},
		{"disablePlayerUse", 32776},
		{"disableUsability", 33565},
		{"disableWeaponPickup", 33471},
		{"disableWeaponSwitch", 33556},
		{"disableWeapons", 33552},
		{"disconnectNode", 32856},
		{"disconnectPaths", 32854},
		{"doAnimLerp", 33680},
		{"doAnimRelative", 33780},
		{"doDamage", 32846},
		{"doSpawn", 33315},
		{"doTrajectory", 33679},
		{"doesNodeAllowStance", 32818},
		{"dontInterpolate", 32911},
		{"driveVehicleAndControlTurret", 33286},
		{"driveVehicleAndControlTurretOff", 33287},
		{"dropItem", 33350},
		{"dropScavengerBag", 33351},
		{"emissiveBlend", 33749},
		{"enableAimAssist", 33200},
		{"enableAnimState", 33693},
		{"enableAutoReload", 33792},
		{"enableCrashing", 33320},
		{"enableGrenadeTouchDamage", 33198},
		{"enableLinkTo", 32872},
		{"enableMissileBoosting", 33765},
		{"enableMissileStick", 33813},
		{"enableOffhandWeapons", 33555},
		{"enablePlayerUse", 32775},
		{"enableUsability", 33566},
		{"enableWeaponPickup", 33472},
		{"enableWeaponSwitch", 33557},
		{"enableWeapons", 33553},
		{"endLocationSelection", 33551},
		{"entityRadiusDamage", 33232},
		{"entityWillNeverChange", 32983},
		{"fadeOutShellShock", 33152},
		{"fadeOverTime", 32897},
		{"finishAgentDamage", 33660},
		{"finishDamage", 33399},
		{"finishPlayerDamage", 33376},
		{"fireWeapon", 33374},
		{"forceMantle", 33491},
		{"forceThirdPersonWhenFollowing", 33599},
		{"forceUseHintOff", 32980},
		{"forceUseHintOn", 32979},
		{"fragButtonPressed", 33506},
		{"freeEntitySentient", 33075},
		{"freeVehicle", 33355},
		{"freezeControls", 33564},
		{"getAmmoCount", 33146},
		{"getAngles", 33583},
		{"getAnimEntry", 33695},
		{"getAnimEntryAlias", 33697},
		{"getAnimEntryCount", 33698},
		{"getAnimEntryName", 33696},
		{"getAttachIgnoreCollision", 32836},
		{"getAttachModelName", 32811},
		{"getAttachPos", 33395},
		{"getAttachSize", 32810},
		{"getAttachTagName", 32812},
		{"getBarrelSpinRate", 32989},
		{"getBodyVelocity", 33405},
		{"getCaCPlayerData", 33343},
		{"getClanIdHigh", 33423},
		{"getClanIdLow", 33424},
		{"getClanWarsBonusForCurrentPlaylist", 33821},
		{"getClosestEnemySqDist", 33137},
		{"getCommonPlayerData", 33311},
		{"getCommonPlayerDataReservedInt", 33828},
		{"getCoopPlayerData", 33310},
		{"getCoopPlayerDataReservedInt", 33829},
		{"getCorpseAnim", 32790},
		{"getCorpseEntity", 33784},
		{"getCurrentOffhand", 33543},
		{"getCurrentPrimaryWeapon", 33542},
		{"getCurrentWeapon", 33541},
		{"getCurrentWeaponClipAmmo", 33508},
		{"getCustomizationBody", 33752},
		{"getCustomizationHead", 33753},
		{"getCustomizationViewmodel", 33754},
		{"getEnemyInfo", 33118},
		{"getEnemySqDist", 33136},
		{"getEntityNumber", 33196},
		{"getEntityVelocity", 33197},
		{"getEye", 32929},
		{"getFireteamMembers", 33440},
		{"getFractionMaxAmmo", 33576},
		{"getFractionStartAmmo", 33575},
		{"getGoalPos", 33666},
		{"getGoalSpeedMPH", 33411},
		{"getGuid", 33386},
		{"getHighestNodeStance", 32817},
		{"getHybridScopeState", 33804},
		{"getIsTouchingEntities", 32931},
		{"getJoinType", 33831},
		{"getLightIntensity", 33241},
		{"getLinkedChildren", 33794},
		{"getLinkedParent", 33720},
		{"getLocalPlayerProfileData", 33289},
		{"getLookaheadDir", 33708},
		{"getMLGSpectatorTeam", 33827},
		{"getMaxTurnSpeed", 33676},
		{"getMode", 32869},
		{"getMovingPlatformParent", 33721},
		{"getNearestNode", 33656},
		{"getNegotiationEndNode", 33177},
		{"getNegotiationNextNode", 33178},
		{"getNegotiationStartNode", 33176},
		{"getNodeNumber", 33649},
		{"getNormalHealth", 32888},
		{"getNormalizedCameraMovement", 33537},
		{"getNormalizedMovement", 33511},
		{"getOffhandPrimaryClass", 33593},
		{"getOffhandSecondaryClass", 33549},
		{"getOrigin", 32914},
		{"getPathGoalPos", 33709},
		{"getPlayerData", 33307},
		{"getPlayerKnifeModel", 33487},
		{"getPlayersSightingMe", 33504},
		{"getPointInBounds", 33297},
		{"getPrivatePlayerData", 33309},
		{"getRankedPlayerData", 33308},
		{"getRankedPlayerDataReservedInt", 33822},
		{"getRestedTime", 32787},
		{"getSightedPlayers", 33503},
		{"getSpectatingPlayer", 33426},
		{"getSpeed", 33403},
		{"getStance", 33143},
		{"getSteering", 33406},
		{"getTagAngles", 33148},
		{"getTagOrigin", 33147},
		{"getThirdPersonCrosshairOffset", 33470},
		{"getThreatBiasGroup", 33139},
		{"getThrottle", 33407},
		{"getTurretOwner", 32993},
		{"getTurretTarget", 33023},
		{"getUcdIdLow", 33422},
		{"getVehicleOwner", 33357},
		{"getVelocity", 33581},
		{"getViewHeight", 33510},
		{"getViewKickScale", 33534},
		{"getViewOrigin", 33806},
		{"getViewmodel", 33505},
		{"getWeaponAmmoClip", 33518},
		{"getWeaponAmmoStock", 33519},
		{"getWeaponHudIconOverride", 33303},
		{"getWeaponsList", 33477},
		{"getWeaponsListAll", 33535},
		{"getWeaponsListExclusives", 33476},
		{"getWeaponsListItems", 33475},
		{"getWeaponsListOffhands", 33474},
		{"getWeaponsListPrimaries", 33536},
		{"getWheelSurface", 33356},
		{"getXuid", 33420},
		{"giveMaxAmmo", 33574},
		{"giveStartAmmo", 33573},
		{"giveWeapon", 33538},
		{"gravityMove", 33447},
		{"hasFemaleCustomizationModel", 33798},
		{"hasLoadedCustomizationPlayerView", 33777},
		{"hasPerk", 33436},
		{"hasWeapon", 33544},
		{"heliSetDamageStage", 32770},
		{"heliSetGoal", 33366},
		{"hide", 32849},
		{"hideallparts", 32839},
		{"hidepart", 32837},
		{"hidepartAllInstances", 32838},
		{"hudOutlineDisable", 33735},
		{"hudOutlineDisableForClient", 33773},
		{"hudOutlineDisableForClients", 33775},
		{"hudOutlineEnable", 33734},
		{"hudOutlineEnableForClient", 33772},
		{"hudOutlineEnableForClients", 33774},
		{"iclientprintln", 33379},
		{"iclientprintlnbold", 33380},
		{"isDualWielding", 33577},
		{"isFiringTurret", 32986},
		{"isFiringVehicleTurret", 33283},
		{"isHost", 33425},
		{"isItemUnlocked", 33306},
		{"isLeaning", 33816},
		{"isLinked", 32871},
		{"isMLGSpectator", 33790},
		{"isMantling", 33492},
		{"isMeleeing", 33063},
		{"isOffhandWeaponReadyToThrow", 33815},
		{"isOnGround", 33589},
		{"isOnLadder", 32789},
		{"isPhysVeh", 33316},
		{"isRagdoll", 33243},
		{"isReloading", 33578},
		{"isSighted", 33502},
		{"isSplitscreenPlayer", 33473},
		{"isSplitscreenPlayerPrimary", 33500},
		{"isSprinting", 33700},
		{"isSwitchingWeapon", 33579},
		{"isTalking", 33384},
		{"isThrowingGrenade", 33061},
		{"isTouching", 32930},
		{"isTurretReady", 33313},
		{"isUsingOnlineDataOffline", 32786},
		{"isUsingTurret", 33590},
		{"itemWeaponSetAmmo", 33145},
		{"joltBody", 33354},
		{"jumpButtonPressed", 33706},
		{"kCRegWeaponForFXRemoval", 33467},
		{"laserAltViewOff", 32942},
		{"laserAltViewOn", 32941},
		{"laserOff", 32940},
		{"laserOn", 32939},
		{"lastKnownPos", 33212},
		{"lastKnownTime", 33211},
		{"lastStandRevive", 33468},
		{"launch", 33318},
		{"lerpViewAngleClamp", 32923},
		{"linkTo", 32842},
		{"linkToBlendToTag", 32843},
		{"linkWaypointToTargetWithOffset", 33719},
		{"loadCustomizationPlayerView", 33768},
		{"localToWorldCoords", 33195},
		{"logMatchDataDeath", 33787},
		{"logMatchDataLife", 33786},
		{"makeCollideWithItemClip", 33817},
		{"makeEntityNoMeleeTarget", 33657},
		{"makeEntitySentient", 33074},
		{"makeHard", 32982},
		{"makePortableRadar", 32778},
		{"makeScrambler", 32777},
		{"makeSoft", 32981},
		{"makeTurretInoperable", 33073},
		{"makeTurretOperable", 33072},
		{"makeTurretSolid", 33071},
		{"makeUnusable", 32953},
		{"makeUsable", 32952},
		{"makeVehicleNotCollideWithPlayers", 33727},
		{"makeVehicleSolidCapsule", 33277},
		{"makeVehicleSolidSphere", 33279},
		{"markForEyesOn", 33501},
		{"meleeButtonPressed", 33587},
		{"missileClearTarget", 33238},
		{"missileSetFlightmodeDirect", 33239},
		{"missileSetFlightmodeTop", 33240},
		{"missileSetTargetEnt", 33236},
		{"missileSetTargetPos", 33237},
		{"motionBlurHQDisable", 33737},
		{"motionBlurHQEnable", 33736},
		{"moveOverTime", 32899},
		{"moveShieldModel", 32808},
		{"moveSlide", 33448},
		{"moveTo", 33443},
		{"moveX", 33444},
		{"moveY", 33445},
		{"moveZ", 33446},
		{"nearGoalNotifyDist", 33360},
		{"nodeIsDisconnected", 33655},
		{"notSolid", 33460},
		{"notifyOnPlayerCommand", 33489},
		{"openMenu", 33561},
		{"openPopupMenu", 33558},
		{"openPopupMenuNoMouse", 33559},
		{"physicsGetAngSpeed", 33763},
		{"physicsGetAngVel", 33762},
		{"physicsGetLinSpeed", 33761},
		{"physicsGetLinVel", 33760},
		{"physicsLaunchClient", 33463},
		{"physicsLaunchServer", 33387},
		{"physicsLaunchServerItem", 33388},
		{"physicsSetMaxAngVel", 33759},
		{"physicsSetMaxLinVel", 33758},
		{"pingPlayer", 33345},
		{"playFX", 33493},
		{"playLocalSound", 33514},
		{"playLoopSound", 32883},
		{"playRumbleLoopOnEntity", 32935},
		{"playRumbleOnEntity", 32934},
		{"playSound", 32919},
		{"playSoundOnMovingEnt", 33796},
		{"playSoundToPlayer", 32772},
		{"playSoundToTeam", 32771},
		{"playerADS", 33588},
		{"playerChoke", 33837},
		{"playerCommandBot", 33652},
		{"playerForceDeathAnim", 32791},
		{"playerHide", 32773},
		{"playerLinkTo", 32889},
		{"playerLinkToAbsolute", 32892},
		{"playerLinkToBlend", 32893},
		{"playerLinkToDelta", 32890},
		{"playerLinkWeaponViewToDelta", 32891},
		{"playerLinkedOffsetDisable", 32920},
		{"playerLinkedOffsetEnable", 32894},
		{"playerLinkedSetUseBaseAngleForViewClamp", 32922},
		{"playerLinkedSetViewZnear", 32921},
		{"playerRecoilScaleOff", 33495},
		{"playerRecoilScaleOn", 33494},
		{"playerSetExponentialFog", 33305},
		{"playerSetGroundReferenceEnt", 32910},
		{"predictStreamPos", 33427},
		{"queueDialogForPlayer", 33788},
		{"registerParty", 33439},
		{"releaseClaimedTrigger", 32785},
		{"relinquishClaimedNode", 33683},
		{"remoteCameraSoundscapeOff", 33292},
		{"remoteCameraSoundscapeOn", 33291},
		{"remoteControlTurret", 32990},
		{"remoteControlTurretOff", 32991},
		{"remoteControlVehicle", 33281},
		{"remoteControlVehicleOff", 33282},
		{"remoteControlVehicleTarget", 33284},
		{"remoteControlVehicleTargetOff", 33285},
		{"reset", 32900},
		{"resetSpreadOverride", 33530},
		{"restoreDefaultDropPitch", 33108},
		{"resumeSpeed", 33414},
		{"rideVehicle", 33808},
		{"rotateBy", 33707},
		{"rotatePitch", 33451},
		{"rotateRoll", 33453},
		{"rotateTo", 33450},
		{"rotateVelocity", 33458},
		{"rotateYaw", 33452},
		{"sayAll", 33347},
		{"sayTeam", 33348},
		{"scaleOverTime", 32898},
		{"scriptModelClearAnim", 33391},
		{"scriptModelPlayAnim", 33390},
		{"scriptModelPlayAnimDeltaMotion", 33392},
		{"secondaryOffhandButtonPressed", 33507},
		{"setAISightLineVisible", 33653},
		{"setAcceleration", 33412},
		{"setActionSlot", 33532},
		{"setAgentAttacker", 33661},
		{"setAimSpreadMovementScale", 33531},
		{"setAirResitance", 33418},
		{"setAngles", 33582},
		{"setAnimClass", 33692},
		{"setAnimMode", 33672},
		{"setAnimScale", 33670},
		{"setAnimState", 33694},
		{"setAutoRotationDelay", 33106},
		{"setBlurForPlayer", 33485},
		{"setBottomArc", 33105},
		{"setCanDamage", 33461},
		{"setCanRadiusDamage", 33462},
		{"setCardDisplaySlot", 33466},
		{"setChannelVolume", 33572},
		{"setChannelVolumes", 33512},
		{"setClientDvar", 33522},
		{"setClientDvars", 33523},
		{"setClientOmnvar", 33521},
		{"setClientOwner", 33650},
		{"setClientSpawnSightTraces", 33524},
		{"setClipMode", 33674},
		{"setClock", 32972},
		{"setClockUp", 32973},
		{"setClothType", 33703},
		{"setCommonPlayerData", 33342},
		{"setCommonPlayerDataReservedInt", 33820},
		{"setContents", 32951},
		{"setConvergenceHeightPercent", 33069},
		{"setConvergenceTime", 33068},
		{"setConveyorBelt", 33322},
		{"setCoopPlayerData", 33341},
		{"setCoopPlayerDataReservedInt", 33830},
		{"setCorpseFalling", 33711},
		{"setCursorHint", 32977},
		{"setDeceleration", 33413},
		{"setDefaultDropPitch", 33107},
		{"setDepthOfField", 33153},
		{"setDroneGoalPos", 33733},
		{"setEMPJammed", 33304},
		{"setEnterTime", 33382},
		{"setEntityOwner", 33654},
		{"setEyesOnUplinkEnabled", 32950},
		{"setFXKillDefOnDelete", 33800},
		{"setGoalEntity", 33668},
		{"setGoalNode", 33667},
		{"setGoalPos", 33665},
		{"setGoalRadius", 33669},
		{"setGoalYaw", 33362},
		{"setGrenadeCookScale", 33770},
		{"setGrenadeThrowScale", 33769},
		{"setHintString", 32978},
		{"setHoverParams", 33353},
		{"setHybridScopeState", 33805},
		{"setIgnoreFoliageSightingMe", 33824},
		{"setJitterParams", 33352},
		{"setLeftArc", 33103},
		{"setLightIntensity", 33242},
		{"setLookAtEnt", 33371},
		{"setMLGCameraDefaults", 33789},
		{"setMLGSpectator", 33826},
		{"setMaterial", 32963},
		{"setMaxPitchRoll", 33417},
		{"setMaxTurnSpeed", 33675},
		{"setMissileMinimapVisible", 33814},
		{"setMode", 32868},
		{"setModel", 32938},
		{"setMoveSpeedScale", 33244},
		{"setNameplateMaterial", 33722},
		{"setNormalHealth", 32845},
		{"setOffhandPrimaryClass", 33592},
		{"setOffhandSecondaryClass", 33548},
		{"setOrientMode", 33671},
		{"setOrigin", 33580},
		{"setOtherEnt", 33651},
		{"setPerk", 33435},
		{"setPhysicsMode", 33673},
		{"setPlaneSplineId", 33771},
		{"setPlayerData", 33338},
		{"setPlayerNameString", 32903},
		{"setPlayerSpread", 33024},
		{"setPrivatePlayerData", 33340},
		{"setPulseFX", 32902},
		{"setRank", 33430},
		{"setRankedPlayerData", 33339},
		{"setRankedPlayerDataReservedInt", 33823},
		{"setRightArc", 33102},
		{"setRocketCorpse", 33732},
		{"setScriptMoverKillCam", 33597},
		{"setScriptableDamageOwner", 33799},
		{"setScriptablePartState", 33730},
		{"setScripted", 33678},
		{"setSentryCarrier", 33018},
		{"setSentryOwner", 33017},
		{"setSpawnWeapon", 33349},
		{"setSpectateDefaults", 33469},
		{"setSpeed", 33400},
		{"setSpeedImmediate", 33401},
		{"setSpreadOverride", 33529},
		{"setStance", 33144},
		{"setSurfaceType", 33712},
		{"setSwitchNode", 33397},
		{"setTargetEnt", 32964},
		{"setTargetEntity", 33020},
		{"setTargetYaw", 33364},
		{"setTeamForTrigger", 32782},
		{"setTenthsTimer", 32969},
		{"setTenthsTimerStatic", 32971},
		{"setTenthsTimerUp", 32970},
		{"setText", 32961},
		{"setThreatBiasGroup", 33138},
		{"setTimer", 32966},
		{"setTimerStatic", 32968},
		{"setTimerUp", 32967},
		{"setTopArc", 33104},
		{"setTurningAbility", 33419},
		{"setTurretMinimapVisible", 33019},
		{"setTurretModeChangeWait", 33141},
		{"setTurretTargetEnt", 33368},
		{"setTurretTargetVec", 33367},
		{"setTurretTeam", 33070},
		{"setValue", 32974},
		{"setVehGoalPos", 33361},
		{"setVehicleLookatText", 33358},
		{"setVehicleTeam", 33359},
		{"setVelocity", 33509},
		{"setViewHeight", 33681},
		{"setViewKickScale", 33533},
		{"setViewModelDepthOfField", 33154},
		{"setViewmodel", 33591},
		{"setVolMod", 33571},
		{"setWaitSpeed", 33398},
		{"setWallRunCost", 33832},
		{"setWaterSheeting", 33299},
		{"setWaypoint", 33664},
		{"setWaypointEdgeStyleRotatingIcon", 32976},
		{"setWaypointEdgeStyleSecondaryArrow", 32895},
		{"setWaypointIconOffscreenOnly", 32896},
		{"setWeapon", 33373},
		{"setWeaponAmmoClip", 33516},
		{"setWeaponAmmoStock", 33517},
		{"setWeaponHudIconOverride", 33302},
		{"setWeaponModelVariant", 33807},
		{"setWhizbyRadii", 33568},
		{"setWhizbySpreads", 33567},
		{"setYawSpeed", 33415},
		{"setYawSpeedByName", 33416},
		{"shellShock", 33149},
		{"shootTurret", 32992},
		{"show", 32848},
		{"showHudSplash", 33434},
		{"showToPlayer", 32774},
		{"showallparts", 32841},
		{"showpart", 32840},
		{"sightConeTrace", 33235},
		{"snapToTargetEntity", 33021},
		{"solid", 33459},
		{"spawn", 33381},
		{"spawnAgent", 33659},
		{"spawnTestClient", 33767},
		{"startAC130", 33595},
		{"startBarrelSpin", 32987},
		{"startFiring", 32984},
		{"startPath", 33396},
		{"startRagdoll", 32799},
		{"stopBarrelSpin", 32988},
		{"stopFiring", 32985},
		{"stopLocalSound", 33515},
		{"stopLoopSound", 32932},
		{"stopMoveSlide", 33449},
		{"stopRidingVehicle", 33809},
		{"stopRumble", 32936},
		{"stopShellShock", 33151},
		{"stopSliding", 33731},
		{"stopSounds", 32933},
		{"stunPlayer", 33150},
		{"suicide", 33377},
		{"switchToOffhand", 33547},
		{"switchToWeapon", 33545},
		{"switchToWeaponImmediate", 33546},
		{"takeAllWeapons", 33540},
		{"takeWeapon", 33539},
		{"teleport", 33393},
		{"thermalDrawDisable", 32768},
		{"thermalDrawEnable", 32805},
		{"thermalVisionFOFOverlayOff", 32947},
		{"thermalVisionFOFOverlayOn", 32946},
		{"thermalVisionOff", 32945},
		{"thermalVisionOn", 32943},
		{"thermalVisionOnShadowOff", 32944},
		{"trackerUpdate", 33344},
		{"transferMarksToNewScriptModel", 33298},
		{"turnEngineOff", 33408},
		{"turnEngineOn", 33409},
		{"turretFireDisable", 33109},
		{"turretFireEnable", 33140},
		{"turretSetBarrelSpinEnabled", 33776},
		{"unlink", 32844},
		{"unsetPerk", 33438},
		{"useButtonPressed", 33584},
		{"useBy", 32918},
		{"useModelCollisionBounds", 33825},
		{"useTriggerRequireLookAt", 33142},
		{"usingGamepad", 33598},
		{"vehicleDriveTo", 33314},
		{"vehicleTurretControlOff", 33312},
		{"vehicleTurretControlOn", 33375},
		{"vibrate", 33457},
		{"viewKick", 33194},
		{"visionSetMissileCamForPlayer", 33482},
		{"visionSetNakedForPlayer", 33480},
		{"visionSetNightForPlayer", 33481},
		{"visionSetPainForPlayer", 33484},
		{"visionSetPostApplyForPlayer", 33819},
		{"visionSetStage", 33718},
		{"visionSetThermalForPlayer", 33483},
		{"visionSyncWithPlayer", 33433},
		{"weaponLockFinalize", 33497},
		{"weaponLockFree", 33498},
		{"weaponLockNoClearance", 33432},
		{"weaponLockStart", 33496},
		{"weaponLockTargetTooClose", 33499},
		{"worldPointInReticleCircle", 33295},
		{"worldPointInReticleRect", 33296},
		{"worldPointToScreenPos", 33740},
	};
}