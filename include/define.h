#undef CATCHMENT
#define GRIDBASED
#define	PFT_CLASSIFICATION       
#define LANDONLY

#undef VARIABLY_SATURATED_FLOW
#undef USE_DEPTH_TO_BEDROCK
#define Campbell_SOIL_MODEL
#undef  vanGenuchten_Mualem_SOIL_MODEL
#undef SOILPAR_UPS_FIT
#define THERMAL_CONDUCTIVITY_SCHEME_4
#undef  CoLM_hydro_DEBUG
#undef vsf_statistics

#define PLANT_HYDRAULIC_STRESS
#undef  DYN_PHENOLOGY             
#undef	SOILINI                   
#undef	SOIL_REFL_GUESSED         
#define	SOIL_REFL_READ            

#define	CLMDEBUG                  
#define  USEMPI
#undef  CaMa_Flood
#undef  CROP
#define BGC

#ifndef VARIABLY_SATURATED_FLOW
#undef  USE_DEPTH_TO_BEDROCK
#define Campbell_SOIL_MODEL
#undef  vanGenuchten_Mualem_SOIL_MODEL
#endif
