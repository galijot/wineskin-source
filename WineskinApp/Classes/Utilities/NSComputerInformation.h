//
//  NSComputerInformation.h
//  Wineskin Navy
//
//  Created by Vitor Marques de Miranda on 22/02/17.
//  Copyright © 2017 Vitor Marques de Miranda. All rights reserved.
//

#ifndef NSComputerInformation_Class
#define NSComputerInformation_Class

#define IS_SYSTEM_MAC_OS_10_6_OR_SUPERIOR   [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"10.6"]   // Snow Leopard
#define IS_SYSTEM_MAC_OS_10_7_OR_SUPERIOR   [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"10.7"]   // Lion
#define IS_SYSTEM_MAC_OS_10_8_OR_SUPERIOR   [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"10.8"]   // Mountain Lion
#define IS_SYSTEM_MAC_OS_10_9_OR_SUPERIOR   [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"10.9"]   // Mavericks
#define IS_SYSTEM_MAC_OS_10_10_OR_SUPERIOR  [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"10.10"]  // Yosemite
#define IS_SYSTEM_MAC_OS_10_11_OR_SUPERIOR  [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"10.11"]  // El Capitan
#define IS_SYSTEM_MAC_OS_10_12_OR_SUPERIOR  [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"10.12"]  // Sierra
#define IS_SYSTEM_MAC_OS_10_13_OR_SUPERIOR  [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"10.13"]  // High Sierra
#define IS_SYSTEM_MAC_OS_10_14_OR_SUPERIOR  [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"10.14"]  // Mojave
#define IS_SYSTEM_MAC_OS_10_15_OR_SUPERIOR  [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"10.15"]  // Catalina
#define IS_SYSTEM_MAC_OS_10_15_4_OR_SUPERIOR  [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"10.15.4"]  // Catalina ldtset
#define IS_SYSTEM_MAC_OS_11_0_OR_SUPERIOR   [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"11.00"]  // Big Sur
#define IS_SYSTEM_MAC_OS_12_0_OR_SUPERIOR   [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"12.0"]   // Monterey
#define IS_SYSTEM_MAC_OS_13_0_OR_SUPERIOR   [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"13.0"]   // Ventura
#define IS_SYSTEM_MAC_OS_14_0_OR_SUPERIOR   [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"14.0"]   // Sonoma

#define IS_SYSTEM_MAC_OS_SNOW_LEOPARD_OR_SUPERIOR   IS_SYSTEM_MAC_OS_10_6_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_LION_OR_SUPERIOR           IS_SYSTEM_MAC_OS_10_7_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_MOUNTAIN_LION_OR_SUPERIOR  IS_SYSTEM_MAC_OS_10_8_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_MAVERICKS_OR_SUPERIOR      IS_SYSTEM_MAC_OS_10_9_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_YOSEMITE_OR_SUPERIOR       IS_SYSTEM_MAC_OS_10_10_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_EL_CAPITAN_OR_SUPERIOR     IS_SYSTEM_MAC_OS_10_11_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_SIERRA_OR_SUPERIOR         IS_SYSTEM_MAC_OS_10_12_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_HIGH_SIERRA_OR_SUPERIOR    IS_SYSTEM_MAC_OS_10_13_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_MOJAVE_OR_SUPERIOR         IS_SYSTEM_MAC_OS_10_14_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_CATALINA_OR_SUPERIOR       IS_SYSTEM_MAC_OS_10_15_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_BIG_SUR_OR_SUPERIOR        IS_SYSTEM_MAC_OS_11_0_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_MONTRREY_OR_SUPERIOR       IS_SYSTEM_MAC_OS_12_0_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_VENTURA_OR_SUPERIOR        IS_SYSTEM_MAC_OS_13_0_OR_SUPERIOR
#define IS_SYSTEM_MAC_OS_SONOMA_OR_SUPERIOR         IS_SYSTEM_MAC_OS_14_0_OR_SUPERIOR

#define IsSetLdtSupported                   [NSComputerInformation isSystemMacOsEqualOrSuperiorTo:@"10.15.4"]  // Allow setting i386_set_ldt without entitlement
#define IsProcessTranslated                 [NSComputerInformation isProcessTranslated]  // Check if running under Rosetta2

#import <Foundation/Foundation.h>

@interface NSComputerInformation : NSObject

+(NSString*)macOsVersion;
+(BOOL)isSystemMacOsEqualOrSuperiorTo:(NSString*)version;

+(BOOL)isUsingFnKeysFunctions;

+(BOOL)isComputerMacDriverCompatible;

+(BOOL)isProcessTranslated;

@end

#endif
