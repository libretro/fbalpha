// This file was generated by ../scripts/gamelist.pl (perl 5.018002)

// Declaration of all drivers
#define DRV extern struct BurnDriver
DRV		BurnDrvEightballact;
DRV		BurnDrvHero;
DRV		BurnDrvHunchbak;
DRV		BurnDrvHuncholy;
#undef DRV

// Structure containing addresses of all drivers
// Needs to be kept sorted (using the full game name as the key) to prevent problems with the gamelist in Kaillera
static struct BurnDriver* pDriver[] = {
	&BurnDrvEightballact,		// Eight Ball Action (DK conversion) [Parent set for working drivers, NOT WORKING]
	&BurnDrvHero,				// Hero [Parent set for working drivers, NOT WORKING]
	&BurnDrvHunchbak,			// Hunchback (set 1) [Parent set for working drivers, NOT WORKING]
	&BurnDrvHuncholy,			// Hunchback Olympic [Parent set for working drivers, NOT WORKING]
};
